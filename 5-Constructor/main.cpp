#include <iostream>
#include "Persona.h"
#include "Flores.h"
#include "Floreria.h"

using std::cout;
using std::endl;

int main()
{

    //string nombreFlor = flor1.get_nombre();
    //cout << nombreFlor << endl;
    //cout << flor1.get_color() << endl;

    Flores flor1;
    Persona per1;
    Persona per2("Richard");
    Floreria mifloreria;

    flor1.set_nombre("Rosa");
    flor1.set_color("Rojo");

    per1.set_nombre("Chris");
    per1.set_flores(flor1);

    //per2.set_nombre("Robin");

    //forma1
    mifloreria.recibir_pedido(per1.get_flores());

    //forma2
    Flores floraenviar = per1.get_flores();
    mifloreria.recibir_pedido(floraenviar);

    per2.set_flores(mifloreria.entrega_flores());

    cout << per2.toString() << endl;

    return 0;
}