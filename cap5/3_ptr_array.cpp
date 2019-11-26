#include <iostream>

using namespace std;

int main() {
  int a[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
  int *pi1 = a;
  int *pi2 = &a[0];
  int *pi3;
  cout << "a = " << a << ", &a = " << &a << ", *a = " << *a << '\n';
  cout << "a + 1 = " << (a + 1) << ", &a[1] = " << &a[1] << '\n';
  cout << "a[1] = " << a[1] << ", *(a + 1) = " << *(a + 1) << '\n';
  cout << "pi1 = " << pi1 << ", pi2 = " << pi2 << '\n';
  int x = *pi1;
  /*  x primeşte valoarea locației a carei adresă se află în variabila pointer
      pi1, deci valoarea lui a[0] */
  cout << "x = " << x << '\n';
  x = *pi1++; // echivalent cu  *(pi1++)  =>  x=1
  cout << "x = " << x << '\n';
  x = (*pi1)++;
  /* x=0: întâi atribuirea, apoi incrementarea valorii spre care pointează pi1.
  În urma incrementării, valoarea lui a[0] devine 1 */
  cout << "x = " << x << '\n';
  cout << *pi1 << '\n';
  x = *++pi1; // echivalent cu  *(++pi1)
  cout << "x = " << x << '\n';
  x = ++(*pi1);
  cout << "x = " << x << '\n';
  pi1 = a;
  pi3 = pi1 + 3;
  cout << "pi1 = " << pi1 << " *pi1 = " << *pi1 << ", &pi1 =" << &pi1 << '\n';
  cout << "pi3 = " << pi3 << " *pi3 = " << *pi3 << ", &pi3 =" << &pi3 << '\n';
  cout << "pi3 - pi1 = " << (pi3 - pi1) << '\n'; // pi3-pi1=3

  return 0;
}
