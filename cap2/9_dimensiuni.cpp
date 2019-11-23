#include <iostream>

using namespace std;

int main() {
  double lmin, lmax, nr;
  cout << "Numar = ";
  cin >> nr;
  cout << "Limita inferioară a intervalului : ";
  cin >> lmin;
  cout << "Limita superioară a intervalului : ";
  cin >> lmax;
  cout << (nr >= lmin && nr <= lmax);

  return 0;
}
