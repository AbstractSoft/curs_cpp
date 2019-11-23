#include <iostream>

using namespace std;

int main() {
  int a = 1, b = 20, lim = 100;
  int rezultat;
  rezultat = a < b;
  cout << "a < b = " << rezultat << '\n';
  // Afişare:  a<b=1 (sau o altă valoare diferită de zero pentru alte
  // compilatoare)
  rezultat = a <= b;
  // operatorul realţional <= are prioritate mai mare decât cel de atribuire
  cout << "a <= b = " << rezultat << '\n';
  // Afisare:  a<b=1 (sau o alta valoare diferită de zero pentru alte
  // compilatoare)
  rezultat = a > b;
  cout << "a > b = " << rezultat << '\n'; // Afişare:  a<b=0
  rezultat = a + 10 >= lim;
  cout << "a + 10 >= lim = " << rezultat << '\n';
  /* Operatorul + are prioritate mai mare decât operatorul >= .   Afişare:
   * a+10>=lim=0 */
  rezultat = a + (10 >= lim);
  cout << "a + (10 >= lim) = " << rezultat << '\n';
  /* Schimbarea prioritatii operatorilor prin folosirea parantezelor;  Afişare:
   * a+(10>=lim)=1  */
  rezultat = a == b;
  cout << "a == b = " << rezultat << '\n'; // Afişare:  a==b=0
  cout << "a = " << a << '\n';             // Afişare:  a=1
  cout << "b = " << b << '\n';             // Afişare:  b=20
  rezultat = a = b;
  cout << "a = b = " << rezultat << '\n'; // Afişare:  a=b=20
  cout << "a = " << a << '\n';            // Afişare:  a=20
  cout << "b = " << b << '\n';            // Afişare:  b=20
  rezultat = 5 > b > 10;
  cout << "b = " << b << '\n'; // Afişare:  b=20
  cout << "5 > b > 10 = " << rezultat
       << '\n'; // Echivalent cu (5>b)>10 Afişare:  5>b>10=0
  return 0;
}
