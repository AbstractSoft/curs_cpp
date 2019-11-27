#include <iostream>

using namespace std;

int fact(int n) {
  if (n < 0) {
    cout << "Argument negativ!\n";
    exit(2);
  } else if (n == 0) {
    return 1;
  } else {
    return n * fact(n - 1);
  }
}

int main() {
  int nr, f;
  cout << "nr=";
  cin >> nr;
  f = fact(nr);
  cout << nr << "!=" << f << '\n';

  return 0;
}
