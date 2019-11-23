#include <iostream>

int main() {
  double L, l;
  std::cout << "Lungime=";
  std::cin >> L;
  std::cout << "Latime=";
  std::cin >> l;

  double aria = L * l;
  std::cout << "Aria=" << aria;

  return 0;
}
