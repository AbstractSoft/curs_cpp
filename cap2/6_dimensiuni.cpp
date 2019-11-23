#include <iostream>

using namespace std;

int main() {
  int a, b;
  float c = 9.3;
  a = 3;
  b = 8;
  cout << "a = " << a << '\n'; // Afişare  a=3
  a += b;
  cout << "a = " << a << '\n'; // Afişare  a=11
  a -= b;
  cout << "a = " << a << '\n'; // Afişare  a=-5
  a *= b;
  cout << "a = " << a << '\n'; // Afişare  a=24
  a /= b;
  cout << "a = " << a << '\n'; // Afişare  a=0
  a %= b;
  cout << "a = " << a << '\n'; // Afisare  a=3

  return 0;
}