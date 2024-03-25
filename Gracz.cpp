#include <iostream>
#include "Gracz.h"

using namespace std;

Gracz::Gracz(int width, int height) {
    x = width;
    y = height;
}

void Gracz::wyswietl() const {
    cout << "Pozycja x: " << x<<endl;
    cout << "Pozycja y: " << y<<endl;
}

void Gracz::mapa(int boardSize) const {
    system("cls");
    for (int i = 0; i < boardSize; i++) {
        cout << "#";
        for (int j = 0; j < boardSize-2; j++) {
            if (i == 0 || i == boardSize-1) {
                cout << "#";
            } else {
                if (j == x && i == y) {
                    cout << "@";
                }
                else {
                    cout << " ";
                }
            }
        }
        cout << "#" << endl;
    }
}

