#ifndef PERSONA_H_
#define PERSONA_H_

#include <string>
#include "Flores.h"

using std::string;
class Persona
{
private:
    string nombre;
    Flores flor;

public:
    Flores manda_flores();
    string get_nombre();
    void set_nombre(string nom);
    void set_flores(Flores fl);
    Flores get_flores();
    string toString();
};
#endif