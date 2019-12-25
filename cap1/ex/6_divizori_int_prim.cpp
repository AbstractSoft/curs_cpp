// Proiectati un algoritm care sa afiseze toti divizorii
// primi ai unui numar intreg introdus de la tastatura.

#include <cmath>
#include <iostream>

void afisare_divizori(int x);
bool este_numar_prim(long long num);

int main() {
  int n;
  std::cout << "Introduceti un numar intreg: ";
  std::cin >> n;

  afisare_divizori(n);

  return 0;
}

void afisare_divizori(int x) {
  for (int i = 2; i <= x / 2; i++) {
    if (x % i == 0 && este_numar_prim(i))
      std::cout << i << " ";
  }
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