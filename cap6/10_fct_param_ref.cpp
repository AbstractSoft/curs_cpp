#include <iostream>

using namespace std;

int func(const int &a) {
  cout << hex << "Adr a = " << &a << ", Val a = " << a << '\n';
  int b = 2 * a + 1;
  // modificarea valorii parametrului a nu este permisă
  cout << "b = " << b << '\n';
  return b;
}

int main() {
  const int c = 33;
  int u;
  cout << hex << "Adr c = " << &c << ", Val c = " << c << '\n';
  u = func(c);
  cout << "u = " << u << '\n';

  return 0;
}
