#include <stdio.h> 

int is_digit(char x)
{
    
   return (x>='0' && x<='9')?1:0;
}

int main (void) 
{
    char c;
    int sum=0;

    while( (c=getchar())!='.')
    {
       if (is_digit(c)) sum++; 
    }
    printf("%d", sum);
       
    return 0;
}
