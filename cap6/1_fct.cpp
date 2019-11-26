#include <iostream>

using namespace std;

void f_afis() {
  cout << "Se executa instructiunile din corpul functiei\n";
  double a = 3, b = 9.4;
  cout << a << " * " << b << " = " << a * b << '\n';
  cout << "Iesire din functie !\n";
}

int main() {
  cout << "Intrare în funcția principala\n";
  f_afis(); // apelul funcției f_afis
  cout << "Terminat MAIN !\n";

  return 0;
}
