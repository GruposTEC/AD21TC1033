#include <iostream>
#include <string>
#include "Floreria.h"
#include "Flores.h"

using std::cout;
using std::endl;
using std::string;

void Floreria::recibir_pedido(Flores flor)
{
    flores = flor;
}
Flores Floreria::entrega_flores()
{
    return flores;
}
