#include <iostream>

using namespace std;

int main() {
  int a = 0, b = 10, c = 100, d = 200;
  int rezultat;
  rezultat = a && b;
  cout << "a && b = " << rezultat << '\n'; // Afişare  a&&b=0
  rezultat = a || b;
  cout << "a || b = " << rezultat
       << '\n'; // Afişare  a||b=1 (sau valoare nenula)
  rezultat = !a;
  cout << "!a = " << rezultat << '\n'; // Afişare  !a=1 (sau valoare nenula)
  rezultat = !b;
  cout << "!b = " << rezultat << '\n'; // Afişare  !b=0
  rezultat = (a > b) || (b > c);
  cout << "(a > b) || (b > c) = " << rezultat << '\n';
  // Afişare (a>b) || (b>c) =1(sau valoare nenula)
  rezultat = !(c < d);
  cout << "!(c < d) = " << rezultat << '\n'; // Afişare  !(c>d)=0
  rezultat = (a - b) && 1;
  cout << "(a - b) && 1 = " << rezultat << '\n';
  // Afişare (a-b)&&1 =1(sau valoare nenula)
  rezultat = d || b && a;
  cout << "d || b && a = " << rezultat << '\n'; // Afişare d||b&&a =1

  return 0;
}