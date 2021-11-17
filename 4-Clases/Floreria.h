#ifndef FLORERIA_H_
#define FLORERIA_H_

#include <string>
#include "Flores.h"
using std::string;

class Floreria
{
private:
    Flores flores;

public:
    void recibir_pedido(Flores flor);
    Flores entrega_flores();
};
#endif