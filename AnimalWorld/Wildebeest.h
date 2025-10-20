#pragma once
#include <iostream>
#include <string>
#include "IHerbivore.h"
using namespace std;

class Wildebeest : public IHerbivore
{
    int  weight;
    bool alive;

public:
    Wildebeest(int value = 120): weight(value), alive(true) {}

    virtual string GetName() const
    {
        return "Wildebeest";
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
