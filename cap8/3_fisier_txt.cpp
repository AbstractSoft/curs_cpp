#include <cstdio>

int main() {
  int n = 250;
  FILE *pfsir;

  char mesaj[] = "\nIntroduceti siruri de caractere, urmate de Ctrl+Z(Ctrl+D "
                 "sub Linux):\n";
  char sir[250], *psir;
  fputs(mesaj, stdout);
  pfsir = fopen("f_sir.txt",
                "w"); // deschiderea fişierului f_şir.txt pentru scriere
  psir = fgets(sir, n,
               stdin); // citirea şirurilor din fişierul standard de intrare
  while (psir != NULL) {
    fputs(sir, pfsir); // scrierea în fişierul text
    psir = fgets(sir, n, stdin);
  }
  fclose(pfsir);

  return 0;
}
