#include <stdio.h>


int main(int argc, char **argv){
    int v = 0x0001; // 0000 0000 0000 0001
    int c = 5;

    while (!(v & 0x1)){
        c--;
        v = v >> c;
        
    }

    printf("To be the less significant bit will need: %d times to move\n", c);
    return 0;

    /*
        0000000000000001  = Begin

        0000000000100000  = Shifted the 1 by 5 positions 
        0000001000000000  = Shifted the 1 by 4 positions
        0001000000000000  = Shifted the 1 by 3 positions
        0100000000000000  = Shifted the 1 by 2 positions
        1000000000000000  = Shifted the 1 by 1 positions
    
    */

}