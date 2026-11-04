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

void obr(int num)
{
    while (num > 0)
    {
        printf("%d", num % 10);
        num /= 10;
    }
}

/*
Načtěte celé kladné číslo a zjistěte, která číslice je v něm největší.
Příklad:
• Vstup: 58321
• Výstup: 8
*/

int nej(int num)
{
    int a = -1;
    while (num > 0)
    {
        int tmp = num % 10;
        if (tmp > a)
        {
            a = tmp;
        }
        num /= 10;
    }
    return a;
}


/*
Načtěte celé kladné číslo a zjistěte, která číslice je v něm nejmenší.
Příklad:
• Vstup: 58321
• Výstup: 1
*/

int nejmensi(int num)
{
    int a = 10;
    while (num > 0)
    {
        int tmp = num % 10 ;
        if (tmp < a)
        {
            a = tmp;
        }
        num /= 10;
    }
    return a;
}

/*
Načtěte celé kladné číslo. Zjistěte, kolik obsahuje sudých a kolik lichých číslic.
Příklad:
• Vstup: 123456
• Výstup: Sudé číslice: 3, liché číslice: 3
*/

void liche_a_sude(int h){
    int sude = 0;
    int liche = 0;
 while ( h > 0)
 {
    if (h % 2 == 0)
    {
        sude++;
    }
    else
    {
        liche++;
    }
    h /= 10;
}
 printf("Pocet sudych je : %d\n pocet lichych je : %d ", sude, liche);
}

/*
Načtěte celé kladné číslo a zjistěte, kolikrát se v něm nachází číslice 0.
Příklad:
• Vstup: 10203040
• Výstup: 4
*/

int pocet_nul(int g){
    int num=0;
    while (g > 0)
    {
        if (g % 10 == 0)
        {
            num++;
        }
        g /= 10;
    }
    return num;
}

int main(int argc, char const *argv[])
{
    int result = pocet_nul(1064030);
    printf("%d", result);
    // printf("Hello world");
    prvni_a_posledni(4213);
    liche_a_sude(4235);
    return 0;
}
