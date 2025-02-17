#include <stdio.h> 


int check_EVEN(int a)
{
    int sum_dig=0;
    while (a>9) 
        {
            sum_dig += a%10;
            a = a/10;
        }
    sum_dig += a%10;  //прибавляем последнюю цифру
    return (sum_dig%2)?0:1;
}

int main (void) 
{
    int x;
        
    scanf ("%d", &x);
    
    if (check_EVEN(x)) printf("YES");
    else printf("NO");
    
    return 0;
}
