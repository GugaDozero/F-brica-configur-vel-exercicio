#ifndef CARROPROTOTYPE_H
#define CARROPROTOTYPE_H

#include "iproductprototype.h"


class CarroPrototype : public IProductPrototype
{
public:
    virtual string nomeProduto();

    virtual IProductPrototype *clone();
};

#endif // CARROPROTOTYPE_H
