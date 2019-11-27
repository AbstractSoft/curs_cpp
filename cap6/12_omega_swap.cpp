#include <iostream>

using namespace std;

double omega(int j, double x, double t[], double *w) {
  double s;
  cout << "In funcția omega : " << '\n';
  cout << "j = " << j << ", t[j] = " << t[j] << ", t[j+1] = " << t[j + 1]
       << '\n';
  // j=2 (=i din main)
  // t[j]=-3.21 t[j+1]=7.44
  cout << "j = " << j << ", w[j] = " << w[j] << ", w[j+1] = " << w[j + 1]
       << '\n';
  // j=2 (=i din main)
  // w[j]=-21.16 w[j+1]=92.2

  t[j] = 100;
  *(t + j + 1) = 200;
  w[j] = 300;
  *(w + j + 1) = 400;

  cout << "După atribuiri : \n";
  cout << "j = " << j << ", t[j] = " << t[j] << ", t[j+1] = " << t[j + 1]
       << '\n';

  // După atribuiri:
  // j=2
  // t[j]=100 t[j+1]=200
  // w[j]=300 w[j+1]=400

  cout << "j = " << j << ", w[j] = " << w[j] << ", w[j+1] = " << w[j + 1]
       << '\n';

  int i = 2 * j + 1;
  x = x + 2.29 * i;
  s = x + 2 * t[0] - w[1];

  cout << "i = " << i << ", x = " << x << ", s = " << s << '\n';

  // i=5 x=1.123+2.29+5 s=x+2*1.32-(-15.34)

  return s;
}

void switch1(double *x, double *y) {
  double t = *x;
  *x = *y;
  *y = t;
}

void switch2(double &x, double &y) {
  double t;
  t = x;
  x = y;
  y = t;
}

int main() {
  double a = 123, b = 456, u = 1.123;
  int i = 2;
  double r[] = {1.32, 2.15, -3.21, 7.44, -15.8};
  double q[] = {12.26, -15.34, -21.16, 92.2, 71.6};
  cout << "i = " << i << ", u = " << u << '\n';
  double y = omega(i, u, r, q);
  cout << "i = " << i << ", u = " << u << '\n';
  // i=2 u=....
  cout << "omega(i,u,r,q) = y = " << y << '\n';
  cout << "r[i] = " << r[i] << ", r[i+1] = " << r[i + 1] << '\n';
  cout << "q[i] = " << q[i] << ", q[i+1] = " << q[i] << '\n';
  // r[i]=100 r[i+1]=200 q[i]=300 q[i+1]=400
  cout << "a = " << a << ", b = " << b << '\n'; // a=123 b=456
  switch1(&a, &b);
  cout << "Rez. intersch. a = " << a << ", b = " << b << '\n'; // a=456 b=123
  switch2(a, b);
  cout << "Rez. intersch. a = " << a << ", b = " << b << '\n'; // a=123 b=456
  cout << "r[i] = " << r[i] << ", r[i+1] = " << r[i + 1] << '\n';
  switch1(r + i, r + i + 1);
  cout << "Rez. intersch. r[i] = " << r[i] << ", r[i+1] = " << r[i + 1] << '\n';
  switch2(r[i], r[i + 1]);
  // switch2(*(r+i),*(r+i+1));
  cout << "Rez. intersch. r[i] = " << r[i] << ", r[i+1] = " << r[i + 1] << '\n';

  return 0;
}
