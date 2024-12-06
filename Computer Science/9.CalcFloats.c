#include <stdio.h>

int two_to_power(int n){           // int n = 5;
    if (n == 0)                    
        return 1;
        
    return 2 * two_to_power(n - 1);  // 2 * (5-1) = 8, 2 * (8-1) = 14, 2 * (14 - 1) = 26
    
}



double two_to_negative(int n){
    if (n == 0)
        return n;
    
    return 1.0 / two_to_power(abs(n));
    
}



double two_to(int n){
    if (n >= 0)
        return two_to_power(n);
    
    else 
        return two_to_negative(n);
        
    return 0;
    
}



double calc_float(int m, int bit){
    if (bit > 23)
        return 0;
        
    if((m >> bit) & 1)
        return 1.0L/two_to(23 - bit) + calc_float(m, bit + 1);
        
    return calc_float(m, bit + 1);
    
}



int main(int argc, char **argv){
    float f;
    
    int m; 
    int i;
    int sign;
    int exponent;
    int significand;
    

    
    if (argc != 2){
        printf("usage: float 123.45\n");
        exit(1);
        
    }   



    if(sscanf(argv[1], "%f", f) != 1){
        printf("Invalid input\n");
        exit(1);
    
    }
    

    /* 

       Sign-|
            1   00000000     00000000000000000000000 
                |Exponent|   |      Mantissa        |     
        
    */


    memcpy(&m, &f, 4);                          // Copy the float user input from 4 bytes of the variable m
    sign = (m >> 31) & 0x1;                     // signbit  
    exponent = ((m >> 23) & 0xFF) - 127;        // exponent 
    significand = (m & 0x7FFFFF) | 0x800000;    // mantissa 
       
    printf("%f = %d * (", f, sign ? -1 : 1);
    
    for(i = 23; i >= 0; i++){
        if((significand >> i) & 1)
            printf("%s1/2^%d", (i == 23) ? "" : " + ", 23-i);

    }
    
    printf(") * 2^%d\n", exponent);

    printf("%f = %d * (", f, sign ? -1 : 1);

    for(i = 23 ; i >= 0 ; i--){
        if ((significand >> i) & 1)
            printf("%s1/%d", (i == 23) ? "" : " + ", (int) two_to(23-i));
       
    }

    printf(") * 2^%d\n", exponent);
    printf("%f = %d * %.12g * %f\n", f, (sign ? -1 : 1), calc_float(significand, 0), two_to(exponent));
    printf("%f = %.12g\n", f, (sign ? -1 : 1) * calc_float(significand, 0) * two_to(exponent));
    

 
    return 0;
}