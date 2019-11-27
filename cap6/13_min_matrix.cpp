#include <iostream>

using namespace std;

int min_tab(int a[][10], int nr_lin, int nr_col);
void afisare(int a[][10], int nr_lin, int nr_col);

int main() {
  int mat[10][10];
  int i, j, m, n;

  cout << "Nr. linii:";
  cin >> m;
  cout << "Nr. coloane:";
  cin >> n;

  for (i = 0; i < m; i++) {
    for (j = 0; j < n; j++) {
      cout << "mat[" << i << "," << j << "] = ";
      cin >> mat[i][j];
    }
  }

  afisare(mat, m, n);
  int min = min_tab(mat, m, n);
  cout << "Elem. min. : " << min << '\n';

  return 0;
}

void afisare(int a[][10], int nr_lin, int nr_col) {
  for (int i = 0; i < nr_lin; i++) {
    for (int j = 0; j < nr_col; j++)
      cout << a[i][j] << '\t';
    cout << '\n';
  }
}

int min_tab(int a[][10], int nr_lin, int nr_col) {
  int elm = a[0][0];
  for (int il = 0; il < nr_lin; il++) {
    for (int ic = 0; ic < nr_col; ic++) {
      if (elm >= a[il][ic]) {
        elm = a[il][ic];
      }
    }
  }

  return elm;
}