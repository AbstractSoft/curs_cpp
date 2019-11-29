#include <iostream>

using namespace std;

struct persoana {
  char nume[20];
  int varsta;
  int salariu;
};

void cit_pers(struct persoana *ptr_pers) {
  cout << "Nume angajat:";
  cin >> ptr_pers->nume;
  cout << "Varsta angajat:";
  cin >> ptr_pers->varsta;
  cout << "Salariu angajat:";
  cin >> ptr_pers->salariu;
  cout << '\n';
}

int main() {
  struct persoana *p; // pointer catre date de tip persoana
  int nr_ang;

  cout << "Nr. angajati:";
  cin >> nr_ang;

  p = new persoana[nr_ang]; // alocare dinamica a memoriei pentru cei nr_ang
                            // angajati
  for (int i = 0; i < nr_ang; i++) {
    cit_pers(&p[i]);
  }

  cout << "\n\nDatele despre angajati:\n\n";

  for (int i = 0; i < nr_ang; i++) {
    cout << "Angajatul cu nr. " << i + 1 << '\n';
    cout << "NUME: " << p[i].nume << '\n';
    cout << "VARSTA: " << p[i].varsta << '\n';
    cout << "SALARIUL: " << p[i].salariu << '\n';
    cout << ("....\n");
  }
}
