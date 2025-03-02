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
        if ((c > 32) && (c < 127)) {
            int b=0;
            for (int i = 0; i < count; i++)
            {
                if (c==str[i]) {b=1;}
            }
            if (b==0) {str[count++]=c;}
        }
    fclose(f);

    f = fopen(OutFile, "w");
    for (int i = 0; i < count; i++){
        fprintf(f, "%c", str[i]);
    }
    fclose(f);
       
    return 0;
}
