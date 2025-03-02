#include <stdio.h>

#define InFile  "input.txt"
#define OutFile "output.txt"

#define SIZE    1001

void sort_array(int size, char a[]){
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size-1; j++) {
            if (*(a+j) > *(a+j+1)) {   
                char b = *(a+j);     
                *(a+j) = *(a+j+1); 
                *(a+j+1) = b; 
            }
            
        }
    }
}

void make_palindrom(char *str, char *out){    
    //определяем длину массива, не хочу использовать strlen 
    int size=0; 
    char *sz; sz=str; while(*sz++) {size++;}               
     
    /* ----------------------------------------------------
    xkakznakknymkz    <-входная строка
    ---------------------------------------------------- */

    //сортирую массив по алфавиту, повторки встанут рядом
    sort_array(size, str);                             
         
    /* ----------------------------------------------------
    aakkkkkmnnxyzz    <-после сортировки
    ---------------------------------------------------- */
    
    //создаю числовой массив для хранения кол-ва повторов каждого символа
    int rep[size];
    //и обнуляю весь массив
    for (int i = 0; i < size; i++) rep[i]=0;
    
    //если след. символ такой же в эту ячейку кладу 2, а в след. 1 и перепрыгиваю. остальные 0.
    for (int i = 0; i < size-1; i++)
       if (str[i] == str[i+1]) {rep[i]=2; rep[i+1]=1; i++;}
       
    /* ----------------------------------------------------
    21212100210021    <-числовой массив повторов
    ---------------------------------------------------- */

    //начинаю собирать палиндром в массив out
    int i_out=0;
    //сначала кладу символы которые = 2.
    for (int i = 0; i < size; i++)
        if (rep[i] == 2) {out[i_out++]=str[i];}
    
    //затем кладу первый символ = 0 и выхожу
    for (int i = 0; i < size; i++)
        if (rep[i] == 0) {out[i_out++]=str[i]; break;}
    
    //затем иду в обратную сторону и кладу символы = 1.
    for (int i = (size-1); i >=0; i--)
        if (rep[i] == 1) {out[i_out++]=str[i];}
      
    out[i_out]='\0';
    
    /* ----------------------------------------------------
    akknzkznkka   <-результат  
    ---------------------------------------------------- */
}

 
int main(void)
{  
FILE *f;
char str[SIZE]; 

char c; 
int count=0;
    f = fopen(InFile, "r");
    while ((c = getc(f)) != '\n') {
        str[count++]=c;
    }
    str[count]='\0';
    fclose(f);

char str_out[count];  //создаю выходной массив длиной = тому что получили на входе
  
    make_palindrom(&str[0], &str_out[0]);
         
    f = fopen(OutFile, "w");
    fprintf(f, "%s", str_out);
    fclose(f);
    
    return 0;
}
