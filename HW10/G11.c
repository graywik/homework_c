#include <stdio.h>

#define InFile  "input.txt"
#define OutFile "output.txt"

#define size    1001

 
int main(void)
{  
FILE *f; 
//char str[size]; 

    f = fopen(InFile, "r"); 
    char c; int count=0; char pre_char;
    //перебираем символы в файле без записи в массив, 
    //как находим пробел или \n, сравниваем предыдущий символ с 'a'.
    while ((c = getc(f)) != EOF){
        if ((c == ' ') || (c == '\n')) {
            if (pre_char=='a') {
                count++;
            }
        }
        pre_char=c;
    }
    fclose(f);

    f = fopen(OutFile, "w");
    fprintf(f, "%d", count);
    fclose(f);
       
    return 0;
}
