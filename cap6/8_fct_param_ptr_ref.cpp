#include <iostream>

using namespace std;

double func(int a, double b, double *c, double &d) {
  cout << "*********************** func *****************\n";
  cout << "a = " << a << ", b = " << b
       << '\n'; // a=7 (a=t prin val); b=21 (b=u prin val)
  cout << "c = " << c << ", *c = " << *c << '\n'; // c=ffe(c=w=&u) *c=21
  cout << "d = " << d << '\n';                    // d=17
  cout << "Adr d = " << &d << '\n';               // Adr d=ffe6 (adr d=adr v)
  a += 2;
  cout << "a = " << a << '\n'; // a=9
  d = 2 * a + b;
  cout << "d = " << d << '\n'; // d=39
  *c = 500;
  cout << "c = " << c << ", *c = " << *c << '\n'; // c=ffe(c=w=&u) *c=21
  cout << "*********************** func *****************\n";
  return b + (*c);
}

int main() {
  cout << "MAIN" << '\n';
  int t = 7;
  double u = 12, v = 17, *w, z;
  cout << "u = " << u << '\n'; // u=12
  w = &u;
  *w = 21;
  cout << "t = " << t << ", u = " << u << ", v = " << v; // t=7 u=12 v=17 *w=21
  cout << ", *w = " << *w << ", u = " << u << '\n';      //*w=21 u=21
  cout << hex << "w = " << w << ", Adr. u = " << &u
       << '\n'; // w=ffee Adr. u=ffee
  cout << hex << "v = " << v << ", Adr. v = " << &v
       << '\n'; // v=17.000 Adr v=ffe6
  z = func(t, u, w, v);
  cout << "t = " << t << ", u = " << u << ", v = " << v
       << '\n'; // t=7 u=21 (NESCHIMBATI) v=39 (v=d)
  cout << "*w = " << *w << ", z = " << z << '\n'; //*w=21 w=ffee z=42

  return 0;
}
