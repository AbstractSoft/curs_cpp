#include <iostream>

using namespace std;

int main() {
  bool gata = false;
  int i, n, aux;
  cout << "introduceti nr.elem. vector: ";
  cin >> n;

  int *vect = new int[n];

  for (i = 0; i < n; ++i) {
    cin >> vect[i];
  }

  while (!gata) {
    gata = true;
    for (i = 0; i <= n - 2; i++) {
      if (vect[i] > vect[i + 1]) {
        aux = vect[i];
        vect[i] = vect[i + 1];
        vect[i + 1] = aux;
        gata = false;
      }
    }
  }

  for (i = 0; i < n; ++i) {
    cout << vect[i] << " ";
  }
}