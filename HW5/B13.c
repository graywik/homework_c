#include <stdio.h> 

int main (void) 
{
    const int LEN = 16;  //максимальное кол-во цифр для массива
    int a, k, odd, even;
    unsigned char ar_dig[LEN];
        
    k=0; 
    scanf ("%d", &a);
    
    while (a>9) 
        {
            ar_dig[k++] = a%10;
            a = a/10;
        }
    ar_dig[k++] = a%10;  //не забываем последнюю цифру, когда осталось <9

    odd=0; even=0;
    for (int i = 0; i < k; i++)
    {
        if (ar_dig[i]%2==0) {even++;} 
        else {odd++;}
    }
    printf("%d %d", even, odd);
    return 0;
}
