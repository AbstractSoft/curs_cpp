#include <cstdio>
#include <ctype.h>
#include <iostream>
#include <process.h>

using namespace std;

struct material {
  int codm, stoc, cant_c[4], cant_r[4];
  char den_mat[20], unit_mas[4];
  float pret;
};

material mat;
FILE *pf;

void crefis(), adaug(), modif(), sterg(), list(), help();

int main() {
  char optiune;
  do // afişarea unui meniu de opţiuni şi selecţia opţiunii
  {
    cout << '\n'
         << "Opţiunea Dvs. de lucru este" << '\n'
         << "(c|a|m|s|l|e|h pentru help) : ";
    cin >> optiune;
    switch (optiune) {
    case 'c':
    case 'C':
      crefis();
      break;
    case 'a':
    case 'A':
      adaug();
      break;
    case 'm':
    case 'M':
      modif();
      break;
    case 's':
    case 'S':
      sterg();
      break;
    case 'l':
    case 'L':
      list();
      break;
    case 'h':
    case 'H':
      help();
      break;
    case 'e':
    case 'E':
      break;
    default:
      help();
      break;
    }
  } while (toupper(optiune) != 'E');

  return 0;
}

// afişare informaţii despre utilizarea meniului
// şi opţiunile acestuia
void help() {
  cout << "Opţiunile de lucru sunt :" << '\n';
  cout << "    C,c-creare fisier" << '\n';
  cout << "    A,a-adaugare" << '\n';
  cout << "    M,m-modificare" << '\n';
  cout << "    L,l-listare" << '\n';
  cout << "    S,s-ştergere" << '\n';
  cout << "    H,h-help" << '\n';
  cout << "    E,e-exit" << '\n';
}

// returnează lungimea fişierului
long int lungfis(FILE *f) {
  long int posi, posf;
  posi = ftell(f);
  fseek(f, 0, SEEK_END);
  posf = ftell(f);
  fseek(f, posi, SEEK_SET);
  return posf;
}

// scriere în fişierul binar
void scrieb(int nr, void *a, FILE *f) {
  long depl = (nr - 1) * sizeof(material);
  fseek(f, depl, SEEK_SET);
  if (fwrite(a, sizeof(material), 1, f) != 1) {
    cout << "Eroare de scriere in fişier !" << '\n';
    exit(1);
  }
}

// citire din fişierul binar
void citireb(int nr, void *a, FILE *f) {
  long depl = (nr - 1) * sizeof(material);
  fseek(f, depl, SEEK_SET);
  if (fread(a, sizeof(material), 1, f) != 1) {
    cout << "Eroare de citire din fişier !" << '\n';
    exit(2);
  }
}

// afişarea informaţiilor despre un anumit material
void afismat(material *a) {
  int i;
  if (a->codm) {
    cout << "Cod material     : " << a->codm << '\n';
    cout << "Denumire material: " << a->den_mat << '\n';
    cout << "Cantitaţi contractate:" << '\n';
    for (i = 0; i < 4; i++) {
      cout << "Contractat  " << i << "   : " << a->cant_c[i] << '\n';
    }
    cout << "Cantitaţi recepţionate:" << '\n';
    for (i = 0; i < 4; i++) {
      cout << "Receptionat " << i << "  : " << a->cant_r[i] << '\n';
    }
    cout << "Stoc             : " << a->stoc << '\n';
    cout << "Unitate de masura: " << a->unit_mas << '\n';
    cout << "Pret unitar      : " << a->pret << '\n';
  } else {
    cout << "Acest articol a fost şters !" << '\n';
  }
}

// citirea informaţiilor despre un anumit material
void citmat(material *a) {
  int i;
  float temp;
  cout << "Introduceti codul materialului (0=End): ";
  cin >> a->codm;
  if (a->codm == 0) {
    return;
  }
  cout << "Introduceţi denumirea materialului : ";
  cin >> a->den_mat;
  cout << "Introduceţi unitatea de măsură : ";
  cin >> a->unit_mas;
  cout << "Introduceţi preţul : ";
  cin >> temp;
  a->pret = temp;
  cout << "Introduceţi cantitaţile contractate : " << '\n';
  for (i = 0; i < 4; i++) {
    cout << "Contractat " << i + 1 << "  : ";
    cin >> a->cant_c[i];
  }
  cout << "Introduceţi cantitaţile recepţionate : " << '\n';
  for (i = 0; i < 4; i++) {
    cout << "Receptionat " << i + 1 << "  : ";
    cin >> a->cant_r[i];
  }
}

// deschidere fisier
void crefis() {
  if ((pf = fopen("material.dat", "r")) != NULL) {
    cout << "Fişierul exista deja !" << '\n';
  } else {
    pf = fopen("material.dat", "w");
  }

  fclose(pf);
}

// adăugare de noi materiale
void adaug() {
  int nr_art;
  pf = fopen("material.dat", "a"); // deschidere pentru append
  nr_art = lungfis(pf) / sizeof(material);
  do {
    citmat(&mat);
    if (mat.codm) {
      scrieb(++nr_art, &mat, pf);
    }
  } while (mat.codm);
  fclose(pf);
}

// modificarea informaţiilor despre un material existent
void modif() {
  int nr_art;
  char ch;
  pf = fopen("material.dat", "r+");
  do {
    cout << "Numarul articolului de modificat este (0=END): ";
    cin >> nr_art;
    if (nr_art) {
      citireb(nr_art, &mat, pf);
      afismat(&mat);
      cout << "Modificaţi articol (D/N) ? ";

      do {
        cin >> ch;
        ch = toupper(ch);
      } while (ch != 'D' && ch != 'N');

      if (ch == 'D') {
        citmat(&mat);
        scrieb(nr_art, &mat, pf);
      }
    }
  } while (nr_art);
  fclose(pf);
}

// ştergerea din fişier a unui material
void sterg() {
  int n;
  long int nr_art;
  pf = fopen("material.dat", "r+");
  mat.codm = 0;
  nr_art = lungfis(pf) / sizeof(material);
  do {
    do {
      cout << "Numarul articolului de şters este (0=END): ";
      cin >> n;
      if (n < 0 || n > nr_art)
        cout << "Articol eronat" << '\n';
    } while (!(n >= 0 && n <= nr_art));
    if (n)
      scrieb(n, &mat, pf);
  } while (n);
  fclose(pf);
}

// afişare informaţii despre un anumit material
void list() {
  int nr_art;
  pf = fopen("material.dat", "r");
  do {
    cout << "Numarul articolului de listat este (0=END): ";
    cin >> nr_art;
    if (nr_art) {
      citireb(nr_art, &mat, pf);
      afismat(&mat);
      cout << '\n';
    }
  } while (nr_art);
  fclose(pf);
}