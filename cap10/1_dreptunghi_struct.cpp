#include <iostream>

using namespace std;

struct dreptunghi {
  double _lung, _lat;

  void seteaza_dimen(double, double);
  double arata_Lung() { return _lung; }
  double arata_Lat() { return _lat; }
  double calcul_arie() { return _lung * _lat; }
};

void dreptunghi::seteaza_dimen(double lung, double lat) {
  _lung = lung;
  _lat = lat;
}

int main() {
  dreptunghi a;
  double l1, l2;
  cout << "Lungime: ";
  cin >> l1;
  cout << "Latime: ";
  cin >> l2;
  a.seteaza_dimen(l1, l2);

  cout << "Dimensiunile dreptunghiului sunt: " << a.arata_Lung();
  cout << " si " << a.arata_Lat() << '\n';
  cout << "Aria dreptunghiului: " << a.calcul_arie() << '\n';
  cout << "Dimensiunea structurii: " << sizeof(a) << " octeti" << '\n';

  return 0;
}