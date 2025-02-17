#include <stdio.h> 
#include <inttypes.h>


uint64_t corn(int x)
{
   uint64_t temp=1;
   for (int i = 1; i < x; i++)
   {
       temp*=2;
   }
   return temp;
}

int main (void) 
{
    int num;
    scanf("%d", &num);

    printf("%lu", corn(num));
   
    return 0;
}
