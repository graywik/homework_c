#include <stdio.h> 

int main (void) 
{
    const int LEN = 15000;  //максимальное кол-во букоф для массива
    int k=0;
    char str[LEN];

    scanf("%[^\n]", str);
    
    for (int i = 0; i < LEN; i++)
    {
        if (str[i] == ' ') 
        {
            k++;
            if (str[i+1] == '0') {break;}
        }
        
    }
    //printf("\n%s", str);
    if (str[0]=='0') {k=0;}
    printf("%d", k);
    return 0;
}
