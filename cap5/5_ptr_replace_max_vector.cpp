#include <iostream>

using namespace std;

int main() {
  int a[20];
  int n, max, indice;

  cout << "Nr.elemente :";
  cin >> n;

  // citirea elementelor vectorului
  for (int i = 0; i < n; i++) {
    cout << "a[" << i << "] = ";
    cin >> *(a + i); // sau a[i]
  }

  // aflarea valorii elementului maxim din vector și a poziției acestuia
  max = *a;
  indice = 0;
  for (int i = 0; i < n; i++) {
    if (max <= *(a + i)) {
      max = *(a + i);
      indice = i;
    }
  }

  // citirea valorii cu care se va înlocui elementul maxim si inlocuirea valorii
  int val;
  cout << "Valoare de inlocuire :";
  cin >> val;
  *(a + indice) = val;

  // afișarea noului vector
  for (int i = 0; i < n; i++) {
    cout << *(a + i) << '\t';
  }
  cout << '\n';

  /* în acest mod de implementare, în situaţia în care în vector există mai
   * multe elemente a căror valoare este egală cu valoarea elementului maxim, va
   * fi înlocuit doar ultimul dintre acestea (cel cu indicele maxim).*/

  return 0;
}
