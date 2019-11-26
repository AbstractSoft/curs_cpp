#include <iostream>

using namespace std;

int main() {
  int b, c;
  int &br = b; // br referință la altă variabilă (b)
  br = 7;
  cout << "b = " << b << '\n';   // b=7
  cout << "br = " << br << '\n'; // br=7
  cout << "Adr. br este : " << &br << '\n';
  cout << "Adr. b este : " << &b << '\n';
  b = 12;
  cout << "br = " << br << '\n'; // br=12
  cout << "b = " << b << '\n';   // b=12
  c = br;
  cout << "c = " << c << '\n'; // c=12

  return 0;
}
