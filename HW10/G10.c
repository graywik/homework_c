#include <stdio.h>

#define InFile  "input.txt"
#define OutFile "output.txt"

#define size    1001

 
int main(void)
{  
FILE *f; 
char str[size]; 

    f = fopen(InFile, "r"); 
    char c; int count=0; int seekStart=0; int max=0; int seek=0; int seekStartWord=0;
    while ((c = getc(f)) != EOF){
            if (count == 0) {
                seekStartWord=seek;
            }
            count++; seek++;
            if ((c == ' ') || (c == '\n')) {
                if (max<count) {
                    max=count; seekStart=seekStartWord;
                    count=0;
                }
            }
    }
    //переходим на пощицию самого длинного слова и читаем его
    fseek(f, seekStart, SEEK_SET);
    for (int i = 0; i < max; i++)
    {
        str[i]=getc(f);
    }
       
    fclose(f);

    f = fopen(OutFile, "w");
    for (int i = 0; i < max; i++){
        fprintf(f, "%c", str[i]);
    }
    fclose(f);
       
    return 0;
}
