#include <stdio.h> 

int count=0;

void row(int n, int m)
{
   if ((n>0) && (count-->0)) {
        printf("%d ", m);
        row(n-1, m);
   } 
}

int main (void) 
{
    int x; int j=0;
    
    scanf("%d", &x);
    
    count=x;
    while (count>0){
        j++;
        row(j, j); 
    }
    
   
    return 0;
}
