#include <iostream>

using namespace std;

int main() {
  int rezult, a = 20, b = 2, c = 25, d = 4;
  rezult = a - b;
  cout << "a - b = " << rezult << '\n'; // Afişare: a-b=18
  rezult = a + b;
  cout << "a + b = " << rezult << '\n'; // Afişare: a+b=22
  rezult = a * b;
  cout << "c *b = " << rezult << '\n'; // Afişare: c*b=50
  rezult = a / d;
  cout << "a / d = " << rezult << '\n'; // Afişare: a/d=5
  rezult = c % b;
  cout << "c % b = " << rezult << '\n'; // Afişare: c%b=1
  rezult = c / b * d;
  cout << "c / b *d = " << rezult << '\n'; // Afişare: c/b*d=48
  rezult = -b + a;
  cout << "- b + a = " << rezult << '\n'; // Afişare: -b+a=18
  rezult = -(b + a);
  cout << "- (b + a) = " << rezult << '\n'; // Afişare: -(b+a)=-22
  rezult = b + c * d;
  cout << "b + c *d = " << rezult << '\n'; // Afişare: b+c*d=102
  rezult = (b + c) * d;
  cout << "(b + c) *d = " << rezult << '\n'; // Afişare: (b+c)*d=108

  return 0;
}
