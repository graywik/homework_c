#include <stdio.h>

#define InFile  "input.txt"
#define OutFile "output.txt"

#define size    1001

 
int main(void)
{  
FILE *f;
FILE *fp; 
char str[size]; 

    f = fopen(InFile, "r"); 
    fp = fopen(OutFile, "w");
    
    while((fscanf(f, "%s", str))!=EOF){
        fprintf(fp, "%s \n", str);
    }
    fclose(f);
    fclose(fp);
    
    return 0;
}
