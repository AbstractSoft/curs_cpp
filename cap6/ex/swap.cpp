#include <iostream>

void pschimb(double **x, double **y) {
  double *temp = *x;
  *x = *y;
  *y = temp;
}

int main() {
  double *x = new double{7};
  double *y = new double{10};

  pschimb(&x, &y);

  std::cout << "Valorea lui x : " << *x << ", valoarea lui y : " << *y << '\n';

  return 0;
}