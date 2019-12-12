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

  punct operator+(punct);
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

void punct::afisare() { cout << "Punct (" << _x << ", " << _y << ")\n"; }

punct punct::operator+(punct a) {
  punct p;
  p._x = _x + a._x; // echivalent cu p._x=this->_x+a._x;
  p._y = _y + a._y; // echivalent cu p._y=this->_y+a._y;
  return p;
}

int main() {

  punct A(1.1, 2.2);
  A.afisare();

  punct B(-5.5, -6.6);
  B.afisare();

  punct C;
  C = A + B;
  C.afisare();

  C = A + B + C;
  C.afisare();

  return 0;
}
