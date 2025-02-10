#include <stdio.h> 

int main (void) 
{
    int x1,y1,x2,y2; 
    float k,b;
    
    scanf ("%d%d%d%d", &x1,&y1,&x2,&y2);
    
    //y=k*x+b
    //решая систему уравнений получаем k=(y2-y1)/(x2-x1),  b=y1-(k*x)
    
    float temp=(x2-x1)/1.00;  //чтобы в итоге 'к' стал вещественным
    k=(y2-y1)/temp;
    b=y1-(k*x1);
    
    printf("%.2f %.2f\n", k,b);
}
