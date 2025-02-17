#include <stdio.h> 

int main (void) 
{
    int n, pre, pre_pre; 
        
    scanf ("%d", &n);
    
    for (int i = 0; i < n; i++)
    {   
        if (i<2) {printf("1 "); pre=1; pre_pre=1;}
        else {
            int current=pre+pre_pre;
            printf("%d ",current);
            pre_pre=pre;
            pre=current;
        }
    }
    
    
    return 0; 
} 
