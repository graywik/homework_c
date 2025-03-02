#include <stdio.h>

#define InFile  "input.txt"
#define OutFile "output.txt"

#define SIZE    1001

int is_palindrom(char *str){    
    int size=0; 
    //определяем длину массива, не хочу использовать strlen 
    char *sz; sz=str; while(*sz++) {size++;}
    
    int b=1;
    for (int i = 0; i < (size/2); i++)
    {
        if (str[i] != str[size-1-i]) {b=0; break;}
    }
    return b;
}

 
int main(void)
{  
FILE *f;
char str[SIZE]; 

    f = fopen(InFile, "r"); 
    while((fscanf(f, "%s", str))!=EOF){}
    fclose(f);
        
    f = fopen(OutFile, "w");
    is_palindrom(&str[0])?fprintf(f, "YES"):fprintf(f, "NO");
    fclose(f);
        
    return 0;
}
