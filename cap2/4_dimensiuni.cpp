#include <iostream>

using namespace std;

int main() {
  int a = 9;
  cout << "a++ = " << a++ << '\n'; // Afişare: a++=9
  cout << "a = " << a << '\n';     // Afişare: a=10
  a = 9;                           // Revenire in situatia anterioara
  cout << "++a = " << ++a << '\n'; // Afişare: ++a=10
  cout << "a = " << a << '\n';     // Afişare: a=10
  a = 9;
  cout << "a-- = " << a-- << '\n'; // Afişare: a--=9
  cout << "a = " << a << '\n';     // Afişare: a=8
  a = 9;                           // Revenire in situaţia anterioara
  cout << "--a = " << --a << '\n'; // Afişare: --a=8
  cout << "a = " << a << '\n';     // Afişare: a=8
  int z, x = 3;
  z = x++ - 2;
  cout << "z = " << z << '\n'; // Afişare: z=1
  cout << "x = " << x << '\n'; // Afişare: x=4
  x = 3;
  z = ++x - 2;
  cout << "z = " << z << '\n'; // Afişare: z=2
  cout << "x = " << x << '\n'; // Afişare: x=4

  return 0;
}
