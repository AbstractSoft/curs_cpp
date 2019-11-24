#include <iostream>

using namespace std;

int main() {
  double a[10][10], // matricea a, cu m linii și n coloane
      b[10][10],    // matricea b, cu n linii și p coloane
      c[10][10];    // matricea c, cu m linii și n coloane
  int m, n, p, i, j, k;
  cout << "m = ";
  cin >> m;
  cout << "n = ";
  cin >> n;
  cout << "p = ";
  cin >> p;

  // citire matrice a
  for (i = 0; i < m; i++) {
    for (j = 0; j < n; j++) {
      cout << "a[" << i << "," << j << "]=";
      cin >> a[i][j];
    }
  }

  // citire matrice b
  for (i = 0; i < n; i++) {
    for (j = 0; j < p; j++) {
      cout << "b[" << i << "," << j << "]=";
      cin >> b[i][j];
    }
  }

  // interschimbarea liniilor matricei a:
  for (i = 0; i < m / 2; i++) {
    for (j = 0; j < n; j++) {
      double aux = a[i][j];
      a[i][j] = a[m - 1 - i][j];
      a[m - 1 - i][j] = aux;
    }
  }

  cout << "Matricea A cu liniile interschimbate:\n";
  for (i = 0; i < m; i++) {
    for (j = 0; j < p; j++) {
      cout << a[i][j] << '\t';
    }
    cout << '\n';
  }

  // calculul matricei at = a
  double at[10][10]; // at este matricea transpusa
  for (i = 0; i < n; i++) {
    for (j = 0; j < m; j++) {
      at[i][j] = a[j][i];
    }
  }

  cout << "A transpus=\n";
  for (i = 0; i < n; i++) {
    for (j = 0; j < m; j++) {
      cout << at[i][j] << '\t';
    }
    cout << '\n';
  }

  // citire matrice c
  for (i = 0; i < m; i++) {
    for (j = 0; j < n; j++) {
      cout << "c[" << i << "," << j << "]=";
      cin >> c[i][j];
    }
  }

  // coloane calculul matricei SUM=A+C, SUM(MxN):
  double sum[10][10]; // sum este matricea suma dintre a si c
  for (i = 0; i < m; i++) {
    for (j = 0; j < n; j++) {
      sum[i][j] = a[i][j] + c[i][j];
    }
  }

  cout << "Matricea SUM=A+C este:\n";
  for (i = 0; i < m; i++) {
    for (j = 0; j < n; j++) {
      cout << sum[i][j] << '\t';
    }
    cout << '\n';
  }

  double prod[10][10]; // prod este matricea produs dintre a si b
  for (i = 0; i < m; i++) {
    for (j = 0; j < p; j++) {
      prod[i][j] = 0;
      for (k = 0; k < n; k++) {
        prod[i][j] += a[i][k] * b[k][j];
      }
    }
  }

  cout << "Matricea produs dintre A si B este:\n";
  for (i = 0; i < m; i++) {
    for (j = 0; j < p; j++) {
      cout << prod[i][j] << '\t';
    }
    cout << '\n';
  }

  return 0;
}
