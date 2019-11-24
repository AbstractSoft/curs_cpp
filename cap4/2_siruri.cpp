#include <cstring>
#include <iostream>

using namespace std;

int main() {
  char sir1[] = "abcd", sir2[] = "abcde";
  cout << strcmp(sir1, sir2) << '\n'; // afişare: -1
  cout << strcmp(sir2, sir1) << '\n'; // afişare: 1
  cout << strcmp(
              sir1,
              "") // compararea variabilei sir1 cu constanta șir vid char str1
       << '\n';
  char str1[20] = "hello";
  char str2[20] = "goodbye";
  char str3[20];
  int difer, lungime;
  cout << "str1 = " << str1 << " str2 = " << str2 << '\n';
  difer = strcmp(str1, str2);
  if (difer == 0)
    cout << "Siruri echivalente !\n";
  else if (difer > 0)
    cout << str1 << " mai mare(lexicografic) decât " << str2 << '\n';
  else
    cout << str1 << " mai mic(lexicografic) decât " << str2 << '\n';
  cout << "str1 = " << str1 << '\n';
  cout << "str3 = " << str3 << '\n';
  strcpy(str3, str1);
  cout << "str1 = " << str1 << '\n';
  cout << "str3 = " << str3 << '\n';
  strcat(str3, str1);
  cout << "str1 = " << str1 << '\n';
  cout << "str3 = " << str3 << '\n';

  return 0;
}
