#include <stdio.h>

void factorial()
{
    int n, faktorial = 1;
    printf("Nacti cislo N: ");
    scanf("%d", &n);

    for (int j = 1; j <= n; j++)
    {
        faktorial = faktorial * j;
    }

    printf("faktorial je %d", faktorial);
}

void nasobilka()
{
    int N;

    printf("Nacti cislo:");
    scanf("%d", &N);

    for(int i=1; i<=10; i++) {
        printf("%d x %d=%d", N, i, N*i);
    }
}

void nejvetsi()
{
    int a;
    int b;
    int c;
    printf("%d", &a);
    scanf("%d", &a);
    printf("%d", &a);
    printf("%d", &b);
    scanf("%d", &b);
    printf("%d", &c);
    scanf("%d", &c);
    if (a >= b && a >= c)
    {
        printf("nejvetsi je %d", a);
    }
    else if (b >= a && b >= c)
    {
        printf("nejvetsi je %d", b);
    }
    else
    {
        printf("nejvetsi je %d", c);
        
    }
}

int main()
{

    return 0;
}