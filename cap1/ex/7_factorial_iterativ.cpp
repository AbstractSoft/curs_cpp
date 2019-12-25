// Proiectati un algoritm care calculează factorialul
// unui numar natural dat - iterativ. (Prin definiţie 0!=1)

#include <iostream>

int main() {
  unsigned int n;
  unsigned long long factorial = 1;

  std::cout << "Introduceti un numar intreg pozitiv: ";
  std::cin >> n;

  for (int i = 1; i <= n; ++i) {
    factorial *= i;
  }

  std::cout << "Factorialul numarului " << n << " = " << factorial;

  return 0;
}