#include <stdio.h> 

int x[12];

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
    for (int i = 0; i < 12; i++)
    {
        scanf("%d", &x[i]);
    }
    change(0,4);
    change(4,8);
    change(8,12);
    
    for (int i = 0; i < 12; i++)
    {
        printf("%d ", x[i]);
    }
    
    return 0;
}
