#include <stdio.h> 

void rev(int x)
{
   if (x>0) 
    {
    rev(x/2);
    printf("%d", x%2);
    }
        
}

int main (void) 
{
    int n;
    scanf("%d", &n);
    
    if (n!=0) rev(n);
    else  printf("0");
   
    return 0;
}
