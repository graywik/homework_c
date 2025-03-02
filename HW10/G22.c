#include <stdio.h>
#include <string.h>

#define InFile  "input.txt"
#define OutFile "output.txt"

#define SIZE    21 

void del_zero(char *s){
    int size = strlen(s);
    for (int j = 1; j < size; j++)  //сортирую '0' в конец строки
    {
        for (int i = 1; i < size-1; i++)
        {
            if (s[i] == '0') {
                char sym = s[i+1];
                s[i+1]=s[i];
                s[i]=sym;
                }
        }
    }
    for (int i = 1; i < size; i++)
       if (s[i] == '0') s[i]='\0'; //обрезаю строку по первому '0'
}

void del_repeat(char *s){
int size = strlen(s);
char pre_char=s[1]; int i_pre=1;

    for (int i = 2; i < size; i++)
        if (pre_char != s[i]) {pre_char=s[i]; s[++i_pre]=pre_char;}
        
    s[++i_pre]='\0';
}

void cut_four(char *s){
    int i; int b=0;
    for (i = 1; i < 4; i++)
    {
        if (s[i]=='\0') {b=1;} //если найден конец строки, то остальное добиваем '0'
        if (b) {s[i]='0';}
    }
    s[i]='\0';
}
 
int main(void)
{
const int letter[7][8] =  { {'a','e','h','i','o','u','w','y'},      //0
                            {'b','f','p','v',  0,  0, 0 ,  0},      //1
                            {'c','g','j','k','q','s','x','z'},      //2
                            {'d','t',  0,  0,  0,  0,  0,  0},      //3
                            {'l',  0,  0,  0,  0,  0,  0,  0},      //4
                            {'m','n',  0,  0,  0,  0,  0,  0},      //5
                            {'r',  0,  0,  0,  0,  0,  0,  0} };    //6
                            
                            
FILE *f;
char word[SIZE];
    f = fopen(InFile, "r"); 
    fscanf(f, "%[^\n]", word);
    fclose(f);
int cnt = strlen(word); 

//ammonium
    for (int k = 1; k < cnt; k++)
    {
        for (int i = 0; i < 8; i++)
        {
            for (int j = 0; j < 7; j++)
            {
                if (word[k] == letter[j][i]) {word[k]=j+0x30;}      //заменяем букву на символ числа
            }
        }
        
    }
    word[cnt]='\0';

//a5505005
    del_zero(word);
//a5555
    del_repeat(word);
//a5
    cut_four(word);
//a500

    f = fopen(OutFile, "w");
    fprintf(f, "%s", word);
    fclose(f);
return 0;
}
