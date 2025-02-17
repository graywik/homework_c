#include <stdio.h> 

int is_happy_number(int n)
{
    int sum=0;
    int mult=1;
    
    while (n>9)
    {
        sum += n%10;
        mult *= n%10;
        n = n/10;
    }
        sum += n%10;
        mult *= n%10;
        return (mult==sum)?1:0;
}


int main (void) 
{
    int a; 
        
    scanf ("%d", &a);
    
    
    if (is_happy_number(a)) {printf("YES");}
    else printf("NO");
    
    return 0; 
} 
