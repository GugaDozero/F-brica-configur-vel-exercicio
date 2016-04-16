#ifndef SANDUICHEPROTOTYPE_H
#define SANDUICHEPROTOTYPE_H

#include "iproductprototype.h"


class SanduichePrototype : public IProductPrototype
{
public:
    virtual string nomeProduto();

    virtual IProductPrototype *clone();

};

#endif // SANDUICHEPROTOTYPE_H
