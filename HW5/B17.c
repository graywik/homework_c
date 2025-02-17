#include <stdio.h> 

int main (void) 
{
    int a, sum, mult; 
        
    scanf ("%d", &a);
    
    for (int j = 10; j < (a+1); j++)
    {
        int i=j;
        sum=0; mult=1;
        while (i>9)
        {
            sum += i%10;
            mult *= i%10;
            i = i/10;
        }
        sum += i%10;
        mult *= i%10;
        if (mult==sum) {printf("%d ", j);}
    }
    
    return 0; 
} 
