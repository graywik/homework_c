#include <stdio.h>

#define InFile  "input.txt"
#define OutFile "output.txt"

#define size_W    101

void sort_array(int size, char a[]){
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size-1; j++) {
            if (*(a+j) > *(a+j+1)) {   
                int b = *(a+j);     
                *(a+j) = *(a+j+1); 
                *(a+j+1) = b; 
            }
            
        }
    }
}

//функция меняет повторяющиеся символы на заглавные
void change_rep(int size, char a[]){   
    for (int i = 0; i < size; i++)
    {
        char c1=*(a+i);
        for (int j = i+1; j < size; j++)
        {
            char c2=*(a+j);
            if ((c1 == c2) && (c1>0x60) && (c1<0x7B)) {
                *(a+j)=c2-0x20;
                *(a+i)=c1-0x20;
            }
        }
    }
}

 
int main(void)
{  
FILE *f; 
char word1[size_W]; 
char word2[size_W]; 
char rep[size_W]; 

    f = fopen(InFile, "r"); 
char c; 
int cntW1=0; int cntW2=0; int b=0; int cntREP=0;
    
    while ((c = getc(f)) != EOF) {
        if (c == ' ') {b=1;}
        if ((c > 32) && (c < 127)) 
        {
            if (!b) {word1[cntW1++]=c;} 
            else {word2[cntW2++]=c;}
        }
    }
    fclose(f);
    
    //повторные буквы в словах меняем на заглавные, чтобы их не сравнивать
    change_rep(cntW1, &word1[0]);
    change_rep(cntW2, &word2[0]);
    
    for (int i = 0; i < cntW1; i++)
    {
        for (int j = 0; j < cntW2; j++)
        {
            if ((word1[i]>0x60) && (word1[i]<0x7B)) {
                if (word1[i]==word2[j]) {rep[cntREP++]=word1[i];} //создаем массив из повторок
            }
        }
    }
 
    //сортируем массив повторов, чтобы записывать его в лексикографическом порядке
    sort_array(cntREP, &rep[0]);
    
    f = fopen(OutFile, "w");
    for (int i = 0; i < cntREP; i++)
    {
        fprintf(f, "%c ", rep[i]);
    }
    fclose(f);
    

return 0;
}
