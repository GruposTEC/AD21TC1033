#include <iostream>
#include <string>
#include "Persona.h"
#include "Flores.h"

using std::cout;
using std::endl;
using std::string;

Persona::Persona()
{
    cout << "constructor de Persona sin parámteros" << endl;
}

Persona::~Persona()
{
    cout << "Destrcutor de Persona" << endl;
}

Persona::Persona(string nom)
{
    nombre = nom;
}

string Persona::get_nombre()
{
    return nombre;
}

void Persona::set_nombre(string nom)
{
    nombre = nom;
}

void Persona::set_flores(Flores flo)
{
    flor = flo;
}

Flores Persona::get_flores()
{
    return flor;
}

string Persona::toString()
{
    return "soy una persona y me llamo " + get_nombre() +
           "y las flores que tengo son" + flor.toString();
}
