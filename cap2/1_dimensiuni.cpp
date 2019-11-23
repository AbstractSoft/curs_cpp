#include <cfloat>
#include <climits>
#include <iostream>

#define PI 3.14359

int main() {
  std::cout << "Tipul int memorat pe: " << sizeof(int) << " octeti\n";
  std::cout << "Tipul int memorat pe: " << sizeof(23)
            << " octeti\n"; // 23-const. zecimala int
  std::cout << "Int maxim=" << INT_MAX << '\n';
  // const. simbolice INT_MAX, LONG_MAX, etc. - definite in <climits>
  std::cout << "Const. octala 077 are val zecimala:" << 077 << '\n';
  std::cout << "Const. hexazecimala d3 are val zecimala:" << 0xd3 << '\n';
  std::cout << "Tipul unsigned int memorat pe:" << sizeof(unsigned int)
            << " octeti\n";
  std::cout << "Tipul unsigned int memorat pe: " << sizeof(23U) << " octeti\n";
  std::cout << "Tipul unsigned int memorat pe: " << sizeof(23u) << " octeti\n";
  std::cout << "Tipul long int memorat pe: " << sizeof(long int) << " octeti\n";
  std::cout << "Tipul long int memorat pe: " << sizeof(23L) << " octeti\n";
  std::cout << "Tipul long int memorat pe: " << sizeof(23l) << " octeti\n";
  // 23L sau 23l-const. zecimala long int
  std::cout << "Long int maxim=" << LONG_MAX << '\n';
  std::cout << "Tipul unsigned long memorat pe:";
  std::cout << sizeof(unsigned long int) << " octeti\n";
  std::cout << "Tipul unsigned long memorat pe: " << sizeof(23UL)
            << " octeti\n";
  std::cout << "Tipul unsigned long memorat pe: " << sizeof(23ul)
            << " octeti\n";
  // 23UL sau 23ul-const. zecimala unsigned long int
  std::cout << "Tipul long long int memorat pe: ";
  std::cout << sizeof(long long int) << " octeti\n";
  std::cout << "Tipul long long int memorat pe: " << sizeof(long long int)
            << " octeti\n";
  std::cout << "Tipul short int memorat pe: " << sizeof(short int)
            << " octeti\n";
  std::cout << "Short int maxim=" << SHRT_MAX << '\n';
  std::cout << "Tipul float memorat pe: " << sizeof(float) << " octeti\n";
  std::cout << "Tipul float memorat pe: " << sizeof(23.7f) << " octeti\n";
  // 23.7f-const. zecimala float
  std::cout << "Float maxim=" << FLT_MAX << '\n';
  std::cout << "Float minim=" << FLT_MIN << '\n';
  std::cout << "Tipul double memorat pe: " << sizeof(double) << " octeti\n";
  std::cout << "Tipul double memorat pe: " << sizeof(23.7) << " octeti\n";
  // 23.7-const. zecimala double
  std::cout << "Const. decim. doubla in notatie stiintifica:" << 23.7e-5
            << '\n';
  std::cout << "Const.PI este :" << PI << '\n';
  std::cout << "Constanta PI este memorata pe :" << sizeof(PI) << "octeti\n";
  std::cout << "Double maxim=" << DBL_MAX << '\n'
            << "Double minim=" << DBL_MIN << '\n';
  std::cout << "Tipul long double memorat pe: " << sizeof(long double)
            << " octeti\n";
  std::cout << "Tipul long double memorat pe: " << sizeof(23.7L) << " octeti\n";
  // 23.7L-const. zecimala long double
  std::cout << "Cifra A din HEXA are val.:" << 0xA << "\n";
  std::cout << "Cifra B din HEXA are val.:" << 0XB << "\n";
  std::cout << "Cifra C din HEXA are val.:" << 0xc << "\n";
  std::cout << "Cifra D din HEXA are val.:" << 0xD << "\n";
  std::cout << "Cifra E din HEXA are val.:" << 0XE << "\n";
  std::cout << "Cifra F din HEXA are val.:" << 0xf << "\n";
  std::cout << "Val. const. hexa 0x7ac1e este: " << 0x7ac1e << '\n';
  std::cout << "Val. const. octale 171 este: " << 0171 << '\n';
  std::cout << "O const. octala se memoreaza pe " << sizeof(011) << " octeti\n";
  std::cout << "O const.oct.long se mem pe ";
  std::cout << sizeof(011L) << " octeti\n";
}
