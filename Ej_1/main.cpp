#include <iostream>
using namespace std;

namespace Matematicas
{
    int suma (int a, int b)
    {
        return a + b;
    }

    int resta (int a , int b)
    {
        return a - b;
    }
}

int main ()
{
    cout << "La suma de 3 y 8 es: " << Matematicas::suma (3, 8) << endl;
    cout << "La resta de 8 y 5 es: " << Matematicas::resta (8, 5) << endl;
}