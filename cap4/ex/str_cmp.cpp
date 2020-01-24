#include <cstdlib>
#include <iostream>

using namespace std;

// declaratie -> necesara compilatorului
// pentru a verifica validitatea utilizarii functiei
// "ce face"
char *read_string();
int str_cmp(const char *, const char *);

int main() {
  /*
    1. Citire siruri (2)
    2. implementarea functiei strcmp care primeste cele 2 siruri citite
    3. se parcurg sirurile si se compara caracter cu caracter
    4. Daca e diferenta, se opreste parcurgerea si se returneaza diferenta
  */

  std::cout << "Introduceti primul sir: ";
  char *sir_1 = read_string();

  std::cout << "Introduceti a doilea sir: ";
  char *sir_2 = read_string();

  int rezultat = str_cmp(sir_1, sir_2);
  if (rezultat > 0) {
    std::cout << "Primul sir are un caracter mai mare decat al doilea sir";
  } else if (rezultat < 0) {
    std::cout << "Al doilea sir are un caracter mai mare decat primul sir";
  } else {
    std::cout << "Sirurile sunt egale";
  }

  delete sir_1;
  delete sir_2;

  return 0;
}

char *read_string() {
  unsigned int len_max = 128;
  unsigned int current_size = 0;

  char *pStr = (char *)malloc(len_max);
  current_size = len_max;

  if (pStr != NULL) {
    int c = EOF;
    unsigned int i = 0;

    while ((c = getchar()) != '\n' && c != EOF) {
      pStr[i++] = (char)c;

      if (i == current_size) {
        current_size = i + len_max;
        pStr = (char *)realloc(pStr, current_size);
      }
    }

    pStr[i] = '\0';
  }

  return pStr;
}

// definitia functiei -> implenmentarea functiei "cum face"
int str_cmp(const char *sir_1, const char *sir_2) {
  char a = '\0';
  char b = '\0';
  int contor = 0;
  int rezultat = 0;
  do {
    a = sir_1[contor];
    b = sir_2[contor];
    rezultat = a - b;
    if (rezultat != 0) {
      return rezultat;
    }

    ++contor;
  } while (a != '\0');

  return rezultat;
}