#pragma once
#include <string>
#include "IContinent.h"
using namespace std;

class NorthAmerica : public IContinent
{
public:
    virtual string GetName() const
    {
        return "North America";
    }

    virtual IHerbivore* CreateHerbivore();
    virtual ICarnivore* CreateCarnivore();
};
