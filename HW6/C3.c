#include <stdio.h> 

int middle(int a, int b)
{
   return (a+b)>>1;
}

int main (void) 
{
    
    int a,b;
        
    scanf("%d %d", &a, &b);
    
    printf("%d", middle(a,b));
   
    return 0;
}
