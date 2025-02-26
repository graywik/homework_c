#include <stdio.h> 


int main (void) 
{
    int x[11];
    int max1,max2;
    int nmax1=0; int nmax2=0;
    for (int i = 1; i < 11; i++)
    {
        scanf("%d", &x[i]);
        if (i==1) {max1=x[i]; nmax1=i;}
        else if (max1 < x[i]) {max1=x[i]; nmax1=i;}
    }
    
    for (int i = 1; i < 11; i++)
    {
        if (i != nmax1) {
            if (nmax2==0) {max2=x[i]; nmax2=i;}
            else if (max2 < x[i]) {max2=x[i]; nmax2=i;}
        }
    } 
    
    
    printf("%d", (x[nmax1]+x[nmax2]));
   
    return 0;
}
