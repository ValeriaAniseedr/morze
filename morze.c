#include <stdio.h>
#include <string.h>
 
typedef struct {
    char c;
    char m[100];
} morze;


int main() {
    FILE *file;
    morze alf[27];
    int i=0;
    file = fopen("morze.txt", "r");   
    while (fscanf(file, "%c%s%*c", &(alf[i].c), alf[i].m) != EOF)
        i++;
    fclose(file);
    char str[]="";
    gets(str);
    char *pch = strtok (str, " ");
    while (pch != NULL) {
      for (int i=0; i<26;i++){
        if (strcmp(pch, alf[i].m) == 0)
          printf("%c", alf[i].c);
      }
      pch = strtok (NULL, " ");
    }
    printf("\n");
  return 0;
}


