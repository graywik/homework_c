#include <stdio.h> 

int main (void) 
{
    const int LEN = 15000;  //максимальное кол-во букоф для массива
    char str[LEN];

    scanf("%[^\n]", str);
    
    for (int i = 0; i < LEN; i++)
    {
        if (str[i] == '.') {str[i]=0; break;}
        if ((str[i] > 0x40) && ((str[i] < 0x5B))) {str[i] += 0x20;} 
        
    }
    printf("%s", str);
   
    return 0;
}
