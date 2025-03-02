#include <stdio.h>
#include <string.h>

#define InFile  "input.txt"
#define OutFile "output.txt"

//длина нового массива, при худшем стечении не будет более 1334
#define SIZE    1350

//функция сравнивает строки на переданное кол-во байт
//возвращает 1, если совпадают
int EqualStr(char *s1, const char *s2, int cnt_byte){
int b=1;
    for (int i = 0; i < cnt_byte; i++)
    {
         b *= (s1[i] == s2[i])?1:0;
         if (!b) {break;}
    }
    
    return b;
}

 
int main(void)
{  
FILE *f;
char str[SIZE]; 
char new_str[SIZE];
const char str1[] = "Ling"; 
const char str2[] = "Cao";

char c; 
int count=0;
    f = fopen(InFile, "r");
    while ((c = getc(f)) != EOF) {
        str[count++]=c;
    }
    fclose(f);

    
    int cnt_index=0;
    //проходим по всему исходному массиву, ищем совпадение. И создаем новый подмененный массив.
    for (int i = 0; i < count; i++)
    {
        if (EqualStr(&str[i], &str1[0], strlen(str1))) {
            //подменяем имена
            for (int j = 0; j < strlen(str2); j++)
            {
                new_str[cnt_index+j]=str2[j];
            }
            //увеличиваем указатели соответсвующих массивов на длину слов замены
            i+=strlen(str1)-1; //-1 поскольку затем for сам добавит единичку
            cnt_index += strlen(str2);
        }
        else {new_str[cnt_index++]=str[i];}
    }


    f = fopen(OutFile, "w");
    for (int i = 0; i < cnt_index; i++)
    {
      fprintf(f, "%c", new_str[i]); 
    }
    fclose(f);
    
    return 0;
}
