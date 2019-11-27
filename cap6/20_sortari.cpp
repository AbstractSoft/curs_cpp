#include <cstdio>
#include <cstdlib>
#include <ctime>

void gener(double v[], int n)
// functia de generare aleatoare a elementelor vectorului v, cu n elemente
{
  for (int i = 0; i < n; i++) {
    v[i] = 1.0 * rand() / 100000;
  }
}

void afis(double v[], int n)
// functia de afisare a vectorului
{
  for (int i = 0; i < n; i++) {
    printf("%10.2f", v[i]);
  }
  printf("\n");
}

void copie_vect(double v1[], double v[], int n)
// functie de "duplicare "a unui vector; copie vectorul v in vectorul v1
{
  for (int i = 0; i < n; i++)
    v1[i] = v[i];
}

void bubbleSort(double v[], int n) {
  int gata;
  gata = false;
  while (!gata) {
    gata = true;
    for (int i = 0; i < n - 1; i++)
      if (v[i] >= v[i + 1]) {
        double aux = v[i];
        v[i] = v[i + 1];
        v[i + 1] = aux;
        //			printf("Interschimbare element %d cu %d",i,i+1);
        //			afis(v,n);
        gata = false;
      }
  }
}

int cautMin(double v[], int indexIni, int n)
// cauta elementul minim, incepând de la pozitia indexIni, inclusiv
{
  double min = v[indexIni];
  int pozMin = indexIni;
  for (int i = indexIni; i < n; i++)
    if (v[i] <= min) {
      min = v[i];
      pozMin = i;
    }
  return pozMin;
}

void insertSort(double v[], int n) {
  int i;
  for (i = 0; i < n; i++) {
    int poz = cautMin(v, i, n);
    double aux = v[i];
    v[i] = v[poz];
    v[poz] = aux;
  }
}

void quickSort(double v[], int stg, int drt) {
  int i, j;
  i = stg;
  j = drt;
  double pivot, aux;
  if (i < j) {
    pivot = v[(stg + drt) / 2];
    while (i <= j) { // extindere partitie st si dr pana i se incrucis cu j
      while (i < drt && v[i] < pivot) {
        i++;
      }
      while (j > stg && v[j] > pivot) {
        j--;
      }
      if (i <= j) {
        aux = v[i];
        v[i] = v[j];
        v[j] = aux; // interschimbare elemente
        i++;
        j--;
      }
    }
    if (j > stg) {
      quickSort(v, stg, j);
    }
    if (i < drt) {
      quickSort(v, i, drt);
    }
  }
}

int main() {
  clock_t ti, tf;
  int n; // n = nr elemente vector
  printf("Nr componente vector:");
  scanf("%d", &n);
  double v[200], v1[200], v2[200], v3[200];
  gener(v, n);
  printf("\n\n****** BUBBLE SORT ******\n");
  copie_vect(v1, v, n);
  printf("\nInainte de ordonare: v1=");
  afis(v1, n);
  ti = clock();
  bubbleSort(v1, n);
  tf = clock();
  printf("\nDupa ordonare  : v1=");
  afis(v1, n);
  printf("%10.7f", tf - ti);
  printf("\n\n****** INSERT SORT ******\n");
  copie_vect(v2, v, n);
  printf("\nInainte de ordonare INSERT: v2=");
  afis(v2, n);
  insertSort(v2, n);
  printf("\nDupa ordonare       INSERT: v2=");
  afis(v2, n);
  int st = 0;
  int dr = n - 1;
  copie_vect(v3, v, n);
  printf("\n\n****** QUICK SORT ******\n");
  printf("\nInainte ordonare QUICK: v3=");
  afis(v3, n);
  quickSort(v3, st, dr);
  printf("\nDupa ordonare    QUICK: v3=");
  afis(v3, n);

  return 0;
}
