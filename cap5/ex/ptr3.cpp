#include <iostream>

int main() {
  char c = 'A';
  char *cc = &c;
  //std::cout << (*cc)++ << '\n';
  std::cout << ++c << '\n';
}