#include <iostream>

using namespace std;

int main() {
  int nrcif = 0, N, b, rest, Nv, p = 1;
  long Nnou = 0;
  cout << "\nIntroduceti baza<10, b = ";
  cin >> b;
  cout << "Introduceti numarul in baza 10, nr = ";
  cin >> N;
  Nv = N;
  while (N != 0) {
    rest = N % b;
    N /= b;
    cout << "nr = " << N << '\n';
    cout << "rest = " << rest << '\n';
    nrcif++;
    Nnou += rest * p;
    p *= 10;
    cout << "Nr. nou = " << Nnou << '\n';
  }
  cout << "Numarul de cifre este " << nrcif << '\n';
  cout << "Nr. in baza 10 : " << Nv;
  cout << " convertit in baza : " << b << " este : " << Nnou << '\n';

  return 0;
}