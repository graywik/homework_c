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
    }

    for (int i = 0; i < LEN; i++)
    {
        for (int j = i+1; j < LEN; j++)
        {
            if (dig[i]==dig[j]) 
            {
                int b=0;
                for (int k = 0; k < cnt; k++)
                {
                   if (dig[i]==ndig[k]) {b=1;}
                }
                if (b==0) 
                    { ndig[cnt++]=dig[i]; }
            }
        }
    }
        
    
    for (int i = 0; i < cnt; i++)
    {
        printf("%d ", ndig[i]);
    }
    
    return 0;
}

