#include <iostream>

using namespace std;

void schimba(int *, int *); // prototipul functiei schimba

int main() {
  int x, y, *ptx, *pty;
  ptx = &x;
  pty = &y;
  cout << "x = ";
  cin >> x;
  cout << "y = ";
  cin >> y;
  cout << "Adr. lui x: " << &x << ", Val lui x: " << x << '\n';
  cout << "Adr. lui y: " << &y << ", Val lui y: " << y << '\n';
  cout << "Val. lui ptx: " << ptx;
  cout << ", Cont. locaţiei spre care pointează ptx: " << *ptx << '\n';
  cout << "Val. lui pty: " << pty;
  cout << ", Cont. locaţiei spre care pointează pty: " << *pty << '\n';
  schimba(ptx, pty);
  // SAU:  schimba(&x, &y);
  cout << "Adr. lui x: " << &x << " Val lui x: " << x << '\n';
  cout << "Adr. lui y: " << &y << " Val lui y: " << y << '\n';
  cout << "Val. lui ptx: " << ptx;
  cout << " Cont. locaţiei spre care pointează ptx: " << *ptx << '\n';
  cout << "Val. lui pty: " << pty;
  cout << " Cont. locaţiei spre care pointează pty: " << *pty << '\n';

  return 0;
}

void schimba(int *p1, int *p2) {
  cout << "Inceput functie schimba ------------------------" << '\n';
  cout << "Val. lui p1: " << p1;
  cout << ", Cont. locaţiei spre care pointează p1: " << *p1 << '\n';
  cout << "Val. lui p2: " << p2;
  cout << ", Cont. locaţiei spre care pointează p2: " << *p2 << '\n';
  int t = *p2;
  *p2 = *p1;
  *p1 = t;
  cout << "Val. lui p1: " << p1;
  cout << ", Cont. locaţiei spre care pointează p1: " << *p1 << '\n';
  cout << "Val. lui p2: " << p2;
  cout << ", Cont. locaţiei spre care pointează p2: " << *p2 << '\n';
  cout << "Sfarsit functie schimba ------------------------" << '\n';
}
