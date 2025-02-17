#include <stdio.h> 

int main (void) 
{
    int a,b,c;
    c=0; 
        
    scanf ("%d%d", &a, &b);
    
    for (int i = a; i < b+1; i++)
    {
        c += i*i;
        
    }
    printf("%d ", c);
    return 0;
}
