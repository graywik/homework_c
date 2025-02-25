#include <stdio.h> 

int is_prime(int n, int delitel)
{
    int s=1;
    if (n<2) {return 0;} 
    
    if (delitel > 1) {
        s = n%delitel * is_prime(n,delitel-1);
        if (s) s=1;
        return s;
    }
    else return s;
}
    

int main (void) 
{
    int a;
    scanf ("%d", &a);
    
    if (is_prime(a, a/2)) {printf("YES");}
    else printf("NO");

    return 0;
}
