#include <stdio.h> 

signed long long power(signed int n, int p)
{
    signed long long temp=1;
    for (int i = 0; i < p; i++)
    {
        temp *= n;
    }
    return temp;
}

int main (void) 
{
    
    signed int a;
    int b;
    
    scanf("%d %d", &a, &b);
    
    printf("%Ld", power(a,b));
   
    return 0;
}
