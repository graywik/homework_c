#include <stdio.h> 

#define  LEN  10

int main (void) 
{
    int dig[LEN];
    int num;

    scanf("%d", &num);
    
    for (int i = 0; i < LEN; i++) //на всякий случай обнуляем массив.
    {
        dig[i]=0;
    }

    
    for (int i = 2; i <= num; i++)
    {
        if ((i%2)==0) {dig[2]++;}
        if ((i%3)==0) {dig[3]++;}
        if ((i%4)==0) {dig[4]++;}
        if ((i%5)==0) {dig[5]++;}
        if ((i%6)==0) {dig[6]++;}
        if ((i%7)==0) {dig[7]++;}
        if ((i%8)==0) {dig[8]++;}
        if ((i%9)==0) {dig[9]++;}
    }
    
    for (int i = 2; i < LEN; i++)
    { 
        printf("%d %d \n", i, dig[i]);
    }
    return 0;
}

