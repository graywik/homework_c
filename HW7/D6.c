#include <stdio.h> 

void reverse_string(void)
{
    char c=getchar();
    if (c !='.') {
        reverse_string();
        printf("%c", c);
    }
        
}

int main (void) 
{
    reverse_string(); 
   
    return 0;
}
