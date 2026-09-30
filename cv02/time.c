#include <stdio.h>

int main() {
    int t; // 3652s --> 01:00:52
    printf("Zadej cas:");
    scanf("%d", &t);

    int hour = t / 3600;
    t = t - hour * 3600;
    int minute = t / 60;
    t = t - minute * 60;
    int second = t;
    printf("%d:%d:%d", hour, minute, second);
    return 0;
}