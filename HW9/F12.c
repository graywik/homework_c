void change_max_min(int size, int a[]) {
    int imin, imax, max, min;
    
    for (int i = 0; i < size; i++) {
        if (i == 0) {max=*a; min=*a; imin=0; imax=0;}
        else {
            if (max<(*(a+i))) {max=*(a+i); imax=i;}
            if (min>(*(a+i))) {min=*(a+i); imin=i;} 
        }
    }    
    
    int temp = *(a+imax);
    *(a+imax) = *(a+imin);
    *(a+imin) = temp;
        
}
