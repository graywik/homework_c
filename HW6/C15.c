#include <stdio.h> 

int grow_up(int n)
{
    const int LEN = 12;  //максимальное кол-во цифр для массива
    int k;
    unsigned char ar_dig[LEN];
        
    k=0; 
    while (n>9) 
        {
            ar_dig[k++] = n%10;
            n = n/10;
        }
    ar_dig[k] = n%10;  //не забываем последнюю цифру, когда осталось <9

    for (int i = 0; i < k; i++)
    {
       if (ar_dig[i] <= ar_dig[i+1]  ) {return 0;}
       
    }
    
    return 1;

}

int main (void) 
{
    int a;
    
    scanf ("%d", &a);
    
    
    if (grow_up(a)) {printf("YES");}
    else {printf("NO");}

    return 0;
}
