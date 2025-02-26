void swap_negmax_last(int size, int a[]) {
    int imax, max;
    imax=-1;
    
    for (int i = 0; i < size; i++) {
        int num = *(a+i);
        if ((num<0) && (imax==-1)) {  //первый найденный отрицательный, берем за MAX
            max=num; imax=i;
        }
        else if ((num<0) && (max<num)) {
            max=num; imax=i;
        }
    }    
    
    if (imax>=0) {  //если был хоть один отрицательный
        int temp = *(a+imax);
        *(a+imax) = *(a+size-1);
        *(a+size-1) = temp;
    }
}
