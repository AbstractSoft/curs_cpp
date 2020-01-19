// Să se citească un număr natural n. Să se scrie un program care afișează
// dacă numărul n citit reprezintă sau nu, un an bisect (anii bisecți sunt
// multipli de 4, exceptând multiplii de 100, dar incluzând multiplii de 400).

#include <iostream>

int main() {
  short an;
  bool an_bisect = false;

  std::cout << "Introduceti anul: ";
  std::cin >> an;

  if (an % 400 == 0) {
    an_bisect = true;
  } else if (an % 100 == 0) {
    an_bisect = false;
  } else if (an % 4 == 0) {
    an_bisect = true;
  }

  std::cout << std::boolalpha << an_bisect;

  return 0;
}