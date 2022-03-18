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
   

    file = fopen("morze_linux.txt", "r");   
    while (fscanf(file, "%c%s%*c", &(alf[i].c), alf[i].m) != EOF)
        i++;
   // for (int i=0; i<26;i++)
    //  printf("%c%s ",alf[i].c,alf[i].m);
    fclose(file);
    
    char ch;
    while ((ch = getchar()) != EOF) {
      char symbol[5];
      for (int i = 0; i < 5; i++) {
        if (ch == ' ') {
            symbol[i] = '\0';
          // printf(" ");
            break;
         } else {
            symbol[i]  = ch;
            ch = getchar();
          }
      }
      for (int i=0; i<26;i++){
        if (strcmp(symbol, alf[i].m) == 0)
          printf("%c", alf[i].c);
      }       
      if (symbol[0]=='\0')
        printf("!");
    }
    printf("\n");
  return 0;
}


