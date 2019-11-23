#include <iostream>
int main() {
  float a, b, max;
  std::cout << "a=";
  std::cin >> a;
  std::cout << "b=";
  std::cin >> b;

  if (a >= b) {
    max = a;
  } else {
    max = b;
  }

  std::cout << "Maximul este:" << max;

  return 0;
}
