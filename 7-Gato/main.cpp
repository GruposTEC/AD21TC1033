#include <iostream>
#include "simbolo.h"
#include "tablero.h"

using std::cout;
using std::endl;

int main()
{
    Simbolo s1;
    string s = s1.getTiro();

    cout << s1.getTiro() << endl;

    Tablero tab;

    for (int i = 0; i < 9; i++)
    {
        tab.tiro(i, "X");
    }
    tab.dibujaTablero();
    cout << tab.casillaOcupada(0) << endl;
    cout << tab.casillaOcupada(5) << endl;

    cout << tab.lleno() << endl;

    return 0;
}