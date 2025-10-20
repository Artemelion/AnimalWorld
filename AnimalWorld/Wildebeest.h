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
    Wildebeest(int startWeight = 120): weight(startWeight), alive(true) {}

    virtual string GetName() const
    {
        return "Wildebeest";
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
