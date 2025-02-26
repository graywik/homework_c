int sum_between_ab(int from, int to, int size, int a[]){
    int sum=0;
    
    if (from>to) 
    {
        sum=from; from=to; to=sum;
    }
    
    sum=0;
    for (int i = 0; i < size; i++) {
        int num = *(a+i);
        if ((num>=from) && (num<=to)) {sum+=num;}
    }
    
    return sum;
}
