#include <stdio.h> 

int main (void) 
{
    int a, b, c, x; 
        
    scanf ("%d%d%d", &a, &b, &c);
    
    x = (a>b)?a:b; //сначала между a и b находим максимум
    x = (x>c)?x:c; //затем между большим в прошлый раз и с
        
    printf("%d\n", x);
        
    return 0; 
} 
