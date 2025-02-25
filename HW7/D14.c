#include <stdio.h> 

void m_func(int x)
{
    if (x%2!=0) {printf("%d ", x);}
}

int main (void) 
{
    
    char c;
    int num=0;
    int minus=0;
    while( (c=getchar())!='\n') //спец символ новой строки
    {
        if (c=='-') { minus = 1;}
        if(c>='0' && c<='9') num = (num*10)+(c-'0');
           
        if (c==' ') {
            if (minus==1) {num=-num;}
            m_func(num);
            num=0; minus=0;
            } 
    }
    
   
    return 0;
}
