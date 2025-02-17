#include <stdio.h> 

int is_prime(int n)
{
    if (n<2) {return 0;} 
    
    for (int i = 1; i < (n+1); i++)
    {
        if ((i != 1) && (i != n))
            {
                if (n%i == 0) {return 0;}
            }
    }
    return 1;

}

int main (void) 
{
    int a;

    scanf ("%d", &a);
    
    if (is_prime(a)) {printf("YES");}
    else printf("NO");

    return 0;
}
