#include <stdio.h> 

int sum(int x)
{
   int s=0;
   for (int i = 1; i < (x+1); i++)
   {
       s+=i;
   }
   return s;
}

int main (void) 
{
    int num;
    scanf("%d", &num);
    
    printf("%d", sum(num));
   
    return 0;
}
