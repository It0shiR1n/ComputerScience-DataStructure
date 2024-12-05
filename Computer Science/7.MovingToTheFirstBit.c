#include <stdio.h>

// in this case, we will count the bits from left to right...

int main(int argc, char **argv){
    int i = 0x8000;     // 1000 0000 0000 0000 
    int c = 0;          // 0 

    while (!(i & 0x1)){
        c++;
        i = i >> c;

    }

    printf("To be the more significant bit will need: %d times to move\n", c);
    return 0;

    /*
        
        1000000000000000  = Begin

        0100000000000000  = Shifted the 1 by 1 positions
        0001000000000000  = Shifted the 1 by 2 positions  
        0000001000000000  = Shifted the 1 by 3 positions    
        0000000000100000  = Shifted the 1 by 4 positions  
        0000000000000001  = Shifted the 1 by 5 positions 
       
    */

}
