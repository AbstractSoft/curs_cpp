#include <cstdio>
#include <process.h>

int main() {
  int c, i = 0;
  FILE *pfcar;
  char eroare[] = "\n Eroare deschidere fişier \n";
  pfcar = fopen("f_car1.txt",
                "r"); // deschiderea fişierului numit f_car1.txt în citire
  if (pfcar == NULL) {
    i = 0;
    while (eroare[i]) {
      putc(eroare[i++], stdout);
    }
    exit(1);
  }

  while ((c = getc(pfcar)) != EOF) // citire din fişier, la nivel de caracter
    putc(c, stdout);
  // scrierea caracterului citit în fişierul standard de ieşire (afişare pe
  // monitor)
  fclose(pfcar);

  return 0;
}
