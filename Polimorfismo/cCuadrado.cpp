#include "cCuadrado.h"

cCuadrado::cCuadrado(float lado_, eColor color_):cForma(4,4, color_)
{
	this->lado=lado_;
}

float cCuadrado::CalcularArea()
{
	return lado*lado;
}
