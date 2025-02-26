#include <stdio.h> 

#define  LEN  10

int main (void) 
{
    int dig[LEN];
    int ndig[LEN];
    int cnt=0;
    
    for (int i = 0; i < LEN; i++)
    {
        scanf("%d", &dig[i]);
        int temp = (dig[i]/10)%10;
        if (temp == 0){
            ndig[cnt++]=dig[i];
        }
    }
        
        
    for (int i = 0; i < cnt; i++)
    {
        printf("%d ", ndig[i]);
    }
    
    return 0;
}

