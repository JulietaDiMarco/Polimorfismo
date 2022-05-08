#include "cCirculo.h"

cCirculo::cCirculo(float radio_, eColor color_) :cForma(0, 0, color_) {
	radio = radio_;
}

float cCirculo::CalcularArea()
{
	return 3.14 * radio * radio;
}
