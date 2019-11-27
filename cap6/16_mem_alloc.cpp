#include <cstdio>
#include <cstdlib>

/* pentru a putea realiza eliberarea memoriei în funcția main, funcția
   introd_val trebuie să returneze adresa de început a zonei de memorie alocate
   dinamic */
double *introd_val() {
  double *p;
  int nr;
  printf("Număr valori:");
  scanf("%d", &nr);

  if (!(p = (double *)malloc(nr * sizeof(double)))) {
    printf("Memorie insuficientă!\n");
    return NULL;
  }

  for (int i = 0; i < nr; i++) {
    printf("Val %d=", i + 1);
    scanf("%lf", p + i);
  }

  return p;
}

int main() {
  double *pt;
  pt = introd_val();
  // prelucrare vector
  free(pt);

  return 0;
}
