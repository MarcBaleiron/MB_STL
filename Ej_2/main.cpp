#include <iostream>
#include "triangulo.cpp"
#include "circulo.cpp"
using namespace std;

// main donde se hace uso de las funciones del namespace Geometría

int main ()
{
    cout << "El area de un triangulo de base 3 y altura 5 es de: " << Geometria::areaTriangulo (3, 5) << endl;
    cout << "El area de un circulo de radio 8 es de: " << Geometria::areaCirculo (8) << endl;
}