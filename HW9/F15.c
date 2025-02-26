int count_bigger_abs(int n, int a[]){
    int max=0;
    int cnt=0;
    
    for (int i = 0; i < n; i++) {
        if (i==0) {max=*a;}
        else if (max<(*(a+i))) {max=*(a+i);}
    }
      
    for (int i = 0; i < n; i++) {
        int num = *(a+i);
        if (num<0) {
            num=-num;
        }
        if (num>max) {
            cnt++;
        }
    }
    
    return cnt;
}
        
