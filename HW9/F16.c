#include <stdio.h> 
#define  LEN  2

int main (void) 
{
    char dig[LEN];

    scanf("%s", &dig[0]);       //получили строку
    
    //если индексы (буква и цифра) оба четные или оба нечетные, то это черная клетка
    //сравнение делаю прямо по ascii коду поскольку они соответствуют четности 
    //'А'=65, '1'=49, 'B'=66, '2'=50
    
    if ((dig[0]%2!=0) && (dig[1]%2!=0)) {printf("BLACK");}
    else if ((dig[0]%2==0) && (dig[1]%2==0)) {printf("BLACK");} 
        else printf("WHITE");
    printf("\n");    

    return 0;
}
