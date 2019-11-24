#include <iostream>

using namespace std;

int main() {
  double vect[100];
  int n; // n-numarul de elemente ale vectorului
  cout << "Nr. elemente: ";
  cin >> n;
  double aux;

  for (int i = 0; i < n; ++i) {
    cin >> vect[i];
  }

  for (int i = 0; i < n / 2; ++i) {
    aux = vect[i];
    vect[i] = vect[n - 1 - i];
    vect[n - 1 - i] = aux;
  }

  for (int i = 0; i < n; ++i) {
    cout << vect[i] << ", ";
  }

  return 0;
}
