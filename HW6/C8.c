#include <stdio.h> 

char toUP(char x)
{
   return (x>='a' && x<='z')?(x-0x20):x;
}

int main (void) 
{
    char c;

    while( (c=getchar())!='.')
    {
       printf("%c", toUP(c));
    }
       
    return 0;
}
