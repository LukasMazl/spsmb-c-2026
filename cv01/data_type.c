#include <stdio.h>
#include <math.h>

int main() {
    printf("long -> %dB\n", sizeof(long long));
    printf("int -> %dB\n", sizeof(int));
    printf("short -> %dB\n", sizeof(short));
    printf("char -> %dB\n", sizeof(char)); 
    printf("float -> %dB\n", sizeof(float));
    printf("double -> %dB\n", sizeof(double));
    printf("pointer -> %dB\n", sizeof(void*));

    char a = 64;
    printf("a -> %c\n", a);

    int bin_number = 0b1000101001;
    int dec_number = 125185;
    int hex_number = 0xFFAA00FA;

    float fl = 3.14;
    printf("fl -> %f", M_PI);

    return 0;
}