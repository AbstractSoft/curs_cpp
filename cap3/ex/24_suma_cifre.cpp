// Să se genereze toate numerele naturale de 3 cifre pentru care cifra
// zecilor este egală cu diferența cifrelor sutelor și unităților

#include <iostream>

int main() {
  for (int i = 100; i <= 999; ++i) {
    char cifra_unitati = i % 10;
    char cifra_zecilor = (i / 10) % 10;
    char cifra_sutelor = i / 100;

    if (cifra_zecilor == cifra_sutelor - cifra_unitati) {
      std::cout << i << '\n';
    }
  }

  return 0;
}