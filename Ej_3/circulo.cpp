#define PI 3.14159265

// Definición del namespace Geometría, y de la clase Círculo dentro de este. Donde se definen las funciones para calcular el área y el perímetro

namespace Geometria
{
    class Circulo
    {
        private:
            double radio;

        public:
            Circulo (double radio)
            {
                this -> radio = radio;
            }

            double areaCirculo ()
            {
                return PI * radio *radio;
            }

            double perimetroCirculo ()
            {
                return 2 * PI * radio;
            }
    };
}