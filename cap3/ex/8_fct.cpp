// Să se calculeze f(x), x citit de la tastatură.

#include <cmath>
#include <iomanip>
#include <iostream>

double f(double x);

int main() {
  double x;
  std::cout << "Introduceti x: ";
  std::cin >> x;

  std::cout << "Valoarea lui f(x) este: " << std::setprecision(2) << f(x);

  return 0;
}

double f(double x) {
  double result = 0;

  if (x >= 0 && x < 1) {
    result = exp(x - 3);
  } else if (x >= 1 && x < 2) {
    result = sin(x) + cos(x);
  } else if (x >= 2 && x <= 100) {
    result = 0.9 * log(x + 3);
  }

  return result;
}