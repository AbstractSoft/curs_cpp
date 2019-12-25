// Implementati algoritmul lui Euclid (pentru calculul
// celui mai mare divizor comun a 2 numere intregi)

#include <iostream>

int cmmdc(int a, int b);

int main() {
  int a, b;

  std::cout << "Introduceti primul numar: ";
  std::cin >> a;
  std::cout << "Introduceti al doilea numar: ";
  std::cin >> b;

  int rezultat = cmmdc(a, b);

  std::cout << "cmmdc al " << a << " si " << b << " este " << rezultat;

  return 0;
}

int cmmdc(int a, int b) {
  int t;
  while (b != 0) {
    t = b;
    b = a % b;
    a = t;
  }
  return a;
}