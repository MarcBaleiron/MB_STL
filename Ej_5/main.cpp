#include <iostream>
#include <vector>
#include <map>
#include <set>
using namespace std;

int main ()
{
    vector <int> numeros = {1, 2, 3, 4, 5};
    numeros.insert (numeros.begin (), 0);
    numeros.insert (numeros.end (), 6);

    cout << "Los numeros son: ";
    for (int num : numeros)
    {
        cout << num << " ";
    }
    cout << endl << endl;


    map <string, int> edad;
    edad ["Pepe"] = 73;
    edad ["Antonio"] = 99;
    edad ["Jaime"] = 86;

    cout << "Antonio tiene " << edad ["Antonio"] - edad ["Pepe"] << " años mas que Pepe" << endl;
    edad.erase ("Jaime");
    cout << endl;


    set <int> valores = {3, 5, 7, 8, 37, 73};

    cout << "Los valores son: ";
    for (int val : valores)
    {
        cout << val << " ";
    }
    cout << endl;

    valores.erase (7);
    cout << "Tras eliminar el 7, hay " << valores.size () << " valores" << endl;


    return 0;
}