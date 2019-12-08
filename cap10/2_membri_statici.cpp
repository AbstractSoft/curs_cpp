#include <iostream>

using namespace std;

class exemplu {
  int _i; // dată membră privată, acces la ea doar prin metode

public:
  static int contor; // dată membru publica, neprotejată (scop didactic)
  void inc(void) { _i++; }
  void arata_i() { cout << "i: " << _i << '\n'; }
  void inc_contor(void) { contor++; }
  void init(void) { _i = 0; }
  static void arata_contor() { cout << "Contor=" << contor << '\n'; }
  static void functie(exemplu *);
} a1, a2, a3;

int exemplu::contor = 0; // iniţialiazarea datei membru statice

void exemplu::functie(exemplu *pe) {
  // i+=3;	//eroare, nu se cunoaste
  // obiectul in care este definit _i
  pe->_i++; // corect, este specificat "proprietarul" lui _i
  contor++; // variabilă statică, comună tuturor obiectelor
}

int main() {
  a1.init();
  a2.init();
  a3.init(); // a1._i=0, a2._i=0, a3._i=0
  a1.arata_i();
  a2.arata_i();
  a3.arata_i(); // _i=0, _i=0, _i=0
  a1.inc();
  a2.inc();
  a3.inc(); // a1._i=1, a2._i=1, a3._i=1
  a1.arata_i();
  a2.arata_i();
  a3.arata_i();          // _i=1, _i=1, _i=1
  a1.functie(&a1);       // contor=1, _i=2
  exemplu::functie(&a2); // contor=2, _i=2
  // functie();			 // incorect
  a1.inc_contor(); // contor=3
  exemplu::arata_contor();
  a2.inc_contor(); // contor=4
  exemplu::arata_contor();
  a3.inc_contor(); // contor=5
  exemplu::arata_contor();
  exemplu::arata_contor();
  exemplu::contor += 100;                       // membru public; contor=105
  cout << "Contor=" << exemplu::contor << '\n'; // Contor=105

  return 0;
}