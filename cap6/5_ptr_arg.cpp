#include <iostream>

using namespace std;

double omega(long *k) {
  cout << "k = " << k << '\n';
  // k conține adr. lui i
  cout << "*k = " << *k << '\n';
  // *k = 35000
  double s = 2 + (*k) - 3;
  // s = 34999
  cout << "s = " << s << '\n';
  *k += 17; // *k = 35017
  cout << "*k = " << *k << '\n';
  return s;
}

int main() {
  long i = 35000;
  double w;
  cout << "i = " << i << '\n';
  cout << "Adr.lui i : " << &i << '\n';
  w = omega(&i);
  cout << "i = " << i << ", w = " << w << '\n'; // i = 350017 w = 34999
}