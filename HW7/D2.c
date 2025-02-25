#include <stdio.h> 

int sum(int x)
{
   int s=0;
   if (x>0) 
   {
    s = x + sum(x-1);
    return s;
   }
   else {return 0;}
     
}

int main (void) 
{
    int n;
    scanf("%d", &n);
    
    printf("%d", sum(n));
   
    return 0;
}
