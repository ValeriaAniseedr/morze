#include <stdio.h>
#include <string.h>
 
typedef struct {
    char c;
    char m[100];
} morze;


int main() {
    FILE *file;
    morze alf[26];
    int i=0;
    file = fopen("morze.txt", "r");
    char kostil[2];
    char str[] = "**** * *-** *-** ---  *-- --- *-* *-** -**";

    while (fscanf(file, "%c%s%c", &(alf[i].c), alf[i].m, kostil) != EOF) {
        ..printf("%c %s", alf[i].c, alf[i].m);
        i++;
    }
    fclose(file);

    char *pch = strtok (str, " ");
    while (pch != NULL) {
      for (int i=0; i<26;i++){
        if (alf[i].m == pch)
      printf("%c \n", alf[i].c);
      }
      printf("\n%s", pch);
      pch = strtok (NULL, " ");
    }
    pch = "****";
    printf("\n%s %s %d\n", pch, alf[7].m, pch == alf[7].m);
  return 0;
}


