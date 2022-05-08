#pragma once
#include "cForma.h"


class cCuadrado :
    public cForma
{
public:
    float lado;

    cCuadrado(float lado_, eColor color_);
    virtual ~cCuadrado() {};
    float CalcularArea();
};

