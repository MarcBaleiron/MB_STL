// Definición del namespace Ciencia, dentro del cual se difine el namespace Física con su función para calcular la energía

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