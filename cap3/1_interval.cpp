#include <iostream>

int main() {
  double nr;
  std::cout << "Introduceti un numar : ";
  std::cin >> nr;
  int afis = (nr >= -1000 && nr <= 1000 ? 1 : -1);
  std::cout << afis;
  /* Sau, in varianta extinsa:
  int afis;
  if (nr >= -1000 && nr <= 10000)
    afis = 1;
  else
    afis= -1;
  cout << afis;
  */

  return 0;
}
