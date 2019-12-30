// Să se calculeze aria unui triunghi, cunoscându-se mărimea laturilor sale.
// Numerele care reprezintă mărimile laturilor vor fi introduse de utilizator.
// Se va testa mai întâi dacă cele 3 numere reprezentând mărimea laturilor
// pot forma un triunghi (a <= b+c, b <= c+a, c <= a+b).

#include <cmath>
#include <iomanip>
#include <iostream>

int main() {
  double a, b, c;

  std::cout << "Introduceti latura a: ";
  std::cin >> a;
  std::cout << "Introduceti latura b: ";
  std::cin >> b;
  std::cout << "Introduceti latura c: ";
  std::cin >> c;

  if (a > b + c || b > c + a || c > a + b) {
    std::cerr << "Segmentele introduse nu pot forma un triunghi\n";
    return 0;
  }

  double p = (a + b + c) / 2; // semiperimetrul triunghiului

  double aria = sqrt(p * (p - a) * (p - b) * (p - c));

  std::cout << "Aria este: " << std::setprecision(3) << aria;

  return 0;
}