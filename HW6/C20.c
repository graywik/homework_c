#include <stdio.h> 

int check_bkt(char x)
{
    
    if (x =='(') {return 1;}
    if (x ==')') {return -1;}
    else {return 0;}
}

int main (void) 
{
    char c;
    int sum=0;

    while( (c=getchar())!='.')
    {
       sum += check_bkt(c);
       if (sum<0) {break;}
    }
    if (sum) printf("NO");
    else printf("YES");
       
    return 0;
}
