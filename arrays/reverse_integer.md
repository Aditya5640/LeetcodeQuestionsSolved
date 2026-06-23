while x is not 0

    digit = x % 10

    check if reversed_x * 10 + digit would overflow 
    if(reversed_x > INT_MAX/10 || reversed_x == INT_MAX/10 && digit>7){
                return 0;// positive overflow.
            }  
    if(reversed_x < INT_MIN/10 || reversed_x == INT_MIN/10 && digit<-8){
                return 0; // negative overflow.
            }  
    reversed_x = reversed_x * 10 + digit

    x = x / 10
