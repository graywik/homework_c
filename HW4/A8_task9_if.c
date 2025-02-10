#include <stdio.h> 

int main (void) 
{
    int a, b, c, x; 
        
    scanf ("%d%d%d", &a, &b, &c); 
    if (a>b) {
        if (a>c) {x=a;}
        else {x=c;}
    }
    else {
        if (b>c) {x=b;}
        else {x=c;}
        }
    
    printf("%d\n", x);
        
    return 0; 
} 
