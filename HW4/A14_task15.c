#include <stdio.h> 

int main (void) 
{
    int a, d1,d2,d3,x; 
    
    scanf ("%d", &a);

    d1 = a / 100;
    d2 = (a % 100) / 10;
    d3 = a % 10;
    
    x = (d1>d2)?d1:d2;
    x = (x>d3)?x:d3;
    
    printf("%d\n", x);
}
