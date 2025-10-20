#pragma once
#include <string>
using namespace std;

class IHerbivore;

class ICarnivore
{
public:
    virtual ~ICarnivore() {}

    virtual string GetName() const = 0;

    virtual int  GetPower() const = 0;
    virtual void SetPower(int value) = 0;

    virtual void Eat(IHerbivore* prey) = 0;
};
