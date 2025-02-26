#include <stdio.h> 

#define  LEN  10

int dig[LEN];

void msort(int cnt){
    for (int i = 0; i < cnt; i++) {
        for (int j = 0; j < cnt-1; j++) {
            if (dig[j]%10 > (dig[j+1]%10)) {
                int b = dig[j];     
                dig[j] = dig[j+1]; 
                dig[j+1] = b; 
            }
        }
    }
  
}

int main (void) 
{
    for (int i = 0; i < LEN; i++)
    {
        scanf("%d", &dig[i]);
    }
    
    msort(LEN);
        
    for (int i = 0; i < LEN; i++)
    {
        printf("%d ", dig[i]);
    }
    
    return 0;
}

