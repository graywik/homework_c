#include <stdio.h> 

int main (void) 
{
    int a, sum_dig;
    sum_dig=0; 
        
    scanf ("%d", &a);
    
    while (a>9) 
        {
            sum_dig += a%10;
            a = a/10;
        }
    
    sum_dig += a%10;  //прибавляем последнюю цифру
    printf("%d\n", sum_dig);
    return 0;
}
