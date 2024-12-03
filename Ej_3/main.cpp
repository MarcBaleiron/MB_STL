#include <iostream>
#include "circulo.cpp"
using namespace std;

// main donde se hace uso de las funciones del namespace Geometría

int main ()
{
    Geometria::Circulo circ (3);

    cout << "El area del circulo es: " << circ.areaCirculo () << endl;
    cout << "El perimetro del circulo es: " << circ.perimetroCirculo () << endl;

    return 0;
}