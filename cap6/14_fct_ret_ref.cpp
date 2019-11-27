#include <iostream>

using namespace std;

double &func(double &a, double b) {
  cout << "In functie:\n";
  cout << "Val a = " << a << ", Adr a = " << hex << &a
       << '\n';                // Val a=1.20, Adr a
  cout << "b = " << b << '\n'; // b=2.2
  a = 2 * b + 1;
  cout << "După atrib: val a = " << a << ", Adr a = " << hex << &a << '\n';
  // Val a=5.40, Adr a
  return a;
}

int main() {
  double c = 1.2;
  cout << "***************MAIN****************\n";
  cout << "Val c = " << c << ", Adr c = " << hex << &c
       << '\n'; // Val c=1.20, Adr c
  double d;
  cout << "Adr d = " << hex << &d << '\n'; // Adr. d
  d = func(c, 2.2);
  cout << "Val d = " << d << ", Adr d = " << hex << &d
       << '\n'; // Val d=5.40 Adr d

  return 0;
}