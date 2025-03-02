#include <stdio.h>

#define InFile  "input.txt"
#define OutFile "output.txt"

#define size    101

 
int main(void)
{  
FILE *f; 

    f = fopen(InFile, "r"); 

int count=0;
    fscanf(f, "%d", &count);
    fclose(f);

    if (count) {
        f = fopen(OutFile, "w");
        int cntW=65; int cntN=2;
        
        for (int i = 1; i < (count+1); i++)
        {
            if (i%2) {
                fprintf(f, "%c", cntW++);
            }
            else {
                if (cntN>9) {cntN=2;}
                fprintf(f, "%d", cntN);
                cntN+=2;
                
            }
        }
        fclose(f);
    }
     
    return 0;
}
