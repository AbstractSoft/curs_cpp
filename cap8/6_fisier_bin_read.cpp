#include <cstdio>
#include <iostream>

using namespace std;

int main() {
  FILE *f;
  double buf;

  if ((f = fopen("test_nrb.dat", "rb")) == NULL) {
    cout << "\nNu se poate deschide fişierul test_nrb.dat" << '\n';
    return 1;
  }

  cout << "\nNumerele nenule citite din fişier sunt:" << '\n';
  while ((fread(&buf, sizeof(buf), 1, f)) == 1)
  // funcţia sizeof(buf) care returneaza numarul de octeţi necesari variabilei
  // buf.
  {
    cout << buf << "  ";
  }

  fclose(f);
  cout << '\n';

  return 0;
}
