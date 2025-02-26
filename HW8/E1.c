#include <stdio.h> 


int main (void) 
{
    int x[5];
    int sum=0;
    for (int i = 0; i < 5; i++)
    {
        scanf("%d", &x[i]);
        sum+=x[i];
    }
    
    
    printf("%.3f", sum/5.00);
   
    return 0;
}
