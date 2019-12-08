#include <iostream>
#include <math.h>

#define M_PI 3.14159265358979323846

using namespace std;
class complex {
  double _real, _imag;

public:
  int citire();
  void afisare();
  double modul();
  double arg();
  void incr_imag()
  // incrementeaza partea imaginara; FUNCŢIE INLINE, implicit, fiind definită în
  // interiorul clasei
  {
    _imag++;
  }
  inline void decr_imag();          // decrementarea partii imaginare
  double ret_real();                // returneaza partea reala
  double ret_imag();                // returneaza partea imaginara
  void adun_c(complex, complex);    // aduna 2 numere complexe
  void inm_c(complex *, complex *); // produsul a 2 numere complexe
};

inline double complex::modul() { return sqrt(_real * _real + _imag * _imag); }

int complex::citire() {
  cout << "P. reala: ";
  if (!(cin >> _real)) {
    return 0;
  }
  cout << "P. imag: ";
  if (!(cin >> _imag)) {
    return 0;
  }
  return 1;
}

void complex::afisare() {
  if (_imag >= 0) {
    cout << _real << " + " << _imag << "*i"
         << "\n";
  } else {
    cout << _real << _imag << "*i\n";
  }
}

double complex::arg() {
  if (_real == 0 && _imag == 0) {
    return 0.0;
  }

  if (_imag == 0) // z=p. reala
  {
    if (_real > 0) {
      return 0.0;
    } else {
      return M_PI;
    }
  }

  if (_real == 0) {
    if (_imag > 0) {
      return M_PI / 2;
    } else {
      return (3 * M_PI) / 2;
    }
  }

  double x = atan(_imag / _real);
  if (_real < 0) {
    return M_PI + x;
  }
  if (_imag < 0) {
    return 2 * M_PI + x;
  }
  return x;
}

inline void complex::decr_imag() { --_imag; }

double complex::ret_real() { return _real; }

double complex::ret_imag() { return _imag; }

void complex::adun_c(complex x1, complex x2) {
  _real = x1._real + x2._real;
  _imag = x1._imag + x2._imag;
}

void complex::inm_c(complex *x1, complex *x2) {
  _real = x1->_real * x2->_real - x1->_imag * x2->_imag;
  _imag = x1->_real * x2->_imag + x1->_imag * x2->_real;
}

int main() {
  complex z1;
  z1.citire();
  cout << "z1: ";
  z1.afisare();
  complex z2;
  z2.citire();
  cout << "z2: ";
  z2.afisare();
  cout << "Modulul z2: " << z2.modul() << '\n';
  cout << "Agument z2: " << z2.arg() << '\n';
  cout << "P. reala z2: " << z2.ret_real() << "P imag z2: " << z2.ret_imag()
       << '\n';
  z2.incr_imag();
  cout << "Dupa increm p imag: " << z2.ret_imag() << '\n';
  z2.afisare();
  complex z3;
  z3.adun_c(z1, z2);
  cout << "Adunare z1+z2: ";
  z3.afisare();
  complex *pz1 = &z1, *pz2 = &z2;
  z3.inm_c(pz1, pz2);
  cout << "Inmultire z1*z2: ";
  z3.afisare();

  return 0;
}
