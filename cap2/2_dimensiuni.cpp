#include <iostream>

int main() {
  std::cout << "Un caracter este memorat pe " << sizeof(char) << " octet\n";
  std::cout << "Caracterul escape \\n este memorat pe ";
  std::cout << sizeof('\n') << " octet\n";
  std::cout << "Caracterul escape '\\n\' este memorat pe " << sizeof('\n');
  std::cout << " octet\n";
  std::cout << "Caracterul '9' este memorat pe " << sizeof('9') << " octet\n";
  std::cout << 'B';
  std::cout << ' ';
  std::cout << 'c';
  std::cout << '\t';
  std::cout << '\t';
  std::cout << '9';
  std::cout << '\b';
  std::cout << '\a';
  std::cout << 'L';
  std::cout << '\v';
  std::cout << 'L';
  std::cout << '\'';
  std::cout << '\t';
  std::cout << '\"';
  std::cout << '\\';
  std::cout << '\n';
  std::cout << '\a';
  std::cout << '\7';

  return 0;
}
