#pragma once
#include <iostream>
#include <string>
#include "ICarnivore.h"
#include "IHerbivore.h"
using namespace std;

class Lion : public ICarnivore
{
    int power;

public:
    Lion(int value = 200): power(value) {}

    virtual string GetName() const
    {
        return "Lion";
    }

    virtual int GetPower() const
    {
        return power;
    }

    virtual void SetPower(int value)
    {
        power = value;
    }

    virtual void Eat(IHerbivore* prey)
    {
        if (prey == nullptr || !prey->IsAlive())
        {
            return;
        }

        if (power > prey->GetWeight())
        {
            power += 10;
            prey->SetAlive(false);
            cout << GetName() << " ate " << prey->GetName() << endl;
        }
        else
        {
            power -= 10;
            cout << GetName() << " failed to eat " << prey->GetName() << endl;
        }
    }
};
