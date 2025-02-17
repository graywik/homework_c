#include <stdio.h> 

int dig_to_num(char x)
{
    
   return (x>='0' && x<='9')?(x-0x30):0;
}

int main (void) 
{
    char c;
    int sum=0;

    while( (c=getchar())!='.')
    {
       sum += dig_to_num(c);
    }
    printf("%d", sum);
       
    return 0;
}
