#include "stdio.h"

int main() {
    int a = 1;
    // 0b00000001
    printf("a<<0 = %d\n", a);
    // 0b00000010
    printf("a<<1 = %d\n", a<<1);
    // 0b00000100
    printf("a<<2 = %d\n", a<<2);
    // 0b00001000
    printf("a<<3 = %d\n", a<<3);

    int number = 5;     // 0b00001001
    int mask_odd = 1;   // 0b00000001
                        // 0b00000001

    int nmbr = 6;       // 0b00001010
    mask_odd;           // 0b00000001
                        // 0b00000000

    if (mask_odd & number == 1) {

    }
    return 0;
}