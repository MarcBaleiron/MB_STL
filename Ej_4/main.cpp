#include <iostream>
#include "ciencia.cpp"
using namespace std;

// main donde se hace uso de las funciones del namespace Física, que pertenece al namespace Ciencia

int main ()
{
    cout << "La energia de un objeto de 3kg es de: " << Ciencia::Fisica::calcularEnergia (3) << endl;

    return 0;
}