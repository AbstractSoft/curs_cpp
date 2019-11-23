#include <iostream>
#include <math.h>

using namespace std;

int main() {
  double T, S, S1;
  long k;
  k = 1;
  T = 1;
  S = T;
  double x, eps;
  cout << "x = ";
  cin >> x;
  cout << "eps = ";
  cin >> eps;

  // T= termenul general de la pasul curent; S=suma la pasul curent; S1=suma la
  // pasul anterior
  do {
    S1 = S;
    k = k + 1;
    T = pow(x, k) / k; // functia pow(x, k), aflată în <math.h> calculează x
    S = S + T;
    cout << k << "  " << T << "  " << S << '\n';
  } while ((S - S1) >= eps);

  cout << "Nr termeni=" << k << "  T=" << T << "   S=" << S << '\n';

  return 0;
}
