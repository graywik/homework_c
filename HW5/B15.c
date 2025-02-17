#include <stdio.h> 

int main (void) 
{
    const int LEN  = 15000;  //максимальное кол-во букоф для массива
    const int LEN2 = 1000;   //максимальное кол-во цифр
    int k=0; int kk=0;
    char str[LEN]; char str_dig[10];
    int num[LEN2]; int inum=0;

    scanf("%[^\n]", str);
    
    if (str[0]!='0') 
    {
        for (int i = 0; i < LEN; i++)
        {
            if (str[i] != ' ') {str_dig[kk++] = str[i];}
            else {
                num[inum]=0;
                for (int j = 0; j < kk; j++)  //переводим строку числа в число
                {
                    num[inum]=(num[inum]*10) + (str_dig[j]-0x30);  
                }
                kk=0; inum++;
                if (str[i+1] == '0') {break;}
            }
        }
    }// if !=0

    for (int i = 0; i < inum; i++)  //перебираем массив с числами и находим четные
    {
        if (num[i]%2 == 0) {k++;}
    }
    printf("%d", k);
    return 0;
}
