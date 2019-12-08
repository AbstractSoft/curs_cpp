#include <iostream>

using namespace std;

class punct {
  double _x, _y;

public:
  punct() {
    _x = 0;
    _y = 0;
    cout << "Constr. implicit pentru punct(" << _x << ", " << _y << ")\n";
  }

  // constructor initializare
  punct(double, double);
  punct(punct &); // constructor copiere
  ~punct();       // destructor
  double abscisa() { return _x; }
  double ordonata() { return _y; }
  void afisare();
  void deplasare(double, double);
};

class segment {
private:
  punct _a, _b;

public:
  segment(punct &, punct &); // constructor
  segment(segment &);        // constructor copiere
  ~segment();                // destructor
  punct origine();
  punct varf();
  void afisare();
  void translatie(double, double);
};

punct::punct(double val_x, double val_y) {
  _x = val_x;
  _y = val_y;
  cout << "Constructor punct (" << _x << ", " << _y << ")\n";
}

punct::~punct() { cout << "Destructor punct (" << _x << ", " << _y << ")\n"; }

punct::punct(punct &p) {
  _x = p._x;
  _y = p._y;
  cout << "\nConstructor copiere pct (" << _x << ", " << _y << ")\n";
}

void punct::deplasare(double dx, double dy) {
  _x += dx;
  _y += dy;
}

void punct::afisare() { cout << "Punct (" << _x << ", " << _y << ')'; }

segment::segment(punct &a1, punct &b1) {
  _a = a1;
  _b = b1;
  cout << "Constructor segment[";
  _a.afisare();
  cout << ", ";
  _b.afisare();
  cout << "]\n";
}

segment::segment(segment &s) {
  _a = s._a;
  _b = s._b;
  cout << "Constructor copiere segment [";
  _a.afisare();
  _b.afisare();
  cout << "]\n";
}
punct segment::origine() { return _a; }

punct segment::varf() { return _b; }

void segment::afisare() {
  cout << "[";
  _a.afisare();
  cout << ", ";
  _b.afisare();
  cout << "]" << '\n';
}

segment::~segment() {
  cout << "Destructor segment [";
  _a.afisare();
  cout << ", ";
  _b.afisare();
  cout << "]\n";
}

void segment::translatie(double dx, double dy) {
  _a.deplasare(dx, dy);
  _b.deplasare(dx, dy);
}

int main() {
  punct p(7.8, -20.4), q(-4.82, 8.897), a, b;
  punct p3, q3;
  segment s(p, q);
  segment s1(p3, q3);
  printf("Apasati un caracter ptr. continuare!\n");
  cin.get();

  cout << "Punctele p si q: \n";
  p.afisare();
  cout << '\n';
  q.afisare();
  cout << '\n';

  cout << "Punctele p3 si q3: \n";
  p3.afisare();
  cout << '\n';
  q3.afisare();
  cout << '\n';

  cout << "Punctele a si b: \n";
  a.afisare();
  cout << '\n';
  b.afisare();
  cout << '\n';

  cout << "\nSegment s:";
  s.afisare();
  cout << '\n';

  punct d(1, 2);
  punct c;

  c = d; // operaţie de atribuire
  c.afisare();

  punct cc = c; // Constructor copiere pct (1,2)
  cout << "In urma copierii, cc: ";
  cc.afisare();

  cout << "\nSe deplaseaza punctul cc cu valorile 10, 20. Noile coord.: ";
  cc.deplasare(10, 20);
  cc.afisare();

  cout << "\nAbscisa cc: " << cc.abscisa() << " Ordonata cc: " << cc.ordonata()
       << '\n';

  cout << "Varf segment s: ";
  (s.varf()).afisare();

  cout << "Origine segment s: ";
  cc = s.origine();

  cc.afisare();
  s1 = s; // operatie de atribuire
  s1.afisare();

  cout << "Translatie s1 cu 100,1000. s1 translatat este: ";
  s1.translatie(100, 1000);
  s1.afisare();

  segment s2 = s1;
  cout << "Segment s2 obtinut prin copiere: ";
  s2.afisare();

  cout << "Iesire din main\n"; // Iesire din main

  return 0;
}
