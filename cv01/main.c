#include <stdio.h>


int main() {
    int a = 1, b = -1, c = -2;

    printf("%dx^2", a);
    if(b >= 0) {
        printf("+");
    }
    printf("%dx", b);
    if(c >= 0) {
        printf("+");
    }

    printf("%d", c);

    return 0;
}