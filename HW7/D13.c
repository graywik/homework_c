#include <stdio.h> 

void print_simple(int x, int delitel)
{
    if (delitel <= x){
        if (x%delitel == 0){
            printf("%d ", delitel); x=x/delitel; delitel=1;
        }
        print_simple(x, delitel+1);
    }
}


int main (void) 
{
    int num;
    scanf("%d", &num);

    print_simple(num, 2);
    return 0;
}
