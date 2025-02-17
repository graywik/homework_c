#include <stdio.h> 

int main (void) 
{
    int a; 
        
    scanf ("%d", &a);
    
    for (int i = 1; i < a+1; i++)
    {
        int b = i*i;
        int c = i*i*i;
        
        printf("%d %d %d\n", a, b, c);
    }
    return 0;
}
