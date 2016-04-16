#include <iostream>

#include "extensiblefactory.h"
#include "iproductprototype.h"
#include "carroprototype.h"
#include "sanduicheprototype.h"

using namespace std;

int main()
{
    SanduichePrototype *sanduiche = new SanduichePrototype;
    CarroPrototype *carro = new CarroPrototype;

    ExtensibleFactory *fabrica = new ExtensibleFactory;

    fabrica->insertProductType("sanduba", sanduiche);
    fabrica->insertProductType("automovel", carro);

    IProductPrototype *carro1 = fabrica->createProduct("automovel");
    IProductPrototype *carro2 = fabrica->createProduct("automovel");

    IProductPrototype *sanduiche1 = fabrica->createProduct("sanduba");
    IProductPrototype *sanduiche2 = fabrica->createProduct("sanduba");

    cout << carro1->nomeProduto() << endl
         << carro2->nomeProduto() << endl
         << sanduiche1->nomeProduto() << endl
         << sanduiche2->nomeProduto();

    cin.get();
    return 0;
}
