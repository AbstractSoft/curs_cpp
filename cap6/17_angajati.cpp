#include <cstdarg>
#include <cstdio>
#include <cstdlib>
#include <cstring>

int main(int argc, char *argv[]) {
  char **ang_ptr;
  char *nume;
  int nr_ang, i;

  if (argc == 2) {
    nr_ang = atoi(
        argv[1]); /* numărul angajaţilor este transmis ca argument către funcția
                     main. El este convertit din şir de caractere în număr */
    ang_ptr = (char **)calloc(nr_ang, sizeof(char *));
    if (ang_ptr == NULL) {
      printf("Memorie insuficientă!\n");
      exit(1);
    }

    nume = (char *)calloc(30, sizeof(char));
    for (i = 0; i < nr_ang; ++i) {
      printf("Nume angajat:");
      scanf("%s", nume);
      ang_ptr[i] = (char *)calloc(strlen(nume) + 1, sizeof(char));
      strcpy(ang_ptr[i], nume);
    }

    free(nume);
    printf("\n");
    for (i = 0; i < nr_ang; i++) {
      printf("Angajat nr %d: %s\n", i + 1, ang_ptr[i]);
    }
  } else {
    printf("Lansare în execuție: %s număr_de_angajaţi\n", argv[0]);
  }

  return 0;
}
