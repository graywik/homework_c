#include <stdio.h> 
#define  LEN  10

int max_row(int size, void *array, int row){
    int (*a)[size] = array;
    int max = a[0][row];
    
    for (int i = 1; i < size; i++) {
        int num = a[i][row];
        max = (max<num)?num:max;
    }
    return max;
}


int main (void) 
{
    int dig[LEN][LEN];

    for (int i = 0; i < LEN; i++) {
        for (int j = 0; j < LEN; j++) {
            scanf("%d", &dig[j][i]);
        }
    }
    
    int sum=0; 
    for (int i = 0; i < LEN; i++) {
        sum+=max_row(LEN, dig, i);
    }
    
    printf("%d", sum);
        
    
    return 0;
}
/*
45 2 1 5 32 12 35 55 4 3 1 1 1 1 5 32 54 12 21 54 87 98 21 2 4

61 75 55 2 35 34 77 93 28 49 11 34 22 78 19 14 67 67 11 0 72 39 23 53 92 51 60 34 71 63 14 27 72 6 0 79 98 56 30 15 31 16 3 4 95 59 25 17 11 20 5 93 21 61 96 30 79 38 73 40 89 4 66 19 36 99 67 67 92 36 87 54 7 35 40 43 44 46 4 69 98 57 20 75 9 66 85 9 39 31 8 90 94 25 12 30 18 10 23 15
 */
