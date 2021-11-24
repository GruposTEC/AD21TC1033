#include <iostream>
#include "simbolo.h"
#include "tablero.h"

using std::cout;

void Tablero::tiro(int pos, string sim)
{
    casilla[pos].setTiro(sim);
}

void Tablero::dibujaTablero()
{
    cout << "     |     |      \n";
    cout << "  " << casilla[0].getTiro() << "   |  " << casilla[1].getTiro() << "   |  " << casilla[2].getTiro() << "  \n";
    cout << "_____|_____|_____ \n";
    cout << "     |     |      \n";
    cout << "  " << casilla[3].getTiro() << "   |  " << casilla[4].getTiro() << "   |  " << casilla[5].getTiro() << "  \n";
    cout << "_____|_____|_____ \n";
    cout << "     |     |      \n";
    cout << "  " << casilla[6].getTiro() << "   |  " << casilla[7].getTiro() << "   |  " << casilla[8].getTiro() << "  \n";
    cout << "     |     |      \n\n";
}

Tablero::Tablero()
{
    for (int i = 0; i < 9; i++)
    {
        Simbolo s;
        casilla.push_back(s);
    }
}

bool Tablero::casillaOcupada(int pos)
{
    string val = casilla[pos].getTiro();
    if (val == "X" || val == "O")
    {
        return true;
    }
    else
    {
        return false;
    }
}
bool Tablero::lleno()
{
    int acum = 0;

    for (int i = 0; i < 9; i++)
    {
        if (casillaOcupada(i))
        {
            acum++;
        }
    }
    if (acum == 9)
    {
        return true;
    }
    else
    {
        return false;
    }
}