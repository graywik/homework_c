#include <stdio.h> 


int main (void) 
{
    int x[5];
    int min;
    for (int i = 0; i < 5; i++)
    {
        scanf("%d", &x[i]);
        if (i==0) {min=x[i];}
        else {min = (min<x[i])?min:x[i];}
    }
    
    
    printf("%d", min);
   
    return 0;
}
