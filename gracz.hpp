//
//  gracz.hpp
//  Sokoban
//
//  Created by Саша Тищенко on 26.03.2021.
//

#ifndef gracz_hpp
#define gracz_hpp

class Gracz {
public:
    double x, y;
    Gracz(int width, int height);
    void wyswietl() const;
    void mapa(int boardSize) const;
};

#endifa
