#include <stdio.h> 

int main (void) 
{
    int a,b; 
        
    scanf ("%d%d", &a, &b);
    
    for (int i = a; i < b+1; i++)
    {
        int c = i*i;
        
        printf("%d ", c);
    }
    return 0;
}
