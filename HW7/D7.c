#include <stdio.h> 

void print_num(int x)
{
    
    if (x>0) {
        printf("%d ", x);
        print_num(x-1);
    }
        
}

int main (void) 
{
    int n;
    scanf("%d", &n);
    
    if (n!=0) print_num(n);
    else  printf("0");
    
    return 0;
}
