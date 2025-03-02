#include <stdio.h>

#define InFile  "input.txt"
#define OutFile "output.txt"

#define size    101

 
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
        for (int j = 0; j < 3; j++)
        {
            for (int i = 0; i < count; i++){
                fprintf(f, "%c", str[i]);
            }
            if (j!=2) fprintf(f, ", ");
        }
        fprintf(f, " %d", count);
        fclose(f);
    }
        
    return 0;
}
