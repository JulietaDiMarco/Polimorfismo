#pragma once
#include "cForma.h"
class cCirculo :
    public cForma
{
public:   
    float radio;

    cCirculo(float radio_, eColor color_);
    float CalcularArea();

};

