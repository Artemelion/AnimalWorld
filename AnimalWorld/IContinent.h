#pragma once
#include <string>
using namespace std;

class IHerbivore;
class ICarnivore;

class IContinent
{
public:
    virtual ~IContinent() {}

    virtual string GetName() const = 0;

    virtual IHerbivore* CreateHerbivore() = 0;
    virtual ICarnivore* CreateCarnivore() = 0;
};
