#include <stdio.h> 

void rev(int x)
{
   if (x>0) 
   {
    printf("%d ", x%10);
    rev(x/10);
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
