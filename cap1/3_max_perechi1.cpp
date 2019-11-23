#include <iostream>

int main() {
  float a, b;
  std::cout << "a=";
  std::cin >> a;
  std::cout << "b=";
  std::cin >> b;

  while (a != 0 || b != 0) {
    if (a >= b) {
      std::cout << "Maximul este:" << a;
    } else {
      std::cout << "Maximul este:" << b;
    }

    std::cout << '\n';

    std::cout << "a=";
    std::cin >> a;
    std::cout << "b=";
    std::cin >> b;
  }
  return 0;
}