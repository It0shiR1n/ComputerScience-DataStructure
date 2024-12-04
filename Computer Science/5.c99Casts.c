#include <stdio.h>
#include <stdint.h>

int main(int argc, char *argv[]){
    uint8_t a;
    uint16_t i;

    char *p = "hello";

    i = 0x12345678;
    a = (uint8_t) i;
    i = (uint8_t) a;

    printf("i is &u\n", i);
    printf("p is %p\n", p);
    printf("a is %c\n", a);

    p = (char*)(uintptr_t) i;

    printf("p is %p\n", p);


    return 0;

}