#include <cstring>
#include <iomanip> // format-are cout
#include <iostream>

#define DIM_PAG 24

using namespace std;

struct elev {
  char nume[20];
  int nr_matr;
  int note[3];
}; // definirea tipului elev

void cit_elevi(elev *a, int n);
void ord_medii(elev *a, int n);
void afis_elev(elev *a, int n, char c);

int main() {
  int nr_elevi;

  cout << "Nr. elevi:";
  cin >> nr_elevi;

  elev *p = new elev[nr_elevi];
  cit_elevi(p, nr_elevi);
  afis_elev(p, nr_elevi, 'A'); // afisarea inscrisilor
  ord_medii(p, nr_elevi);
  afis_elev(p, nr_elevi, 'R'); // afisarea in ordinea descrescatoare a mediilor
  ord_alf(p, nr_elevi);        // ordonare alfabetica
  afis_elev(p, nr_elevi, 'O'); // afisarea in ordinea descrescatoare a mediilor

  return 0;
}

void cit_elevi(elev *a, int n) {
  for (int i = 0; i < n; i++) {
    cout << "Nume elev: ";
    cin >> (a + i)->nume; // sau	cin>>(*(a+i)).nume;
    cout << "Nr. insriere: ";
    cin >> (a + i)->nr_matr;
    for (int j = 0; j < 3; j++) {
      do {
        cout << "Nota: " << j + 1 << " =";
        cin >> (a + i)->note[j];
        if ((a + i)->note[j] < 0 || (a + i)->note[j] > 10)
          cout << "Nota incorecta!....Repeta!\n";
      } while ((a + i)->note[j] < 0 || (a + i)->note[j] > 10);
    }
  }
}

void ord_medii(elev *a, int n) {
  bool gata = false;
  int i;
  double med1, med2;
  elev aux;
  while (!gata) {
    gata = true;
    for (i = 0; i <= n - 2; i++) {
      med1 = 0;
      med2 = 0;
      for (int j = 0; j < 3; j++) {
        med1 += (a + i)->note[j];
        med2 += (a + i + 1)->note[j];
        // calculul mediilor pentru elementele vecine
      }
      med1 /= 3;
      med2 /= 3;
      if (med1 < med2) {
        aux = *(a + i);
        *(a + i) = *(a + i + 1);
        *(a + i + 1) = aux;
        gata = false;
      }
    }
  }
}

void ord_alf(elev *a, int n) {
  bool gata = false;
  int i;
  double med1, med2;
  elev aux;
  while (!gata) {
    gata = true;
    for (i = 0; i <= n - 2; i++) {
      if (strcmp((a + i)->nume, (a + i + 1)->nume) > 0) {
        aux = *(a + i);
        *(a + i) = *(a + i + 1);
        *(a + i + 1) = aux;
        gata = false;
      }
    }
  }
}

void afis_elev(elev *a, int n, char c) {
  if (c == 'A') {
    cout << "	LISTA INSCRISILOR	\n";
  }
  if (c == 'O') {
    cout << "	LISTA ALFABETICA	\n";
  }
  if (c == 'R') {
    cout << "	LISTA MEDII		\n";
  }
  cout << "Nr.crt.|Nr. Matricol|          NUME      |Nota1|Nota2|Nota3| MEDIA "
          "|\n";
  cout << "--------------------------------------------------------------------"
          "\n";
  int lin = 3;
  for (int i = 0; i < n; i++) {
    printf("%7d|%12d|%-20s|", i + 1, (a + i)->nr_matr, (a + i)->nume);
    double med = 0;
    for (int j = 0; j < 3; j++) {
      printf("%-5d|", (a + i)->note[j]);
      med += (a + i)->note[j];
    }
    med /= 3;
    printf("%-9.2f|\n", med);
    lin++;
    if (lin == (DIM_PAG - 1)) {
      printf("  Apasa o tasta....");
      cin.get();

      if (c == 'A') {
        cout << "	LISTA INSCRISILOR	\n";
      }
      if (c == 'O') {
        cout << "	LISTA ALFABETICA	\n";
      }
      if (c == 'R') {
        cout << "	LISTA MEDII		\n";
      }
      cout << "Nr.crt.|          NUME      |Nota1|Nota2|Nota3| MEDIA |\n";
      cout << "------------------------------------------------------ \n";
      int lin = 3;
    }
  }
  printf("  Apasa o tasta....");
  cin.get();
}
