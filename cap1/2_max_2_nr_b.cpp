#include <iostream>

int main() {
  float a, b;
  std::cout << "a=";
  std::cin >> a;
  std::cout << "b=";
  std::cin >> b;

  if (a >= b) {
    std::cout << "Maximul este:" << a;
  } else {
    std::cout << "Maximul este:" << b;
  }

  return 0;
}