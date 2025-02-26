#include <stdio.h> 


int main (void) 
{
    int x[11];
    int min,max,nmin,nmax;
    for (int i = 1; i < 11; i++)
    {
        scanf("%d", &x[i]);
        if (i==1) {min=x[i]; max=x[i]; nmin=i; nmax=i;}
        else {
            if (min > x[i]) {min=x[i]; nmin=i;}
            if (max < x[i]) {max=x[i]; nmax=i;}
        }
    }
    
    
    printf("%d %d %d %d", nmax, max, nmin, min);
   
    return 0;
}
