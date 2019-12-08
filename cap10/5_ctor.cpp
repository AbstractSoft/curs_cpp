#include <iostream>

class data {
  int _zi, _luna, _an;

public:
  // constructor implicit vid
  data() {}

  // constructor cu parametri
  data(int zi, int luna, int an) {
    _zi = zi;
    _luna = luna;
    _an = an;
  }
};

int main() {
  data d;                // apelul constructorului vid
  data d1(12, 11, 1998); // apelul constructorului cu parametri

  return 0;
}