#include <stdio.h> 
#include <inttypes.h>


uint64_t factorial(int x)
{
   uint64_t temp=1;
   for (int i = 1; i < (x+1); i++)
   {
       temp*=i;
   }
   return temp;
}

int main (void) 
{
    int num;
    scanf("%d", &num);

    printf("%lu", factorial(num));
   
    return 0;
}
