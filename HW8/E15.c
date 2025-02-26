#include <stdio.h> 

#define  LEN  10

int main (void) 
{
    int pdig[LEN];
    int ndig[LEN];
    int pcnt=0;
    int ncnt=0;
    int x;
    
    for (int i = 0; i < LEN; i++)
    {
        scanf("%d", &x);
        if (x<0) {ndig[ncnt++]=x;}
        if (x>0) {pdig[pcnt++]=x;}
    }

    
    for (int i = 0; i < pcnt; i++)
    {
        printf("%d ", pdig[i]);
    }
    
    for (int i = 0; i < ncnt; i++)
    {
        printf("%d ", ndig[i]);
    }
    
    return 0;
}

