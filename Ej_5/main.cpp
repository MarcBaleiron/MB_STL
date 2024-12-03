#include <iostream>
#include <vector>
#include <map>
#include <set>
#include <stack>
using namespace std;

// main donde se opera con los contenedores vector, map, set y stack

int main ()
{
    // Se crea un vector de numeros, se inserta un 0 al principio y un 6 al final y se imprime

    vector <int> numeros = {1, 2, 3, 4, 5};
    numeros.insert (numeros.begin (), 0);
    numeros.insert (numeros.end (), 6);

    cout << "Los numeros son: ";
    for (int num : numeros)
    {
        cout << num << " ";
    }
    cout << endl << endl;


    // Se crea un mapa de edades, se imprime la deiferencia de edad entre Antonio y Pepe y se elimina a Jaime

    map <string, int> edad;
    edad ["Pepe"] = 73;
    edad ["Antonio"] = 99;
    edad ["Jaime"] = 86;

    cout << "Antonio tiene " << edad ["Antonio"] - edad ["Pepe"] << " años mas que Pepe" << endl;
    edad.erase ("Jaime");
    cout << endl;


    // Se crea un set de valores, se imprime, se elimina el 7 y se imprime el tamaño tras la eliminación

    set <int> valores = {3, 5, 7, 8, 37, 73};

    cout << "Los valores son: ";
    for (int val : valores)
    {
        cout << val << " ";
    }
    cout << endl;

    valores.erase (7);
    cout << "Tras eliminar el 7, hay " << valores.size () << " valores" << endl << endl;


    // Se crea un stack de strings, se insertan tres elementos y se imprimen

    stack <string> pila;
    pila.push ("Primero");
    pila.push ("Segundo");
    pila.push ("Tercero");

    cout << "Elementos de la pila (del final al principio): " << endl;
    while (!pila.empty ())
    {
        cout << pila.top () << endl;
        pila.pop ();
    }


    return 0;
}