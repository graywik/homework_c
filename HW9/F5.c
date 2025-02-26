int find_max_array(int size, int a[]){
    int max;
    for (int i = 0; i < size; i++) {
        if (i==0) {max=*a;}
        else {
         max = (max<*(a+i))?*(a+i):max;
        }
        
    }
    return max;
}
