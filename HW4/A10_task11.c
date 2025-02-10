#include <stdio.h> 

int main (void) 
{
    int a, b, c, d, e, x; 
        
    scanf ("%d%d%d%d%d", &a, &b, &c, &d, &e);

    x = (a<b)?a:b; //сначала между a и b находим максимум
    x = (x<c)?x:c; //затем между большим в прошлый раз и с
    x = (x<d)?x:d; 
    x = (x<e)?x:e;
        
    printf("%d\n", x);
     
} 
