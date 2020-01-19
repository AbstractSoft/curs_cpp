// Se citește câte un caracter până la întâlnirea caracterului @. Să se
// afișeze numărul literelor mari, numărul literelor mici și numărul cifrelor
// citite; care este cea mai mare (lexicografic) literă mare, literă mică și
// cifră introdusă.

#include <iostream>

int main() {
  char ch = '\0';
  short nr_lit_mici = 0;
  short nr_lit_mari = 0;
  short nr_cifre = 0;

  char max_lit_mici = 'a';
  char max_lit_mari = 'A';
  char max_cifre = '0';

  while (ch != '@') {
    std::cout << "Introduceti un caracter alfanumeric: ";
    std::cin >> ch;

    if (ch >= 'a' && ch <= 'z') {
      ++nr_lit_mici;
      if (ch > max_lit_mici) {
        max_lit_mici = ch;
      }
    } else if (ch >= 'A' && ch <= 'Z') {
      ++nr_lit_mari;
      if (ch > max_lit_mari) {
        max_lit_mari = ch;
      }
    } else if (ch >= '0' && ch <= '9') {
      ++nr_cifre;
      if (ch > max_cifre) {
        max_cifre = ch;
      }
    }
  }

  std::cout << "Numar litere mici: " << nr_lit_mici << '\n';
  std::cout << "Numar litere mari: " << nr_lit_mari << '\n';
  std::cout << "Numar cifre: " << nr_cifre << '\n';

  std::cout << "Max litera mica: " << max_lit_mici << '\n';
  std::cout << "Max litera mare: " << max_lit_mari << '\n';
  std::cout << "Max cifre: " << max_cifre << '\n';

  return 0;
}