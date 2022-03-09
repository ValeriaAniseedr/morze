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
    char *str = "**** * *-** *-** ---  *-- --- *-* *-** -**";
    char *ch="";

    while (fscanf(file, "%c%s%c", &(alf[i].c), alf[i].m, kostil) != EOF) 
        i++;
    fclose(file);
    for (size_t i = 0; i <strlen(str)-1; i++){
        if ((str[i]!= ' ') || (i==strlen(str)-1)) {
          //ch =strcat(ch,str[i]); 
          ch +=str[i];
          printf(" ch=%s\n",ch);
        }
        else {
          printf("%s ", ch);
          ch = "";
        }
    }
   
    return 0;
}


