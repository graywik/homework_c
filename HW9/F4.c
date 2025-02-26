void print_digit(char s[]){            
    int num[10];
    char sym;

    for (int i = 0; i < 10; i++)    //инициализация массива кол-ва каждой цифры
    {
        num[i]=0;
    }

    sym = *s++;
    while ((sym>30) && (sym<127)){
        switch (sym)
        {
            case '0':
                num[0]++;
                break;
                
            case '1':
                num[1]++;
                break;
                
            case '2':
                num[2]++;
                break;
                
            case '3':
                num[3]++;
                break;
                
            case '4':
                num[4]++;
                break;
                
            case '5':
                num[5]++;
                break;
                
            case '6':
                num[6]++;
                break;
                
            case '7':
                num[7]++;
                break;
                
            case '8':
                num[8]++;
                break;
                
            case '9':
                num[9]++;
                break;
                
            default:
                break;
        }
        sym = *s++;
    }
    
    for (int i = 0; i < 10; i++)        //печать результата
    { 
        if (num[i]) {
            printf("%d %d \n", i, num[i]);
        }
    }
}
