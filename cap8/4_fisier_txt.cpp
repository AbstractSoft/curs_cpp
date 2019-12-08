#include <cstdio>

int main() {
  int n = 250;
  FILE *pfsir;
  char sir[250], *psir;

  pfsir = fopen("f_sir.txt", "r");
  psir = fgets(sir, n, pfsir);

  while (psir != NULL) {
    fputs(sir, stdout); // sau: puts(sir);
    // afişarea (scrierea în fişierul standard de ieşire) a
    // şirului (liniei) citit din fişierul text
    psir = fgets(sir, n, pfsir); // citirea unei linii de text din fişier
  }

  fclose(pfsir);

  return 0;
}
