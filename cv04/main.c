#include <stdio.h>

/*
Načtěte celé kladné číslo. Vypište součet všech jeho číslic.
Příklad:
• Vstup: 4582
• Výstup: 19
*/

int suma_cislic(int cislo)
{
    int sum = 0;
    while (cislo > 0)
    {
        // int tmp = cislo % 10;
        // sum = sum + tmp;
        sum += cislo % 10;
        cislo /= 10;
    }
    return sum;
}

/*
Načtěte celé kladné číslo a zjistěte, kolik má číslic.
Příklad:
• Vstup: 58241
• Výstup: 5
*/
int pocet_cislic(int p)
{
    int i = 0;
    while (p > 0)
    {
        p /= 10;
        i++;
    }
    return i;
}

/*
Načtěte celé kladné číslo. Vypište jeho první a poslední číslici.
Příklad:
• Vstup: 73925
• Výstup: První číslice: 7, poslední číslice: 5
*/

void prvni_a_posledni(int cislo)
{

    int posledni = cislo % 10;
    int r = 0;

    while (cislo > 0)
    {
        r = cislo % 10;
        cislo /= 10;
    }

    printf("prvni cislice: %d\n posledni cislice: %d\n", r, posledni);
}
/*4. Obrácení čísla
Načtěte celé kladné číslo a vypište jej v opačném pořadí.
Příklad:
• Vstup: 12345
• Výstup: 54321*/
int obrat(int cislo)
{
    int obraceni = 0;
    while (cislo > 0)
    {
        obraceni = obraceni * 10 + cislo % 10;

        cislo /= 10;
    }
    return obraceni;
}

void obr(int num) {
    while(num >0) {
        printf("%d", num %10);
        num /= 10;
    }
}


/*
Načtěte celé kladné číslo a zjistěte, která číslice je v něm největší.
Příklad:
• Vstup: 58321
• Výstup: 8
*/



int main(int argc, char const *argv[])
{
    int result = obrat (12345);
    printf("%d", result);
    // printf("Hello world");
    prvni_a_posledni(4213);
    return 0;
}
