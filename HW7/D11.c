#include <stdio.h> 

int rev(int x)
{
    int s=0;
    if (x>0){
        s = x%2 + rev(x/2);
        return s;
    }
    else {return 0;}
        
}

int main (void) 
{
    int n;
    scanf("%d", &n);
    
    printf("%d", rev(n));
       
    return 0;
}
