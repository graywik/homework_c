#include <stdio.h> 

int x[10];

void change(int first, int end){
    int j=end;
    int i=first;
    while (i<j) {
        j--;
        int temp=x[j]; 
        x[j]=x[i]; x[i]=temp;
        i++;
    }
}

int main (void) 
{
    for (int i = 0; i < 10; i++)
    {
        scanf("%d", &x[i]);
    }
    change(0,5);
    change(5,10);
    
    for (int i = 0; i < 10; i++)
    {
        printf("%d ", x[i]);
    }
    
    return 0;
}
