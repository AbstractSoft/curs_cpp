#include <cstdio>
#include <ctype.h>
#include <iostream>

using namespace std;

typedef struct {
  char nume[20];
  int marca;
  double salariu;
} angajat;

union {
  angajat a;
  char sbinar[sizeof(angajat)];
} buffer;

int main() {
  angajat a;
  FILE *pf;
  char cont;

  char nume_fis[256];
  cout << "Nume fisier care va fi creat: ";
  cin >> nume_fis;

  if ((pf = fopen(nume_fis, "wb")) == NULL) {
    cout << "\nEroare creare fişier " << nume_fis << "!\n";
    return 1;
  }

  do {
    cout << "Marca: ";
    cin >> a.marca;
    cout << "Nume: ";
    cin >> a.nume;
    cout << "Salariu: ";
    cin >> a.salariu;
    buffer.a = a;
    fwrite(buffer.sbinar, 1, sizeof(angajat), pf);
    cout << "Continuati introducerea de date (d/n) ?";
    cin >> cont;
  } while (toupper(cont) != 'N');

  fclose(pf);

  // citirea informatiilor
  if ((pf = fopen(nume_fis, "rb")) == NULL) {
    cout << "\nEroare citire fişier " << nume_fis << "!\n";
    return 1;
  }

  for (;;) {
    fread(buffer.sbinar, 1, sizeof(a), pf);
    a = buffer.a;
    if (feof(pf)) {
      exit(1);
    }
    cout << " Marca : " << a.marca << '\n';
    cout << " Numele : " << a.nume << '\n';
    cout << " Salariul : " << a.salariu << '\n';
  }
  fclose(pf);

  return 0;
}