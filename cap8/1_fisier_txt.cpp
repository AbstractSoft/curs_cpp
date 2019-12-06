#include <cstdio>
#include <process.h>

int main() {
  int c, i = 0;

  FILE *pfcar;
  char mesaj[] =
      "\nIntroduceti caractere urmate de Ctrl+Z (Ctrl+D sub Linux):\n";
  char eroare[] = "\n Eroare deschidere fişier \n";

  while (mesaj[i]) {
    putchar(mesaj[i++]);
  }

  pfcar = fopen("f_car1.txt",
                "w"); // crearea fişierului cu numele extern f_car1.txt
  if (pfcar == NULL) {
    i = 0;
    while (eroare[i]) {
      putc(eroare[i++], stdout);
    }
    exit(1);
  }

  // sau:  while ((c=getc(stdin)) != EOF)
  // scrierea caracterului în fişier
  // închiderea fişierului
  while ((c = getchar()) != EOF) {
    putc(c, pfcar);
  }
  fclose(pfcar);

  return 0;
}
