#include <stdio.h> 
#define  LEN  1002

int main (void) 
{
    char cc[LEN]; int cnt=0;
    char pre_char; int rep=0;
    
    while (1) 
    {
        scanf("%c", &cc[cnt]);
        if (cc[cnt] == '.') {break;}
        cnt++;
    }
  
    //запоминаем первую букву
    pre_char=cc[0]; rep++; printf("%c",cc[0]);
    
    for (int i = 1; i < cnt; i++)
    {
        if (pre_char == cc[i]) {
            rep++;
        }
        else {
            printf("%d", rep); rep=1;
            printf("%c", cc[i]);
        }
        
        pre_char=cc[i];
        
    }
    printf("%d",rep); //добавляем кол-во повторений последней буквы
    
    return 0;
}
