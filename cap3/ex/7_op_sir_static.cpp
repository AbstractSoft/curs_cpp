// Să se citească un șir de numere reale, până la întâlnirea numărului 800
// și să se afișeze valoarea minimă introdusă, suma și produsul elementelor
// șirului.

#include <iostream>

const double limit = 800;

void init_vector(double *v, int num_elem);
double gaseste_minim(double *v, int num_elem);
double calculeaza_suma(double *v, int num_elem);
double calculeaza_produs(double *v, int num_elem);

int main() {
  double n = 0;

  double v[100];
  init_vector(v, 100);
  int contor = 0;

  while (n != limit) {
    std::cout << "Introduceti elementul sirului: ";
    std::cin >> n;
    v[contor++] = n;
  }

  std::cout << "Valoarea minima: " << gaseste_minim(v, 100) << '\n';
  std::cout << "Suma elementelor: " << calculeaza_suma(v, 100) << '\n';
  std::cout << "Produsul elementelor: " << calculeaza_produs(v, 100) << '\n';

  return 0;
}

void init_vector(double *v, int num_elem) {
  for (int i = 0; i < num_elem; ++i) {
    *(v + i) = limit;
  }
}

double gaseste_minim(double *v, int num_elem) {
  double min = *v;
  for (int i = 1; i < num_elem; ++i) {
    double elem = *(v + i);
    if (elem == limit) {
      return min;
    }

    if (min > elem) {
      min = elem;
    }
  }

  return min;
}

double calculeaza_suma(double *v, int num_elem) {
  double sum = 0.0;
  for (int i = 0; i < num_elem; ++i) {
    double elem = *(v + i);
    if (elem == limit) {
      return sum;
    }
    sum += elem;
  }

  return sum;
}

double calculeaza_produs(double *v, int num_elem) {
  double prod = 1.0;
  for (int i = 0; i < num_elem; ++i) {
    double elem = *(v + i);
    if (elem == limit) {
      return prod;
    }
    prod *= elem;
  }

  return prod;
}