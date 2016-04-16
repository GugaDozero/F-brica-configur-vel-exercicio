#ifndef EXTENSIBLEFACTORY
#define EXTENSIBLEFACTORY

#include "iproductprototype.h"

#include <string>
#include <map>

using std::string;
using std::map;

class ExtensibleFactory
{
public:
    ~ExtensibleFactory();

    void insertProductType(const string &nome, IProductPrototype *product);
    void removeProductType(const string &nome);
    IProductPrototype *createProduct(const string &nome);

private:
    map<string, IProductPrototype *> m_productsHash;
};

#endif // EXTENSIBLEFACTORY

