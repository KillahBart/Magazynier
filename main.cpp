#include <iostream>
#include "Gracz.h"

int main()

{
    bool koniec = false;
    Gracz p(5,5);

    //p.wyswietl();

    while(koniec != true)
        p.mapa(20);
}

/*
    Klasy:
    - miejsce docelowe
    - gracz
    - plansza
    - skrzynka
    - úciana
*/
