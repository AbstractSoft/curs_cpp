// Să se citească un număr întreg format din 4 cifre (abcd). Să se
// calculeze și să se afișeze valoarea expresiei reale:	4*a + b/20 - c + 1/d.

#include <iostream>

int main() {
  unsigned short numar;
  std::cin >> numar;

  double cifra_unitati = numar % 10;
  double cifra_zecilor = (numar / 10) % 10;
  double cifra_sutelor = (numar / 100) % 10;
  double cifra_miilor = (numar / 1000) % 100;

  std::cout << "Valoarea expresiei este: "
            << 4.0 * cifra_miilor + cifra_sutelor / 20.0 - cifra_zecilor +
                   1.0 / cifra_unitati;

  return 0;
}