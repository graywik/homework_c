#include <stdio.h> 
#define  LEN  1001


void sort_array(int size, int a[]){
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size-1; j++) {
            if (*(a+j) > *(a+j+1)) {   
                int b = *(a+j);     
                *(a+j) = *(a+j+1); 
                *(a+j+1) = b; 
            }
            
        }
    }
}


int main (void) 
{
    int dig[LEN]; int cnt=0;
    
    while (1) 
    {
        scanf("%d", &dig[cnt]);
        if (dig[cnt] == 0) {break;}
        cnt++;
    }
  
    sort_array(cnt, &dig[0]);
                
    int j=0; int i;
    for (i = dig[0]; i < (dig[0]+cnt); i++)
    {
        if (i != dig[j++]) {break;}
    }

    printf("%d", i);
    
    
    return 0;
}
