#include <stdio.h> 
#define  LEN  10


int mult_dig(int num, int od_ev){  //od_ev =0 четные, =1 нечетный
    int mult=1;
    
    do {
        int dig = num%10; 
        if (dig%2 == od_ev) {mult*=dig;}
        num=num/10;
    }
    while (num>0);

    return mult;
}


int main (void) 
{
    int dig[LEN]; 
    int _odd=0; int _even=0; 
    
    for (int i = 0; i < LEN; i++) {
        scanf("%d", &dig[i]);
        if (dig[i]%2 == 0) {_even++;}
        else {_odd++;}
    }
    
    int wh = (_even>_odd)?1:0;
    
    for (int i = 0; i < LEN; i++)
    {
        if ((dig[i]%2 == 0) && (wh==0)) {dig[i] = mult_dig(dig[i], 0);}
        if ((dig[i]%2) && (wh)) {dig[i] = mult_dig(dig[i], 1);}
    
        printf("%d ", dig[i]);  
    }
    
    return 0;
}
