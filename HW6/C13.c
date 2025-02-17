#include <stdio.h> 

const float PI=3.1415926;

float power(float n, int p)
{
    float temp=1;
    for (int i = 0; i < p; i++)
    {
        temp *= n;
    }
    return temp;
}

int factorial(int x)
{
   int temp=1;
   for (int i = 1; i < (x+1); i++)
   {
       temp*=i;
   }
   return temp;
}


float cosinus(float x)
{
    float result=1.00;
    float sub=1;
    int znak=1;
    int i=2;

    while (sub>0.001)
    {
        sub=(power(x,i)/factorial(i));
        znak=-znak;
        result += znak*sub;
        i+=2;    
    }
    return result;
}

int main (void) 
{
    int a; 
        
    scanf ("%d", &a);

    printf("%.3f", cosinus(PI*a/180)); 
        
    return 0; 
} 
