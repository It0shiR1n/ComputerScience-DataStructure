#include <stdio.h>

#define FLAG1 0x01 // 00000001
#define FLAG2 0x02 // 00000010
#define FLAG3 0x04 // 00000100
#define FLAG4 0x08 // 00001000
#define FLAG5 0x0f // 00010000


int main(int argc, char *argv[]){
    char flag = 0;     // 00000000
    char flag2 = 0x0f; // 00010000

    if (flag & FLAG1)                         // 0000 0000 & 0000 0001 = 0000 0000 
        printf("FLAG1 set\n");

    if (flag2 & FLAG5)
        printf("FLAG5 set\n");        // 0001 0000 & 0001 0000 = 0001 0000 

    if (flag & (FLAG1 | FLAG4))
        printf("FLAG1 or FLAG5 set!\n");


    return 0;
}