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


int is_palindrom(char *str){    
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
    int cnt0=0;
    //если в массиве не больше одного нуля, то можно составить палиндром
    for (int i = 0; i < size; i++)
        if (rep[i] == 0) {cnt0++;}
    
    return (cnt0>1)?0:1;

}

 
int main(void)
{  
FILE *f;
char str[SIZE]; 

char c; 
int count=0;
    f = fopen(InFile, "r");
    while ((c = getc(f)) != '\n') {
        if (c != ' ') 
            str[count++]=c;
    }
    str[count]='\0';
    fclose(f);

    is_palindrom(&str[0])?printf("YES"):printf("NO");
    
    return 0;
}
