#include <stdio.h> 

int main (void) 
{
    int a, b, c, d; 
    
    scanf ("%d%d%d", &a, &b, &c); 
    d = a+b+c;
    printf("%d+%d+%d=%d\n", a,b,c,d); 
    d = a*b*c;
    printf("%d*%d*%d=%d\n", a,b,c,d); 
    
    return 0; 
} 
