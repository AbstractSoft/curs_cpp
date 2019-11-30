#include <iostream>

using namespace std;

struct elev {
  char nume[20];
  int nr_matr;
  int note[3];
}; // definirea tipului elev

void cit_elevi(elev *a, int n);
void sort_elevi(elev *a, int n);
void swap(elev *e1, elev *e2);
void afis_elevi(elev *a, int n);

int main() {
  int nr_elevi;
  cout << "Nr. elevi: ";
  cin >> nr_elevi;
  elev *p = new elev[nr_elevi]; // declararea tabloului p, de tip elev
  cit_elevi(p, nr_elevi);       // apel functie
  sort_elevi(p, nr_elevi);
  afis_elevi(p, nr_elevi);
  return 0;
}

void cit_elevi(elev *a, int n) {
  for (int i = 0; i < n; ++i) {
    cout << "Nume elev: ";
    cin >> (a + i)->nume; // citirea numelui unui elev
    cout << "Nr. insriere: ";
    cin >> (a + i)->nr_matr;
    for (int j = 0; j < 3; ++j) { // citirea notelor obtinute
      do {
        cout << "Nota: " << j + 1 << " = ";
        cin >> (a + i)->note[j];

        // validarea notei
        if ((a + i)->note[j] < 0 || (a + i)->note[j] > 10) {
          cout << "Nota incorecta!....Repeta!\n";
        }
      } while ((a + i)->note[j] < 0 || (a + i)->note[j] > 10);
    }
  }
}

void sort_elevi(elev *a, int n) {
  int i, j;

  // Last i elements are already in place
  for (i = 0; i < n - 1; i++) {
    for (j = 0; j < n - i - 1; j++) {
      for (int k = 0; k < 20; ++k) {
        if ((a + j)->nume[k] > (a + j + 1)->nume[k]) {
          swap(a + j, a + j + 1);
          break;
        }
      }
    }
  }
}

void swap(elev *e1, elev *e2) {
  elev temp = *e1;
  *e1 = *e2;
  *e2 = temp;
}

void afis_elevi(elev *a, int n) {
  cout << "\nRaport elevi:\n";
  for (int i = 0; i < n; ++i) {
    int sum = 0;
    cout << "Nume elev: " << (a + i)->nume << '\n';
    for (int j = 0; j < 3; ++j) { // citirea notelor obtinute
      cout << "Nota: " << j + 1 << " = " << (a + i)->note[j] << '\n';
      sum += (a + i)->note[j];
    }
    cout << "Media notelor: " << (sum / 3) << '\n';
  }
}