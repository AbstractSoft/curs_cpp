class complex {
  double _real, _imag;

public:
  complex(double x, double y); // constructor
};

complex::complex(double x, double y)
    : _real(x), _imag(y) // Listă de iniţializare a membrilor
{}

int main() {
  complex z1(1, 3), z2(2, 3);

  return 0;
}