int compression(int a[], int b[], int N){
    int z=0; int one=0; int j=0;
    
    for (int i = 0; i < N; i++)
    {
       if ((i==0) && (*a==1)) {*b++=0; j++;} 
       int d = *(a+i); 
       switch (d)
       {
            case 1:
                if (z!=0) {*b++=z; j++;}
                one++; z=0;
                break;
               
            case 0:
                if (one!=0) {*b++=one; j++;}
                z++; one=0;
                break;
               
            default:
               
       }
    }
    if (z!=0) {*b=z; j++;}
    else if (one!=0) {*b=one; j++;}

    return j;
}
