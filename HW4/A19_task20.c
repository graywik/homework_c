#include <stdio.h> 

int main (void) 
{
    int a,b,c; 
        
    scanf ("%d%d%d", &a, &b, &c);
    
    //условие существования теугольника: 
    //если сумма длин двух сторон > длины третьей 
    //проверить надо все возможные суммы -> TRUE
    
    if (((a+b)>c) && ((a+c)>b) && ((c+b)>a)) {printf("YES");}
    else {printf("NO");}
    
}
