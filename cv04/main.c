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
        int tmp = num % 10;
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

void liche_a_sude(int h)
{
    int sude = 0;
    int liche = 0;
    while (h > 0)
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

int pocet_nul(int g)
{
    int num = 0;
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

/*
Načtěte celé kladné číslo a vypočítejte součin všech jeho číslic.
Příklad:
• Vstup: 234
• Výstup: 24
*/
int soucin(int n)
{
    int r;
    int soucin = 1;
    while (n > 0)
    {
        r = n % 10;
        soucin = soucin * r;
        n = n / 10;
    }

    return soucin;
}

/*
Načtěte celé kladné číslo a zjistěte, zda se čte stejně zleva i zprava.
Příklad:
• Vstup: 12321
• Výstup: Číslo je palindrom
*/

int palindrom(int number)
{
    int r = obrat(number);
    if (r == number)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

/*
Načtěte počet sekund a převeďte jej na hodiny, minuty a sekundy.
Příklad:
• Vstup: 3675
• Výstup: 1 hodina, 1 minuta, 15 sekund
*/
void sekundy(int sec)
{
    int hour = sec / 3600;
    sec = sec % 3600;
    int min = sec / 60;
    sec = sec % 60;
    printf("%d hour, %d min, %d sec", hour, min, sec);
}

/*
Načtěte délku v centimetrech a převeďte ji na metry, decimetry a centimetry.
Příklad:
• Vstup: 235
• Výstup: 2 m, 3 dm, 5 cm
*/

void centimetr(int cm)
{
    int metr = cm / 100;
    cm = cm % 100;
    int dm = cm / 10;
    cm = cm % 10;
    printf(" %d metr, %d dm, %d cm", metr, dm, cm);
}

/*
Převod hmotnosti
Načtěte hmotnost v gramech a převeďte ji na kilogramy a gramy.
Příklad:
• Vstup: 2450
• Výstup: 2 kg, 450 g
*/

void kila(int g)
{
    int kg = g / 1000;
    g = g % 1000;
    printf("%d kg, %d g", kg, g);
}

/*
Načtěte počet dnů a vypočítejte odpovídající počet hodin, minut a sekund.
Příklad:
• Vstup: 2
• Výstup: 48 hodin, 2880 minut, 172800 sekund
*/
void prevod_dnu(int dny)
{
    int hours = dny * 24;
    int minutes = hours * 60;
    int seconds = minutes * 60;
    printf("%d Hodin  %d minut  a  %d sekund", hours, minutes, seconds);
}

/*
Načtěte teplotu ve stupních Celsia a převeďte ji na stupně Fahrenheita.
Použijte vzorec: viz. pdf
*/
float prevod_celsia(float C)
{
    float F = 9.0 / 5.0 * C + 32;
    return F;
}

/*
Načtěte částku v korunách a vypište, kolik obsahuje bankovek v hodnotě 1000, 500, 200, 100, 50,
20 a 10 Kč. Použijte co nejmenší počet bankovek.
Příklad:
• Vstup: 1870
• Výstup: 1 × 1000 Kč, 1 × 500 Kč, 1 × 200 Kč, 1 × 100 Kč, 1 × 50 Kč, 1 × 20 Kc
*/
void rozklad_castky(int castka)
{
    int tisic = castka / 1000;
    castka = castka % 1000;

    int pet_set = castka / 500;
    castka = castka % 500;

    int dve_ste = castka / 200;
    castka = castka % 200;

    int sto = castka / 100;
    castka = castka % 100;

    int padesat = castka / 50;
    castka = castka % 50;

    int dvacet = castka / 20;
    castka = castka % 20;

    int deset = castka / 10;
    castka = castka % 10;
    printf("%dx 1000 Kc, %dx 500 Kc, %dx 200 Kc, %dx 100 Kc, %dx 50 Kc, %dx 20 Kc, %dx 10 Kc", tisic, pet_set, dve_ste, sto, padesat, dvacet, deset);
}

/*
Načtěte celé číslo a zjistěte, zda je dělitelné čísly 2, 3, 5 a 10.
Příklad:
• Vstup: 120
• Výstup: Dělitelné 2, 3, 5 a 10
*/
int delitelnost(int cislo)
{
    return cislo % 2 == 0 && cislo % 3 == 0 && cislo % 5 == 0;
}

/*
Načtěte celé kladné číslo a zjistěte druhou největší různou číslici, která se v něm nachází.
Příklad:
• Vstup: 58381
• Výstup: 5
*/
int druha_nejvetsi(int n)
{
    int nejvetsi = -1;
    int cislice = 0;
    int druhy = -1;
    while (n > 0)
    {
        cislice = n % 10;
        if (cislice > nejvetsi)
        {
            nejvetsi = cislice;
        }

        if (cislice > druhy && cislice < nejvetsi)
        {
            druhy = cislice;
        }
        n = n / 10;
    }
    return druhy;
}

/*
Kontrola prvočísla
Načtěte celé číslo a zjistěte, zda je prvočíslem.
Příklad:
• Vstup: 17
• Výstup: Číslo je prvočíslo.
*/

int prvocislo(int n)
{
    for (int i = 2; i < n; i++)
    {
        if (n % i == 0)
        {
            return 0;
        }
    }

    return 1;
}

/*
Načtěte celé kladné číslo a zjistěte, zda je dokonalé. Dokonalé číslo je rovno součtu všech svých
kladných dělitelů kromě sebe sama.
Příklad:
• Vstup: 28
• Výstup: Číslo je dokonalé.
*/
int dokonale_cislo(int num)
{
    int soucet = 0;
    for (int i = 1; i < num; i++)
    {
        if (num % i == 0)
        {
            soucet += i;
        }
    }
    if (soucet == num)
    {
        return 1;
    }
    return 0;
}

/*Načtěte tři celá čísla a vypište je vzestupně bez použití funkcí pro řazení.*/

void serazeni()
{
    int a;
    int b;
    int c;

    printf("Zadej cislo A: \n");
    scanf("%d", &a);

    printf("Zadej cislo B: \n");
    scanf("%d", &b);

    printf("Zadej cislo C: \n");
    scanf("%d", &c);

    if (a > b && b > c)
    {
        printf("%d, %d, %d", a, b, c);
    }

    if (a > c && c > b)
    {
        printf("%d, %d, %d", a, c, b);
    }

    if (b > a && a > c)
    {
        printf("%d, %d, %d", b, a, c);
    }

    if (b > c && c > a)
    {
        printf("%d, %d, %d", b, c, a);
    }

    if (c > b && b > a)
    {
        printf("%d, %d, %d", c, b, a);
    }

    if (c > a && a > b)
    {
        printf("%d, %d, %d", c, a, b);
    }
}

/*
Načtěte pět čísel a vypočítejte jejich aritmetický průměr
*/
void prumer()
{
    int a, b, c, d, e;
    printf("zadej pet cisel: ");
    scanf("%d %d %d %d %d", &a, &b, &c, &d, &e);
    float avg = (a + b + c + d + e) / 5.0;
    printf("prumer cisel je: %f\n", avg);
}

/*Načtěte dvě celá čísla určující interval. Vypočítejte součet všech celých čísel mezi nimi včetně
krajních hodnot.*/

void soucetvinter()
{
    int a, b, soucet = 0;
    printf("Zadej a");
    scanf("%d", &a);
    printf("Zadej b");
    scanf("%d", &b);
    for (int i = a; i <= b; i++)
    {
        soucet += i;
    }
    printf("%d je soucet cisel v intervalu", soucet);
}

/*
Načtěte dvě čísla a zjistěte, kolik sudých čísel se nachází mezi nimi včetně krajních hodnot.
*/

void sudmezi()
{
    int a, b, p;
    printf("zadej hodnoty");
    scanf("%d %d", &a, &b);
    for (int i = a; i <= b; i++)
    {
        if (i % 2 == 0)
        {
            p++;
        }
    }
    printf("%d", p);
}

int main(int argc, char const *argv[])
{
    sudmezi();
    // int result = dokonale_cislo(6);
    //  prevod_dnu(3);
    // serazeni();
    // prumer();
    // printf("%f ", prevod_celsia(28.0));
    // printf("%d", result);
    // printf("Hello world");
    // prvni_a_posledni(4213);
    //  liche_a_sude(4235);
    return 0;
}
