#include <iostream>
#include "matematicas.cpp"
using namespace std;

// main donde se hace uso de las funciones del namespace Matemáticas

int main ()
{
    cout << "La suma de 3 y 8 es: " << Matematicas::suma (3, 8) << endl;
    cout << "La resta de 8 y 5 es: " << Matematicas::resta (8, 5) << endl;

    return 0;
}