#include <iostream>

int main() {
  float a, b;

  do {
    std::cout << "a=";
    std::cin >> a;
    std::cout << "b=";
    std::cin >> b;

    if (a >= b) {
      std::cout << "Maximul este:" << a;
    } else {
      std::cout << "Maximul este:" << b;
    }
    std::cout << '\n';

  } while (a != 0 || b != 0);

  return 0;
}