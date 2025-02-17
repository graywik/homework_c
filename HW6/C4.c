#include <stdio.h> 

int m_func(int x)
{
   if ((x>=-2)&&(x<2)) {return x*x;}
   else if (x>=2) {return (x*x)+(4*x)+5;}
   else return 4;
}

int main (void) 
{
    
    char c;
    int num=0;
    int max=0;
    int minus=0;
    while( (c=getchar())!='\n') //спец символ новой строки
    {
        if (c=='-') { minus = 1;}
        if(c>='0' && c<='9') num = (num*10)+(c-'0');
           
        if (c==' ') {
            if (minus==1) {num=-num;}
            num=m_func(num);
            max=(max>num)?max:num;
            num=0; minus=0;
            } 
    }
    
    printf("%d", max);
   
    return 0;
}
