#include <stdio.h> 

#define  LEN  10

int dig[LEN];

void msort(int end){
    for (int i = 0; i < end; i++) {
        for (int j = 0; j < end-1; j++) {
            if (dig[j] < (dig[j+1])) {
                int b = dig[j];     
                dig[j] = dig[j+1]; 
                dig[j+1] = b; 
            }
        }
    }
}


int main (void) 
{
    int num;
    int cnt=0;
    
    scanf("%d", &num);

    while (num>9) 
        {
            dig[cnt++] = num%10;
            num = num/10;
        }
    dig[cnt++] = num%10;
        
    msort(cnt);
   
    for (int i = 0; i < cnt; i++)
    {
        printf("%d", dig[i]);
    }
    
    return 0;
}

