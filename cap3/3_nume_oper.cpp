#include <iostream>

int main() {
  char oper;

  std::cout << "Introduceti un operator aritmetic, simplu, binar : ";
  std::cin >> oper;
  if (oper == '+')
    std::cout << "Operatorul de adunare !\n";
  else if (oper == '-')
    std::cout << "Operatorul de scadere !\n";
  else if (oper == '*')
    std::cout << "Operatorul de inmultire !\n";
  else if (oper == '/')
    std::cout << "Operatorul de impartire !\n";
  else if (oper == '%')
    std::cout << "Operatorul rest !\n";
  else
    std::cout << "Operator ilegal !!!\n";

  return 0;
}
