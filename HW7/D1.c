#include <stdio.h> 

void num(int x)
{
   if (x>0) 
   {
    num(x-1);
    printf("%d ", x);
   }
}

int main (void) 
{
    int n;
    scanf("%d", &n);
    
    num(n);
   
    return 0;
}
