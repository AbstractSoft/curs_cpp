#include <iostream>

using namespace std;

int cmmdc(int x, int y); // antet, prototip

int main() {
  int n1, n2;
  cout << "n1 = ";
  cin >> n1;
  cout << "n2 = ";
  cin >> n2;

  cout << "Cel mai mare divizor comun al nr-lor " << n1 << " și ";
  cout << n2 << " este " << cmmdc(n1, n2) << '\n';

  return 0;
}

int cmmdc(int x, int y) {
  if (x == 0 || y == 1 || x == 1 || y == 0) {
    return 1;
  }

  if (x < 0) {
    x = -x;
  }

  if (y < 0) {
    y = -y;
  }

  while (x != 0) {
    if (y > x) {
      int z = x;
      x = y;
      y = z;
    }
    x -= y; // sau: x%=y;
  }
  return y;
}