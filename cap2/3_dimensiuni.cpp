#include <iostream>

int main() {
  float x, y = 4.25;
  char car = 'A';
  int a, b, c;
  std::cout << "Val.lui y este :" << y << '\n'; // Afişare: Val. lui y este:4.25
  x = y;
  std::cout << "Val.lui x este :" << x << '\n'; // Afişare: Val. lui x este:4.25
  a = x;
  std::cout
      << "Val.lui a este :" << a
      << '\n'; // Afişare:Val. lui a este:4, deoarece // a este de tip int!!!
  c = b = a;
  std::cout << "b = " << b << "\tc = " << c << '\n'; // Afişare: b=4	   c=4
  std::cout << "Introduceţi val.lui c : ";
  std::cin >> c;                                // citire val. pentru c
  std::cout << "Val.lui c este :" << c << '\n'; // Afişare: Val. lui c este:4

  return 0;
}
