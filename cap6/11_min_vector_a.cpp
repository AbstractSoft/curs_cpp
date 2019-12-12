#include <iostream>

using namespace std;

void citireVector(int b[], int nr_elem);
int min_tab(int a[], int nr_elem);

int main() {
  int a[10];
  int n;
  cout << "n = ";
  cin >> n;
  citireVector(a, n);
  int min = min_tab(a, n);
  cout << "Elem. min: " << min << '\n';

  return 0;
}

void citireVector(int b[], int nr_elem) {
  for (int ind = 0; ind < nr_elem; ind++) {
    cout << "Elem " << ind + 1 << " = ";
    cin >> b[ind];
  }
}

int min_tab(int a[], int nr_elem) {
  int elm = a[0];
  for (int ind = 0; ind < nr_elem; ind++) {
    if (elm >= a[ind]) {
      elm = a[ind];
    }
  }
  return elm;
}