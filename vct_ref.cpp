#include <iostream>

void fct(const int &v, int num) {
  for (int i = 0; i < num; ++i) {
    int item = *(&v + i);
    std::cout << item << '\t';
  }
}

int &invalid_ref() {
  int var;
  return var;
}

int main() {

  int v[10]{2, 1, 3, 2, 5, 1, 6, 4, 9, 15};

  fct(*v, 10);

  // std::cout << invalid_ref();

  return 0;
}