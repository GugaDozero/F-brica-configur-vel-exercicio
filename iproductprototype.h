#ifndef PRODUCTPROTOTYPE_H
#define PRODUCTPROTOTYPE_H

#include <string>

using std::string;

class IProductPrototype
{
public:
    virtual string nomeProduto() { return ""; }

    virtual IProductPrototype* clone() = 0;
};

#endif // PRODUCTPROTOTYPE_H
