#include <stdio.h>


int main() {
    // +, -, *, / - aritmeticky operatory
    int a, b;
    printf("Zadej hodnotu A: ");
    scanf("%d", &a);

    printf("Zadej hodnotu B: ");
    scanf("%d", &b);

    printf("Uzivatel zvolil A=%d, B=%d\n", a, b);
    printf("A + B = %d\n", a + b);
    printf("A - B = %d\n", a - b);
    printf("A / B = %0.1f\n", (float)(a / b));
    printf("A * B = %d\n", a * b);
    printf("A %% B = %d\n", a % b);

    int r_a = a % 2;
    int r_b = b % 2;

    //relacni operatory 
    // <, >, ==, !=, <=, >=

    if(r_a == 0) { // operator rovnosti
        printf("A je sudy\n");
    }else{
        printf("A je lichy\n");
    }

    if(r_b != 0) { // Pokud neni 0
        printf("B je lichy\n");
    } else {
        printf("B je sudy\n");
    }

    if (a < b) { 
        printf("A je mensi nez B\n");
    } 
    else if(a == b) {
        printf("A je rovno B\n");
    }
    else {
        printf("B je mensi nez A\n");
    }

    // logicky operatory && a ||
    if ( a == b && (a%2) == 0 || a !=b && (b % 2) == 0) {
        printf("B je sudy");
    }

    //if(!(a==b)) --> ! negace vyroku

    //TODO pridat binarni operatory

    return 0;
}
