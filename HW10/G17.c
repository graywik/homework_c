#include <stdio.h>
#include <string.h>

#define InFile  "input.txt"
#define OutFile "output.txt"

#define SIZE    1001

void change_sym(char *s){
    int id1, id2; int id=0; int i=0; 
    while (s[i] != '\n')
    {
        if (s[i] != ' ') {  //запоминаю индексы, которые надо заменить, чтобы исключить пробелы
            if (!id) {
                id1=i; id++;
            } 
            else {
                id2=i; id++;
            }
        }
        if (id == 2) {  //если набрали два символа -> меняем их местами.
            char sym = s[id2];
            s[id2]=s[id1];
            s[id1]=sym;
            id=0;
        } 
    i++;
    }
}
 
 
int main(void)
{  
FILE *f;
char str[SIZE];

    char c; 
    int count=0; 
    // <- input
    f = fopen(InFile, "r");
    c = 0;
    while ((c != EOF) && (c != '\n')) {
        c = getc(f);
        str[count++]=c;
    }
    fclose(f);
    str[count]='\0';
    
    change_sym(&str[0]);

    // -> output
    f = fopen(OutFile, "w");    
    for (int i = 0; i < count; i++)
    {
        fprintf(f, "%c", str[i]);
    }
    fclose(f);
     
    return 0;
}
