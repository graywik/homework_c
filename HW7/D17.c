#include <stdio.h> 


int akkerman(int n, int m)
{
    if (n == 0) return (m + 1);
    
    else if ((n != 0) && (m == 0)) return akkerman(n-1, 1);
        
         else return akkerman(n-1, akkerman(n, m-1));
}

int main (void) 
{
    int a,b;
    scanf("%d %d", &a, &b);
    
    printf("%d", akkerman(a,b));
   
    return 0;
}
