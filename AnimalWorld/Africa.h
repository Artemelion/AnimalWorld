#pragma once
#include <string>
#include "IContinent.h"
using namespace std;

class Africa : public IContinent
{
public:
    virtual string GetName() const
    {
        return "Africa";
    }

    virtual IHerbivore* CreateHerbivore();
    virtual ICarnivore* CreateCarnivore();
};
