#include <stdio.h>

#define InFile  "input.txt"
#define OutFile "output.txt"

#define SIZE    1001

void sort_array(int size, int a[]){
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size-1; j++) {
            if (*(a+j) > *(a+j+1)) {   
                int b = *(a+j);     
                *(a+j) = *(a+j+1); 
                *(a+j+1) = b; 
            }
            
        }
    }
}
 
int main(void)
{  
FILE *f; 
int num_array[SIZE]; 
int size_array=0;

    f = fopen(InFile, "r"); 
    char c; int cnt_dig=0; int num=0; 
    while ((c = getc(f)) != EOF){
        switch (c)
        {
            case '0'...'9':
                cnt_dig++; 
                num = (num*10)+(c-0x30); 
                break;
            
            default:
                if (cnt_dig) {
                    num_array[size_array++]=num;
                }
                cnt_dig=0;
                num=0;
        }
        
    }
    fclose(f);

    sort_array(size_array, &num_array[0]);
    
    f = fopen(OutFile, "w");
    for (int i = 0; i < size_array; i++)
    {
        fprintf(f, "%d ", num_array[i]);
    }
    fclose(f);
       
    return 0;
}
