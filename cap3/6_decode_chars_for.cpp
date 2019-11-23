#include <iostream>

using namespace std;

int main() {
  char c;
  int lmica = 0, lmare = 0;
  int lcif = 0, altcar = 0;

  cout << "Introduceti caracter : ";
  cin >> c;

  for (; c != '@';) {
    if (c >= 'A' && c <= 'Z') {
      cout << "Lit. mare!\n";
      lmare++;
    } else if (c >= 'a' && c <= 'z') {
      cout << "Lit. mica!\n";
      lmica++;
    } else if (c >= '0' && c <= '9') {
      cout << "Cifra!\n";
      lcif++;
    } else {
      cout << "Alt car.!\n";
      altcar++;
    }
    cout << "Introduceti caracter : ";
    cin >> c;
  }

  cout << "Ati introdus \n";
  cout << lmare << " litere mari, ";
  cout << lmica << " litere mici\n";
  cout << lcif << " cifre si \n";
  cout << altcar << " alte caractere\n";
  cin.get();

  return 0;
}