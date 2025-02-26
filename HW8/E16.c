#include <stdio.h> 

#define  LEN  10

int main (void) 
{
    int dig[LEN];
    int max;
    int bmax=0;

    
    for (int i = 0; i < LEN; i++)
    {
        scanf("%d", &dig[i]);
    }

    for (int i = 0; i < LEN; i++)
    {
        int b=0;
        for (int j = 0; j < LEN; j++)
        {
            if ((dig[i]==dig[j]) && (i!=j)) 
               { b++; }
        }
        if (bmax<b) {
            bmax=b; max=dig[i];
        }
    }
    
    printf("%d ", max);
    
    return 0;
}

