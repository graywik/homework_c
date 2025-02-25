#include <stdio.h> 

int acounter(void)
{
    int cnt=0;
    char c=getchar(); 
    
    if ((c!='.')){
        int x=(c=='a')?1:0;
        cnt = x + acounter();
        return cnt;
    }
    else return 0;
}

int main (void) 
{
    printf("%d", acounter());
   
    return 0;
}
