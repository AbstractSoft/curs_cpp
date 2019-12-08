#include <iostream>

using namespace std;

union dreptunghi {
  double _lung, _lat;
  void seteaza_dimen(double, double);
  double arata_Lung() { return _lung; }
  double arata_Lat() { return _lat; }
  double calcul_arie(double s) { return s * _lat; }
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
  a.seteaza_dimen(l1, l1);
  cout << "Lung. drept: " << a.arata_Lung() << '\n';
  double s1 = a.arata_Lung();
  a.seteaza_dimen(l2, l2);
  cout << "Latimea dreptunghiului este: " << a.arata_Lat() << '\n';
  cout << "Aria dreptunghiului: " << a.calcul_arie(s1) << '\n';
  cout << "Dimens. uniunii: " << sizeof(dreptunghi) << '\n';

  return 0;
}
