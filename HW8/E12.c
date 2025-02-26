#include <stdio.h> 

#define  LEN  10

int dig[LEN];

void msort(int first, int end, int dir){
    for (int i = first; i < end; i++) {
        for (int j = first; j < end-1; j++) {
            if (dir) {
                if (dig[j] > (dig[j+1])) {
                    int b = dig[j];     
                    dig[j] = dig[j+1]; 
                    dig[j+1] = b; 
                }
            }
            else {
                if (dig[j] < (dig[j+1])) {
                    int b = dig[j];     
                    dig[j] = dig[j+1]; 
                    dig[j+1] = b; 
                }
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
    
    msort(0, 5, 1);
    msort(5, 10, 0);
        
    for (int i = 0; i < LEN; i++)
    {
        printf("%d ", dig[i]);
    }
    
    return 0;
}

