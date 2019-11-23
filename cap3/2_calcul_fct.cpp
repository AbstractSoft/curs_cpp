#include <cmath>
#include <iostream>

int main() {
  double x, f;
  std::cout << "x = ";
  std::cin >> x;

  if (x <= -7)
    f = -x * 6 + 20;
  else if (x <= 0)
    f = x + 30;
  else
    f = sqrt(x);

  std::cout << "f = " << f << '\n';

  return 0;
}
