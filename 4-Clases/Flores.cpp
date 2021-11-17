#include <iostream>
#include <string>
#include "Flores.h"

using std::cout;
using std::endl;
using std::string;

string Flores::get_nombre()
{
    return nombre;
}

void Flores::set_nombre(string nom)
{
    nombre = nom;
}

string Flores::get_color()
{
    return color;
}

void Flores::set_color(string col)
{
    color = col;
}

string Flores::toString()
{
    return "soy una flor de tipo " + nombre + " y de color " + color;
}
