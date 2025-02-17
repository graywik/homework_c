#include <stdio.h> 
#include <inttypes.h>


void conv(uint32_t n, uint32_t p)
{
   uint8_t c[32];
   uint8_t i=0;
   
   while (n>=p)    
   {
     c[i++] = n%p; n=n/p;   
   }
   c[i]=n;
   
   
   for (int j = i; j >= 0; j--)
   {
       printf("%u",c[j]);
   }
}

int main (void) 
{
    uint32_t num, sys;
    scanf("%d %d", &num, &sys);

    conv(num, sys);
   
    return 0;
}
