#include <cmath>
#include <iostream>

using namespace std;

double functie(double x) {
  return sqrt(0.1 + exp(0.5 * fabs(x))) / (1 + sqrt(0.3 + log(1 + pow(x, 4))));
}

double intrap(double a, double b, long int n, double (*f)(double)) {
  double h, s = 0;
  long k;
  if (a >= b) {
    return 0;
  }
  if (n <= 0) {
    n = 1;
  }
  h = (b - a) / n;
  for (k = 1; k < n; k++) {
    s += f(a + k * h);
  }
  return ((f(a) + f(b)) / 2 + s) * h;
}

int main() {
  long int j;
  double p, q;
  double eps, d2;
  double dif;
  cout << "Marg. inf:";
  cin >> p;
  cout << "Marg. sup:";
  cin >> q;
  cout << "Eroare:";
  cin >> eps;
  j = 1;
  double d1 = intrap(p, q, j, functie);
  do {
    j *= 2;
    if (j > LONG_MAX || j < 0)
      break;
    d2 = intrap(p, q, j, functie);
    dif = fabs(d1 - d2);
    d1 = d2;
    cout << "Nr.intervale " << j << " Val.integralei " << d2 << '\n';
  } while (dif > eps);

  cout << "\n\n-----------------------------------------------\n";
  cout << "Val. integralei: " << d2 << " cu eroare de:" << eps << '\n';

  return 0;
}
