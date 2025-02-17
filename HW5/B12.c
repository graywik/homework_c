#include <stdio.h> 

int main (void) 
{
    const int LEN = 16;  //максимальное кол-во цифр для массива
    int a, k, min, max;
    unsigned char ar_dig[LEN];
        
    k=0; 
    scanf ("%d", &a);
    
    while (a>9) 
        {
            ar_dig[k++] = a%10;
            a = a/10;
        }
    ar_dig[k++] = a%10;  //не забываем последнюю цифру, когда осталось <9

    min=ar_dig[0]; max=ar_dig[0];
    for (int i = 1; i < k; i++)
    {
       max = (max>ar_dig[i])?max:ar_dig[i];
       min = (min<ar_dig[i])?min:ar_dig[i];
    }
    printf("%d %d", min, max);
    return 0;
}
