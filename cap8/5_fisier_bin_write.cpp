#include <cstdio>
#include <iostream>

using namespace std;

int main() {
  FILE *f;
  double nr;
  int x;

  if ((f = fopen("test_nrb.dat", "wb")) ==
      NULL) // deschidere flux binar, scriere
  {
    cout << "\nNu se poate deschide fişierul test_nrb.dat" << '\n';
    return 1;
  }

  cout << "\nIntroduceţi numere(diferite de 0) terminate cu un 0:" << '\n';
  cin >> nr;
  while (nr != 0) {
    x = fwrite(&nr, sizeof(nr), 1, f); // scriere în fişier
    cin >> nr;
  }

  fclose(f);

  return 0;
}
