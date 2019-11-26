#include <iostream>

using namespace std;

int main() {
  int a, *pa, *pb;
  cout << "&a = " << &a << '\n';
  pa = &a;
  cout << "pa = " << pa << '\n';
  cout << "pa + 2 = " << pa + 2 << '\n';
  pb = pa++;
  cout << "pb = " << pb << '\n';
  int i = pa - pb;
  cout << "i = " << i << '\n';

  return 0;
}