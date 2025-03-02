#include <stdio.h>

#define InFile  "input.txt"
#define OutFile "output.txt"

#define size    101

 
int main(void)
{  
FILE *f;
FILE *fp; 
char sname[size];
char name[size]; 
char mname[size];

    f = fopen(InFile, "r"); 
    fp = fopen(OutFile, "w");
    
    while((fscanf(f, "%s %s %s", sname, name, mname))!=EOF){}
    
    fprintf(fp, "Hello, %s %s!", name, sname);
    fclose(f);
    fclose(fp);
    
    return 0;
}
