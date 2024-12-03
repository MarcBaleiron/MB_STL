#include <iostream>

namespace Ciencia
{
    namespace Fisica
    {
        const int c = 300000000;

        double calcularEnergia (double masa)
        {
            return masa * c * c;
        }
    }
}