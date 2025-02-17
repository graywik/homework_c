#include <stdio.h> 

long int m_abs(signed long int x)
{
    return (x<0)?(-x):(x);
}

int main (void) 
{
    
    signed long int a;
    scanf("%ld", &a);

    printf("%ld", m_abs(a));
   
    return 0;
}
