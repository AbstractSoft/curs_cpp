// Proiectati un algoritm care calculează factorialul
// unui numar natural dat - recursiv. (Prin definiţie 0!=1)
#include <iostream>

int factorial(int n);

int main() {
  int n;

  std::cout << "Introduceti un numar intreg pozitiv: ";
  std::cin >> n;

  std::cout << "Factorialul numarului " << n << " = " << factorial(n);
  return 0;
}

int factorial(int n) {
  if (n > 1) {
    return n * factorial(n - 1);
  } else {
    return 1;
  }
}