#include "NorthAmerica.h"
#include "Bison.h"
#include "Wolf.h"
using namespace std;

IHerbivore* NorthAmerica::CreateHerbivore()
{
    return new Bison();
}

ICarnivore* NorthAmerica::CreateCarnivore()
{
    return new Wolf();
}
