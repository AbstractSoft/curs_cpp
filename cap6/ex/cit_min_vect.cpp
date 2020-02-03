#include <climits>
#include <iostream>
/*Sa se afle elementul minim dintr-un vector de maxim 10 elemente.
Se vor scrie două functii: de citire a elementelor vectorului si de aflare a
elementului minim*/

void citire_vect(int[], int);
int calcul_minim(int[], int);

int main() {
  int nr = 4;
  int *v = new int[nr];
  citire_vect(v, nr);
  std::cout << "Minimul este: " << calcul_minim(v, nr);
  delete[] v;
}

void citire_vect(int v[], int nr) {
  for (int i = 0; i < nr; ++i) {
    std::cout << "Elem. [" << i << "]: ";
    std::cin >> v[i];
  }
}

int calcul_minim(int v[], int nr) {
  int minim = INT_MAX;
  for (int i = 0; i < nr; ++i) {
    if (v[i] < minim) {
      minim = v[i];
    }
  }
  return minim;
}