#include "Africa.h"
#include "Wildebeest.h"
#include "Lion.h"
using namespace std;

IHerbivore* Africa::CreateHerbivore()
{
    return new Wildebeest();
}

ICarnivore* Africa::CreateCarnivore()
{
    return new Lion();
}
