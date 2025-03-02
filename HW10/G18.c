#include <stdio.h>
#include <string.h>

#define InFile  "input.txt"
#define OutFile "output.txt"

#define SIZE    1001

void del_space(char *s){
    int space=0; int i=0; int j=0; 
    while (s[i])
    {
        //если j==0, то это начало файла, то удаляю все пробелы, иначе один оставляю
        if ((s[i] == ' ')) { 
            if ((!space) && (j!=0)) {space++;}
        }
        else {
            if (space) {s[j++]=' ';} //если были пробелы, то один записываю.
            s[j++]=s[i];
            space=0;
        }
        i++;
    }
    s[j]='\0';
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
    
    del_space(&str[0]);

    // -> output
    f = fopen(OutFile, "w");
    int i=0;    
    while (str[i])
    {
        fprintf(f, "%c", str[i++]);
    }
    fclose(f);
     
    return 0;
}
