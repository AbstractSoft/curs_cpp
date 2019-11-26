#include <iostream>

using namespace std;

double omega(long &k) {
  cout << hex << "Adr k = " << &k << ", Val k = " << k
       << '\n'; // Adr k, Val k=200001
  double s = 2 + k - 3;
  cout << "s = " << s << '\n'; // s=200000
  k += 17;
  cout << hex << "Adr k = " << &k << ", Val k = " << k
       << '\n'; // Adr k, Val k=200018
  return s;
}

int main() {
  long a = 200001;
  cout << hex << "Adr a = " << &a << ", Val a = " << a
       << '\n'; // Adr a, Val a=200001
  double w = omega(a);
  cout << "w = " << w << '\n'; // s=200000

  return 0;
}