// Implementati un program pentru a testa
// daca un numar este prim sau nu

#include <cmath>
#include <iostream>

bool este_numar_prim(long long num);

int main() {
  long long num;
  std::cout << "Introduceti un numar intreg: ";
  std::cin >> num;

  std::cout << std::boolalpha << este_numar_prim(num);

  return 0;
}

bool este_numar_prim(long long num) {
  if (num % 2 == 0 || num == 1) {
    return false;
  }

  long long square_root = (long long)sqrt(num);
  for (long long i = 3; i <= square_root; i += 2) {
    if (num % i == 0) {
      return false;
    }
  }

  return true;
}
