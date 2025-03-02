#include <stdio.h>

#define InFile  "input.txt"
#define OutFile "output.txt"

#define size    10001

 
int main(void)
{  
FILE *f; 
char str[size]; 

    f = fopen(InFile, "r"); 
char c; 
int count=0; int cnt_sm=0; int cnt_big=0;
    while ((c = getc(f)) != EOF)
        if ((c >= 32) && (c < 127)) {str[count++]=c;}
    fclose(f);

    if (count) {
        f = fopen(OutFile, "w");
        for (int i = 0; i < count; i++){
            char c = str[i];
            if ((c>0x60) && (c<0x7B)) {cnt_sm++;}
            else if ((c>0x40) && (c<0x5B)) {cnt_big++;}
        }
        fprintf(f, "%d %d", cnt_sm, cnt_big);
        fclose(f);
    }
        
    return 0;
}
