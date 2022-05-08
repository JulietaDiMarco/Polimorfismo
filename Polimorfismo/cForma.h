#pragma once

enum eColor { ROJO = 0, VERDE, AZUL };
using namespace std;
class cForma
{
public:
	int n_lados;
	int n_vertices;
	eColor color;

	cForma(int n_lados_, int n_vertices_, eColor color_);
	~cForma() {};
	virtual float CalcularArea() = 0;
};

