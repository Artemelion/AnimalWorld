#pragma once
#include <iostream>
#include <string>
#include "IHerbivore.h"
using namespace std;

class Bison : public IHerbivore
{
    int weight;
    bool alive;

public:
    Bison(int value = 500): weight(value), alive(true) {}

    virtual string GetName() const
    {
        return "Bison";
    }

    virtual int GetWeight() const
    {
        return weight;
    }

    virtual void SetWeight(int value)
    {
        weight = value;
    }

    virtual bool IsAlive() const
    {
        return alive;
    }

    virtual void SetAlive(bool value)
    {
        alive = value;
    }

    virtual void EatGrass()
    {
        if (alive)
        {
            weight += 10;
        }
    }
};
