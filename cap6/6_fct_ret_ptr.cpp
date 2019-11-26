#include <iostream>

using namespace std;

double *f(double *w, int k) { // w conține adr. de început a vectorului a
  cout << "w = " << w << ", *w = " << *w
       << '\n'; // w = adr. lui a ; *w = a[0]=10
  return w += k;
  // incrementeaza pointerului w cu 2(val. lui k); deci w pointează către
  // elementul de indice 2 din vectorul a
}

int main() {
  double a[10] = {10, 1, 2, 3, 4, 5, 6, 7, 8, 9};
  int i = 2;
  cout << "Adr. lui a este : " << a << '\n';
  double *pa = a; // double *pa; pa=a;
  cout << "pa = " << pa
       << '\n'; // pointerul pa conține adresa de început a tabloului a
  // a[i] = * (a + i)
  // &a[i] = a + i
  pa = f(a, i);
  cout << "pa = " << pa << ", *pa = " << *pa << '\n';
  // pa conține adr. lui a[2], adica adr. a + 2 * sizeof(double);
  *pa = 2;

  return 0;
}