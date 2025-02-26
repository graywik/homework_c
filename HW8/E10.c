#include <stdio.h> 

#define  LEN  12

int dig[LEN];

void shift(int cnt){
    int temp=dig[cnt-1];
    
    for (int i = (cnt-1); i > 0; i--)
    {
        dig[i]=dig[i-1];
    }
    dig[0]=temp;
}

int main (void) 
{
    for (int i = 0; i < LEN; i++)
    {
        scanf("%d", &dig[i]);
    }
    for (int i = 0; i < 4; i++)
    {
        shift(LEN);
    }
        
    for (int i = 0; i < LEN; i++)
    {
        printf("%d ", dig[i]);
    }
    
    return 0;
}
