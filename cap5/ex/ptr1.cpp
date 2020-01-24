#include <iostream>

using namespace std;

int main() {
  int x = 6;
  int y = 7;
  int *ptr1 = new int;
  int *ptr2 = new int;

  *ptr1 = x;

  std::cout << std::hex << "Ptr1: " << ptr1 << std::endl; // adr1
  std::cout << std::hex << "Ptr2: " << ptr2 << std::endl; // adr2

  std::cout << "Valoarea ptr1: " << *ptr1 << std::endl; // 6
  std::cout << "Valoarea ptr2: " << *ptr2 << std::endl; // NULL

  ptr2 = ptr1;

  std::cout << "Valoarea ptr1: " << *ptr1 << std::endl; // 6
  std::cout << "Valoarea ptr2: " << *ptr2 << std::endl; // 6

  delete ptr1;
  ptr1 = nullptr;

  std::cout << std::hex << "Ptr1: " << ptr1 << std::endl; // adr1
  std::cout << std::hex << "Ptr2: " << ptr2 << std::endl; // adr1
  std::cout << "Valoarea ptr1: " << *ptr1 << std::endl;   // 0
  std::cout << "Valoarea ptr2: " << *ptr2 << std::endl;   // 0

  return 0;
}