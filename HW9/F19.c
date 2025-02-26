#include <stdio.h> 
#define  LEN  5


int aver_matrix(int size, void *array){
    int sum=0;
    int (*a)[size] = array;
    
    for (int i = 0; i < LEN; i++) {
        sum+=a[i][i];
    }
    return sum/LEN;
}


int main (void) 
{
    int dig[LEN][LEN];

    for (int i = 0; i < LEN; i++) {
        for (int j = 0; j < LEN; j++) {
            scanf("%d", &dig[j][i]);
        }
    }
    
    int av = aver_matrix(LEN, dig);
    int cnt=0;
    
    for (int i = 0; i < LEN; i++) {
        for (int j = 0; j < LEN; j++) {
            if ((dig[j][i]>0) && ((dig[j][i]>av))) 
                {cnt++;}
        }
    }
    
    printf("%d", cnt);
        
    
    return 0;
}
