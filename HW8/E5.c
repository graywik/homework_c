#include <stdio.h> 


int main (void) 
{
    int x[11];
    int sum=0;
    for (int i = 1; i < 11; i++)
    {
        scanf("%d", &x[i]);
        if (x[i]>0) {sum+=x[i];}
    }
    
    
    
    printf("%d", sum);
   
    return 0;
}
