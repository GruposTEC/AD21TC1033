#ifndef TABLERO_H
#define TABLERO_H
#include "simbolo.h"
#include <vector>
#include <string>
using std::string;
using std::vector;

class Tablero
{
private:
    vector<Simbolo> casilla;

public:
    Tablero();
    void dibujaTablero();
    void tiro(int pos, string sim);
    bool lleno();
    bool casillaOcupada(int pos);
};

#endif