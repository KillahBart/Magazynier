#ifndef Gracz_hpp
#define Gracz_hpp

class Gracz {
public:
	double x, y;
	Gracz(int width, int height);
	void wyswietl() const;
	void mapa(int boardSize) const;
};

#endif
