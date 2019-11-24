#include <iostream>

using namespace std;

int main() {
  int A[10][10];
  int nr_lin, nr_col;
  cout << "Nr. linii:";
  cin >> nr_lin;
  cout << "Nr. coloane:";
  cin >> nr_col;
  int i, j;
  // citirea elementelor unei matrici
  for (i = 0; i < nr_lin; i++) {
    for (j = 0; j < nr_col; j++) {
      cout << "A[" << i << "," << j
           << "]="; // afișarea unui mesaj prealabil citirii
      cin >> A[i][j];
    }
  }
  // afișarea elementelor matricei
  for (i = 0; i < nr_lin; i++) {
    for (j = 0; j < nr_col; j++)
      cout << A[i][j] << '\t';
    cout << '\n'; // după afișarea elementelor unei linii, se trece pe linia
                  // următoare
  }

  return 0;
}