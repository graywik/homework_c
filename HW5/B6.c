#include <stdio.h> 

int main (void) 
{
    int a, pre_dig, dig;
    unsigned char b=0;
        
    scanf ("%d", &a);
    
    pre_dig = a%10;
    while (a>9) 
        {
            a = a/10;
            dig =a%10;
            if (pre_dig==dig) { b=1;}
            pre_dig=dig;
        }
    
    if (b==1) {printf("YES");}
    else {printf("NO");}
    
    return 0;
}
