#include <stdio.h>

int factorial(int n) {
    int result = 1;
    while (n > 0) {
        result *= n;
        n--;
    }
    return result;
}


int main() {

    int a = 5;
    int b = 5;

    printf("factorial -> %d", factorial(7));

    while (a > 0 && a > 5) {
        printf("%d\n", a);
        a--;
    }

    //printf("%d", b);

    //while(1) {
      //  printf("Panic!!!!!!!!\n");
    //}


    return 0;
}