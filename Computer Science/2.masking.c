#include <stdio.h>


#define UPPER_MASK 0xF0   // 1111 0000
#define LOWER_MASK 0x0F   // 0000 1111



int main(int argc, char *argv[]){
    char value = 0x5a;  // 5 = 0101 A = 1010

    char upper = (value & UPPER_MASK) >> 4;    // 5 = 0101 1010 & 1111 0000 = 0101 0000 >> 4 = 0000 0101 | 0000 0101
    char lower = value & LOWER_MASK;           // A = 0101 1010 & 0000 1111 = 0000 1010                  | 0000 1010

    printf("Original: %x\n", value);
    printf("upper: %x\n", upper);       // 5
    printf("lower: %x\n", lower);       // a
    

    char all = upper & lower;


}