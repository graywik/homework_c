#include <stdio.h> 

int max_find(int max)
{
    int x;
    scanf("%d", &x);
    
    if (x==0) return max;
    
    return (max > x)?max_find(max):max_find(x);
}

int main (void) 
{
    printf("%d", max_find(-32768));
   
    return 0;
}
