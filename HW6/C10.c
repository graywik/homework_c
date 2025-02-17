#include <stdio.h> 

void print_simple(int x)
{
    for (int i = 2; i < (x+1); i++)
    {
        if (x%i==0) 
        {
            printf("%d ", i); x=x/i; i=1; 
        }
    }
 
}
int main (void) 
{
    int num;
    scanf("%d", &num);

    print_simple(num);
    return 0;
}
