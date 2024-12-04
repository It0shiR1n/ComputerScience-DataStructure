#include <stdio.h>

int main(int argc, char *argv[]){
    float a = 8.0;
    float b = 0.45;

    double ad = 0.45;
    double bd = 8.0;


    printf("float + float (Common format): %f\n", a + b);
    printf("double + double (Common format): %f\n\n", ad + bd);

    printf("float + float (10/20 format): %10.20f\n", a + b);
    printf("double + double (10/20 format): %10.20f\n", ad + bd);

    return 0;
}
