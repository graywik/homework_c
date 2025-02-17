#include <stdio.h> 

int main (void) 
{
    const int LEN = 16;  //максимальное кол-во цифр для массива
    int a, k;
    unsigned char b=0;
    unsigned char ar_dig[LEN];
        
    k=0; 
    scanf ("%d", &a);
    
    while (a>9) 
        {
            ar_dig[k++] = a%10;
            a = a/10;
        }
    ar_dig[k++] = a%10;  //не забываем последнюю цифру, когда осталось <9

    for (int i = 0; i < k; i++)
    {
       if (ar_dig[i] == 9) {b++;}
       
    }
    if (b==1) {printf("YES");}
    else {printf("NO");}

    return 0;
}
