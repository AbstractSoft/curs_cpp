// Proiectati un algoritm care sa afiseze toti
// divizorii unui numar intreg introdus de la tastatura.

#include <iostream>

void afisare_divizori(int x);

int main() {
  int n;
  std::cout << "Introduceti un numar intreg: ";
  std::cin >> n;

  afisare_divizori(n);

  return 0;
}

void afisare_divizori(int x) {
  for (int i = 2; i <= x / 2; i++) {
    if (x % i == 0)
      std::cout << i << " ";
  }
}