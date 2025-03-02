#include <stdio.h>

#define InFile  "input.txt"
#define OutFile "output.txt"


//формируем числовой ряд и определяем возможно ли построить треугольник
//возвращает кол-во рядов или 0 
int is_possible(int count){
int i=1; int j=0;
    if (!count) return 0;
    while (j<count) {j=j+i++;}
    return (j==count)?i:0;
} 

//печать ряда в файл. (символ, кол-во пробелов, кол-во символов, файл)
void print_sym(char s, int cnt_space, int cnt, FILE *fp){
    while (cnt_space--) fprintf(fp, " ");
    while (cnt--) fprintf(fp, "%c ", s);
    fprintf(fp, "\n");
}
 
int main(void)
{
    FILE *f;
    int count=0; char c;
    f = fopen(InFile, "r"); 
     while ((c = getc(f)) != EOF) {  //просто считаем камни, без сохранения.
        if (c == '*') count++;
    }
    fclose(f);
        
    f = fopen(OutFile, "w");
    
    int row=is_possible(count);
    if (row==0) {fprintf(f, "NO"); return 0;}
    
    int space=(row-2); 
    for (int i = 1; i < row; i++)    //печатаем каждый ряд
        print_sym('*', space--, i, f);
       
    fclose(f);
 
return 0;
}
