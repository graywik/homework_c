#include <stdio.h> 
#define  LEN  1001


void dig_UP(char *data){            //на входе указатель на начало строки, которую ввели из цифр
    int num[10];
    char sym;

    for (int i = 0; i < 10; i++)    //инициализация массива кол-ва каждой цифры
    {
        num[i]=0;
    }

    while(*data){
        sym = *data++;
        switch (sym)
        {
            case '0':
                num[0]++;
                break;
                
            case '1':
                num[1]++;
                break;
                
            case '2':
                num[2]++;
                break;
                
            case '3':
                num[3]++;
                break;
                
            case '4':
                num[4]++;
                break;
                
            case '5':
                num[5]++;
                break;
                
            case '6':
                num[6]++;
                break;
                
            case '7':
                num[7]++;
                break;
                
            case '8':
                num[8]++;
                break;
                
            case '9':
                num[9]++;
                break;
                
            default:
                break;
        }
        
    }
    
    for (int i = 0; i < 10; i++)        //печать результата
    { 
        if (num[i]) {
            printf("%d %d \n", i, num[i]);
        }
    }
}


int main (void) 
{
    char dig[LEN];
    //int num[10];
    
    scanf("%s", &dig[0]);       //получили строку
    
    dig_UP(dig);                //отдаем в функцию
       
    return 0;
}
