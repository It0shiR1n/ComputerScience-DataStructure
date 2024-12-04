#include <stdio.h>
#include <stdint.h>


int main(int argc, char *argv[]){
    char a;
    char *p = "hello"; // hello\x00

    int i;


    i = 0x12345678; // converts into int = 4 bytes (32 bits)
    a = i;          // converts into byte = 1 bytes (8 bits) so catch only the 0x12
    i = a;          // pass 0x12 for int = 4 bytes (32 bits) so 0x12000000

    printf("i is %d\n", i);
    printf("p is %p\n", p);
    printf("a is %s\n", &a);

    p = (char *) i; // Casting to "fool" the compiler do adapt into architecture, 0x12
    printf("p is %p\n", p);

    return 0;

}