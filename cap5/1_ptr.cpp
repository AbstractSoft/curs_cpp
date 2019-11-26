#include <iostream>

using namespace std;

int main() {
  int x, y, *ptr;
  // ptr- variabilă pointer către un int; x, y-variabile predefinite, simple, de
  // tip int
  x = 5;
  cout << "Adresa variabilei x este : " << &x << '\n';
  cout << "Valoarea lui x : " << x << '\n';
  ptr = &x; // atribuire: variabila ptr conține adresa variabilei x
  cout << "Variabila pointer ptr are valoarea : " << ptr;
  cout << " si adreseaza obiectul : " << *ptr << '\n';
  y = *ptr;
  cout << "y = " << y << '\n'; // y=5
  x = 4;
  cout << "x = " << x << '\n';
  cout << "ptr = " << ptr << '\n';
  // x si  ptr reprezinta acelasi obiect, un intreg cu valoarea 4
  x = 70;     // echivalenta cu  ptr=70;
  y = x + 10; // echivalenta cu y= ptr+10

  return 0;
}