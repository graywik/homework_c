#include <stdio.h> 

int recurs_power(int n, int p)
{
    int temp=1;
    
    if (p>0) {
        temp = n* recurs_power(n,p-1);   
    }
    return temp;
}

int main (void) 
{
    
    int a,b;
    scanf("%d %d", &a, &b);
    
    printf("%d\n", recurs_power(a,b));

    return 0;
}
