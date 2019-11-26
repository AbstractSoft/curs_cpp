#include <cmath>
#include <iostream>

using namespace std;

double omega(double x, int n);
double psi(double x);

int main() {
  double u, z;
  int m;

  cout << "u = ";
  cin >> u;
  cout << "m = ";
  cin >> m;

  z = 2 * omega(2 * psi(u) + 1, m) + omega(2 * pow(u, 2) - 3, m + 1);
  cout << "z = " << z << '\n';

  return 0;
}

double omega(double x, int n) {
  double s = 0;
  int i;
  for (i = 1; i <= n; i++) {
    s += sin(i * x) * cos(2 * i * x);
  }
  return s;
}

double psi(double x) { return sqrt(1 + exp(-pow(x, 2))); }