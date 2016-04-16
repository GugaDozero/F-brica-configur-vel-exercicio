#include "extensiblefactory.h"

#include "iproductprototype.h"

ExtensibleFactory::~ExtensibleFactory()
{
    for(map<string, IProductPrototype *>::iterator iter = this->m_productsHash.begin(); iter != this->m_productsHash.end(); ++iter)
    {
        delete iter->second;
    }

    this->m_productsHash.clear();
}

void ExtensibleFactory::insertProductType(const string &nome, IProductPrototype *product)
{
    this->m_productsHash.insert(make_pair(nome, product));
}

void ExtensibleFactory::removeProductType(const string &nome)
{
    delete this->m_productsHash[nome];
    this->m_productsHash.erase(nome);
}

IProductPrototype *ExtensibleFactory::createProduct(const string &nome)
{
    if ( this->m_productsHash.find(nome) == this->m_productsHash.end() )
    {
      return 0;
    }

    return this->m_productsHash[nome]->clone();
}
