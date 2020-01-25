#include <iostream>

int main() {

  int a = 10, *pa, *pb;
  std::cout << "&a = " << &a << '\n';
  pa = &a;
  std::cout << "pa = " << pa << '\n';

  std::cout << "pa + 2 = " << pa + 2 << '\n';

  pb = ++pa;

  std::cout << "pa = " << pa << '\n';
  std::cout << "pb = " << pb << '\n';
  int i = pa - pb;
  std::cout << "i = " << i << '\n';

  return 0;
}