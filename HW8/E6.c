#include <stdio.h> 


int main (void) 
{
    int x[12];
    int sum=0;
    for (int i = 0; i < 12; i++)
    {
        scanf("%d", &x[i]);
        sum+=x[i];
    }
    
    
    printf("%.2f", sum/12.00);
   
    return 0;
}
