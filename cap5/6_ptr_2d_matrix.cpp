#include <iostream>

using namespace std;

int main() {
  int a[3][3] = {{5, 6, 7}, {55, 66, 77}, {555, 666, 777}};

  cout << "a = " << a << ", &a = " << &a << ", &a[0] = " << &a[0] << '\n';
  cout << "Pointeri catre vectorii linii\n";

  for (int i = 0; i < 3; i++) {
    cout << " *(a+" << i << ") = " << *(a + i);
    cout << " a[" << i << "] = " << a[i] << '\n';
  }

  // afișarea matricei
  for (int i = 0; i < 3; i++) {
    for (int j = 0; j < 3; j++) {
      cout << *(*(a + i) + j) << '\t'; // sau: cout << *(a[i] + j) << '\t';
    }

    cout << '\n';
  }

  return 0;
}
