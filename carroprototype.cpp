#include "carroprototype.h"

string CarroPrototype::nomeProduto()
{
    return "\nIsto eh um carro\n";
}

IProductPrototype *CarroPrototype::clone()
{
    return new CarroPrototype;
}
