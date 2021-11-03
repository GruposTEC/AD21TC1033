#include <iostream> // equivalente import math *  math.sqrt from math import *
#include <cmath>

using std::cout;
using std::endl;

// using namespace std;  NO recomendado usarlo

int varGlobal = 5;

int main()
{
    int var = 5; //variables locales al método
    float var2 = 5.0;
    double var3 = 10.0;

    cout << var3 << endl; //equivalente a print

    cout << varGlobal << endl;

    //  and &&   or ||  not !
    //std::cin >> var3;
    if (var3 > 10)
    {
        cout << "var3 mayor de 10" << endl;
    }
    else // no hay elif en c++
    {
        cout << "var3 no es mayor de 10" << endl;
    }

    //std::cin >> var;
    switch (var)
    {
    case 1:
        cout << "Primera opcion" << endl;
        break;
    case 2:
        cout << "Segunda opcion" << endl;
        break;
    }

    for (int i = 0; i < 10; i = i + 4)
    {
        cout << "El valor de i es : " << i << endl;
    }

    /*
    while (true)  //ciclo infinito
    {
        std::cin >> var;
        cout << "El valor ingresado en el ciclo es " << var << endl;
        if (var == -1)
        {
            break;
        }
    }
    */
}
