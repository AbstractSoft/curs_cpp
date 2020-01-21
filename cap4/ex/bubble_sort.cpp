#include <iostream>

void bubble_sort(int[], int);

int main() {

  int vect[] = {92, 3, 67, 8, 2, 34, 1};
  int nr_elem = sizeof(vect) / sizeof(vect[0]);

  bubble_sort(vect, nr_elem);

  for (int i = 0; i < nr_elem; ++i) {
    std::cout << "Elementul [" << i << "] este: " << vect[i] << '\n';
  }

  return 0;
}

void bubble_sort(int vect[], int nr_elem) {
  int gata = false;
  int i;
  while (!gata) {
    gata = true;
    for (i = 0; i <= nr_elem - 2; ++i)
      if (vect[i] > vect[i + 1]) {
        int aux = vect[i];
        vect[i] = vect[i + 1];
        vect[i + 1] = aux;
        gata = false;
      }
  }
}