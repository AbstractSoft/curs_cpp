#include <iostream>

using namespace std;

int main() {
  double n;
  cout << "Introduceti nr: ";
  cin >> n;
  double max = n;
  while (n != 900) {
    if (n >= max) {
      max = n;
    }
    cout << "Introduceti nr: ";
    cin >> n;
  }
  cout << "Max şir este: " << max << '\n';

  return 0;
}
