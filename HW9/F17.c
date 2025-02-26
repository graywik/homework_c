#include <stdio.h> 
#define  LEN  5


int matrix(int size, void *array){
    int sum=0;
    int (*a)[size] = array;
    
    for (int i = 0; i < LEN; i++) {
        sum+=a[i][i];
    }
    return sum;
}


int main (void) 
{
    int dig[LEN][LEN];

    for (int i = 0; i < LEN; i++) {
        for (int j = 0; j < LEN; j++) {
            scanf("%d", &dig[j][i]);
        }
    }
    
    printf("%d",  matrix(LEN, dig));
        
    
    return 0;
}
