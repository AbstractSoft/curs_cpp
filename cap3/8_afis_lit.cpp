#include <iostream>

using namespace std;

#define DIM_PAG 22 // dimensiunea paginii (numarul de randuri de pe o pagina)

int main() {
  cout << "LITERELE MARI:\n";
  int nr_lin = 0; // nr_lin este contorul de linii de pe un ecran
  for (char LitMare = 'A'; LitMare <= 'Z'; LitMare++) {
    if (nr_lin == DIM_PAG) {
      cout << "Apasati o tasta....";
      cin.get();
      nr_lin = 0;
    }
    cout << "Litera " << LitMare << " cu codul ASCII " << (int)LitMare << '\n';
    // conversia explicita (int)LitMare permite afisarea codului ASCII al
    // caracterului
    nr_lin++;
  }
  cout << "LITERELE MICI:\n";
  for (char LitMica = 'z'; LitMica >= 'a'; LitMica--) {
    if (nr_lin == DIM_PAG) {
      cout << "Apasati o tasta....";
      cin.get();
      nr_lin = 0;
    }
    cout << "Litera " << LitMica << " cu codul ASCII " << (int)LitMica << '\n';
    nr_lin++;
  }

  return 0;
}
