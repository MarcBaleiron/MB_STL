#include <iostream>
#include "ciencia.cpp"
using namespace std;

int main ()
{
    cout << "La energia de un objeto de 3kg es de: " << Ciencia::Fisica::calcularEnergia (3) << endl;

    return 0;
}