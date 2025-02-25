#include <stdio.h> 

int is2pow(int n)
{
    int s=0;
    if (n>1){
        s = n%2 + is2pow(n/2);
        return s;
    }
    else {return 0;}
        
}

int main (void) 
{
    int x;
    scanf("%d", &x);
    
    if ((is2pow(x) == 0) && (x!=0))
        printf("YES");
    else printf("NO");
       
    return 0;
}
