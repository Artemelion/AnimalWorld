#pragma once
#include <iostream>
#include <string>
#include "IHerbivore.h"
using namespace std;

class Bison : public IHerbivore
{
    int  weight;
    bool alive;

public:
    Bison(int startWeight = 500): weight(startWeight), alive(true) {}

    virtual string GetName() const
    {
        return "Bison";
    }

    virtual int GetWeight() const
    {
        return weight;
    }

    virtual void SetWeight(int newWeight)
    {
        weight = newWeight;
    }

    virtual bool IsAlive() const
    {
        return alive;
    }

    virtual void SetAlive(bool isAliveNow)
    {
        alive = isAliveNow;
    }

    virtual void EatGrass()
    {
        if (alive)
        {
            weight += 10;
        }
    }
};
