#include <stdlib.h>
#include <stdio.h>

/*
Vytvorte aplikaci ruleta, ve ktere si uzivatel muze vsadit a hrat dokud nezada cislo -1 nebo
nema jiz penize.


*/
/*(-5, 5)*/
//  (0 - 1555555) % (5 + 5) -> 0 - 9
//  (0 - 9) - 5 -> (-5 , 5)
int range(int dolni_limit, int horni_limit) {
    horni_limit += 1;
    return rand() % (horni_limit - dolni_limit) - abs(dolni_limit);  // (0 - horni_limit-1)
}

/*
 Vypis menu pro uzivate
*/
void print_menu() {
    printf("========================\n");
    printf("\tVitej v casinu!\n");
    printf("Vyber si na jakou barvu chces vsadit: \n");
    printf("\t 1: cerna\n");
    printf("\t 2: cervena\n");
    printf("\n");
    
    printf("========================\n");
}

/**
* Nacte od uzivatele co si vybral a provede validaci.
0 - zelena
1 - cerna
2 - cervena
*/
int get_choise() {

}

/*
    Vrati jaka barva prave padla
*/
int get_color() {
    int number = rand() % (37 + 1);
    if (number == 0) {
        return 0;
    }

    if(number > 0 && number <= 18) {
        return 1;
    } else {
        return 2;
    }
}

/*
Inicializuje hru spusti
*/
void start_game() {
    int account = 1000;
    do {
        print_menu();
        int color, bet;
        scanf("%d", &color);
        printf("Zadej sazku: \n");
        scanf("%d", &bet);
        if(color == get_color()) {
            printf("Vyhravate!!!!!\n");
            account += bet * 2;
        } else {
            account -= bet;
            printf("Prohra ;(\n");
        }
        printf("Zbyva vam %d\n", account);
    } while(account > 0);
}

int main() {
    srand(time(NULL));
    start_game();
    return 0;
}
