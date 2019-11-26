#include <iostream>

using namespace std;

int main() {
  int a = -5, b = 12, *pi = &a;
  double u = 7.13, v = -2.24, *pd = &v;
  char sir1[] = "sirul 1", sir2[] = "sirul 2", *psir = sir1;
  cout << "a = " << a << ", &a = " << &a << ", b = " << b << ", &b = " << &b
       << '\n';
  cout << "*pi = " << *pi << ", pi = " << pi << ", &pi = " << &pi << '\n';

  cout << "*pd = " << *pd << ", pd = " << pd << ", &pd = " << &pd << '\n';

  cout << "*sir1 = " << *sir1 << ", sir1 = " << sir1 << ", &sir1 = " << &sir1
       << '\n';
  // *sir1==s  sir1==sirul 1  &sir1==0xffd6

  cout << "*sir2 = " << *sir2 << ", sir2 = " << sir2 << ", &sir2 = " << &sir2
       << '\n';
  // *sir2==s  sir2==sirul 2  &sir1==0xffce

  cout << "*psir = " << *psir << ", psir = " << psir << ", &psir = " << &psir
       << '\n';
  // *psir==s  psir==sirul 1  &sir1==0xffcc

  cout << "sir1 + 2 = " << (sir1 + 2) << ", psir + 2 =" << (psir + 2) << '\n';
  // sir1+2==rul 1  psir+2==rul 1

  cout << " *(sir1 + 2) = " << *(sir1 + 2) << '\n';
  // *(sir1+2)==r  valoarea elementului de indice 2

  void *pv1, *pv2;
  pv1 = psir;
  pv2 = sir1;
  cout << "pv1 = " << pv1 << ", &pv1 = " << &pv1 << '\n';
  cout << "pv2 = " << pv2 << ", &pv2 = " << &pv2 << '\n';
  pi = &b;
  pd = &v;
  psir = sir2;
  cout << "*pi = " << *pi << ", pi = " << pi << ", &pi = " << &pi << '\n';
  cout << "*pd = " << *pd << ", pd = " << pd << ", &pd = " << &pd << '\n';
  cout << "*psir = " << *psir << ", psir = " << psir << ", &psir = " << &psir
       << '\n';

  return 0;
}
