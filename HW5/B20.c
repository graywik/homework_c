#include <stdio.h> 

int main (void) 
{
    int a, b;

    scanf ("%d", &a);

    if (a<2) {b=0;} else {b=1;}
    
    for (int i = 1; i < (a+1); i++)
    {
        if ((i != 1) && (i != a))
            {
                if (a%i == 0) {b=0; break;}
            }
    }

    if (b == 0) {printf("NO");}
    else printf("YES");
    
    return 0;
}
