#include <stdio.h>

// Ex-change automat
// 36540 -> 7x 5000, 0x2000, 1x 1000, 1x 500, 0x200, .... , 2x20

int print_count(int total, int value) {
    int count = total / value;
    printf("%d -> %d\n", value, count);
    return total - count * value;
} 

int main() {
    int value;
    printf("Zadej hodnotu:");
    scanf("%d", &value);
    value = print_count(value, 8000);
    value = print_count(value, 7000);
    value = print_count(value, 5000);
    value = print_count(value, 2000);
    value = print_count(value, 1000);
    value = print_count(value, 500);
    value = print_count(value, 200);
    value = print_count(value, 100);
    value = print_count(value, 50);
    value = print_count(value, 20);
    value = print_count(value, 10);
    value = print_count(value, 5);
    value = print_count(value, 2);
    value = print_count(value, 1);    

    return 0;
}