#include <stdio.h> 

void print_num(int a, int b)
{
    printf("%d ", a);
    if (a<b){
        print_num(a+1,b);
    }
    else if (a>b) {
        print_num(a-1,b);
    }
    else {
        return;
    }
        
}

int main (void) 
{
    int a1, a2;
    scanf("%d%d", &a1, &a2);
    
    print_num(a1,a2); 
   
    return 0;
}
