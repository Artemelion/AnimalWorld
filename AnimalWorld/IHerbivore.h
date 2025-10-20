#pragma once
#include <string>
using namespace std;

class IHerbivore
{
public:
    virtual ~IHerbivore() {}

    virtual string GetName() const = 0;

    virtual int  GetWeight() const = 0;
    virtual void SetWeight(int value) = 0;

    virtual bool IsAlive() const = 0;
    virtual void SetAlive(bool value) = 0;

    virtual void EatGrass() = 0;
};
