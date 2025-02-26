#include <stdio.h> 

#define  LEN  10

int main (void) 
{
    int dig[LEN];
    int num;
    int cnt=0;


    scanf("%d", &num);

    while (num>9) 
        {
            dig[cnt++] = num%10;
            num = num/10;
        }
    dig[cnt] = num%10;
    

    for (int i = cnt; i >= 0; i--)
    {
        printf("%d ", dig[i]);
    }
    
    
    
    return 0;
}

