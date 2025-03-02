#include <stdio.h>

#define InFile  "input.txt"
#define OutFile "output.txt"

#define size    1001

 
int main(void)
{  
FILE *f; 
char str[size]; 

    f = fopen(InFile, "r"); 
char c; 
int count=0;
    while ((c = getc(f)) != EOF)
        if ((c >= 32) && (c <= 127)) {str[count++]=c;}
    fclose(f);
    
    if (count) {
        f = fopen(OutFile, "w");
        for (int i = 0; i < (count-1); i++)
        {
            if (str[i] == str[count-1]) {
                fprintf(f, "%d ", i);
            }
        }
        fclose(f);
    }

return 0;
}
