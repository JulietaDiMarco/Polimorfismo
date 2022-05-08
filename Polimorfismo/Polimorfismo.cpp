// Polimorfismo.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "cCirculo.h"
#include "cCuadrado.h"

using namespace std;

int main()
{
    cForma* forma = NULL;
    cCirculo* circulo = new cCirculo(2, eColor::AZUL);
    cCuadrado* cuadrado = new cCuadrado(3, eColor::ROJO);

    forma = circulo;

    cCuadrado* cuadrado_auxiliar = dynamic_cast<cCuadrado*>(forma);

    if (cuadrado_auxiliar != NULL)
        cout << "Mi forma es un cuadrado" << endl;

    cCirculo* circulo_auxiliar = dynamic_cast<cCirculo*>(forma);

    if (circulo_auxiliar != NULL)
        cout << "Mi forma es un circulo" << endl;

    delete circulo;
    delete cuadrado;

}

