#include <stdio.h> 

#define  LEN  10

int main (void) 
{
    int dig[LEN];

    
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
               { b=1; }
        }
        if (b==0) {printf("%d ", dig[i]);}
    }
    
    
    return 0;
}

