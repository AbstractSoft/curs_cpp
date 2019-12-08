#include <iostream>

using namespace std;

class ex_mstat {
  int _a;
  static double s;

public:
  int ret_a() { return _a; }
  void set_a(int x) { _a = x; }

  static double ret_s() { return s; }
  static void set_s(double x) { s = x; }

  double ret1_s() { return s; }
  void set1_s(double x) { s = x; }
};

double ex_mstat::s;
/*se rezervă spaţiu în memoria statică pentru data membră
statică s, care figurează într-un singur exemplar pentru toate
instaţele clasei ex_mstat (figura 10.3.)*/

int main() {
  ex_mstat p, q;
  p.set_a(100);
  p.set_s(200);
  q.set_a(300);
  cout << "p._a: " << p.ret_a() << " p.s: " << p.ret_s();
  cout << " ex_mstat::ret_s: " << ex_mstat::ret_s()
       << '\n'; // p.a=100 p.s=200 ex_mstat::ret_s=200
  cout << "q._a: " << q.ret_a() << " q.s: " << q.ret1_s();
  cout << " ex_mstat::ret_s: " << ex_mstat::ret_s()
       << '\n'; // q.a=300 q.s=200 ex_mstat::ret_s=200
  ex_mstat::set_s(500.20);
  cout << "p._a: " << p.ret_a() << " p.s: " << p.ret_s();
  cout << " ex_mstat::ret_s()=" << ex_mstat::ret_s() << '\n';
  // p.a=100 p.s=500.20 ex_mstat::ret_s=500.20
  cout << "q._a: " << q.ret_a() << " q.s: " << q.ret1_s();
  cout << " ex_mstat::ret_s()=" << ex_mstat::ret_s() << '\n';
  // q.a=300 q.s=500.20 ex_mstat::ret_s=500.20
  q.set1_s(800.80);
  cout << "p.a: " << p.ret_a() << " p.s: " << p.ret_s();
  cout << " ex_mstat::ret_s()=" << ex_mstat::ret_s() << '\n';
  // p.a=100 p.s=800.20 ex_mstat::ret_s=800.20
  cout << "q._a=" << q.ret_a() << " q.s: " << q.ret1_s();
  cout << " ex_mstat::ret_s()=" << ex_mstat::ret_s() << '\n';
  // q.a=300 q.s=800.20 ex_mstat::ret_s=800.20
  p.set1_s(999);
  cout << "p._a:" << p.ret_a() << " p.s=" << p.ret_s();
  cout << " ex_mstat::ret_s()=" << ex_mstat::ret_s() << '\n';
  // p.a=100 p.s=999 ex_mstat::ret_s=999
  cout << "q.a=" << q.ret_a() << " q.s=" << q.ret1_s();
  cout << " ex_mstat::ret_s()=" << ex_mstat::ret_s() << '\n';
  // q.a=300 q.s=999 ex_mstat::ret_s=999

  return 0;
}
