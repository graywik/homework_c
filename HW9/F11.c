#include <stdio.h> 
#define  LEN  30


void find_min_sum(int size, int a[]){
    int min, imin1, imin2;
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++)
        {
            int num1=*(a+i); 
            int num2=*(a+j);
            if ((i==0) && (j==1)) {min=num1+num2; imin1=i; imin2=j;}
            else {
                if ((min>num1+num2) && (i!=j)) {min=num1+num2; imin1=i, imin2=j;}
            } 
        }
    }
    if (imin1<imin2){
        printf("\n%d %d", imin1, imin2);    
    }
    else {
        printf("\n%d %d", imin2, imin1);
    }
}




int main (void) 
{
    int dig[LEN];
    
    for (int i = 0; i < LEN; i++) {
        scanf("%d", &dig[i]);
    }
    
    find_min_sum(LEN, &dig[0]);
    
    
    return 0;
}
