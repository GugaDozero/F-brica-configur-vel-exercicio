#include "sanduicheprototype.h"

string SanduichePrototype::nomeProduto()
{
    return "\nIsto eh um sanduiche\n";
}

IProductPrototype *SanduichePrototype::clone()
{
    return new SanduichePrototype;
}
