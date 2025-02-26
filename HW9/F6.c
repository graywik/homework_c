int is_two_same(int size, int a[]){
    int b=0;
    for (int i = 0; i < size; i++) 
    {
        for (int j = 0; j < size; j++)
        {
            if ((i!=j) && (*(a+i)==*(a+j))) {b=1;}
        }
    }    
    
    return b;
}
