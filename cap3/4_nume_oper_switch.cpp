#include <iostream>

int main() {
  char oper;
  std::cout << "Introduceti operator aritmetic, simplu, binar : ";
  std::cin >> oper;

  switch (oper) {
  case ('+'):
    std::cout << "Operatorul de adunare !\n";
    break;
  case ('-'):
    std::cout << "Operatorul de scadere !\n";
    break;
  case ('*'):
    std::cout << " Operatorul de inmultire !\n";
    break;
  case ('/'):
    std::cout << "Operatorul de impartire !\n";
    break;
  case ('%'):
    std::cout << "Operatorul rest !\n";
    break;
  default:
    std::cout << "Operator ilegal !\n";
  }

  return 0;
}