#include <stdio.h> 

int sum_digits(int n)
{
   if (n>0) 
   {
    int s = n%10 + sum_digits(n/10);
    return s;
   }
   else {return 0;}
     
}

int main (void) 
{
    int x;
    scanf("%d", &x);
    
    printf("%d", sum_digits(x));
   
    return 0;
}
