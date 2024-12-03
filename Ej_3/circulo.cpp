#define PI 3.14159265

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