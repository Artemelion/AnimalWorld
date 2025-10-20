#pragma once
#include <iostream>
#include <string>
#include "ICarnivore.h"
#include "IHerbivore.h"
using namespace std;

class Wolf : public ICarnivore
{
    int power;

public:
    Wolf(int startPower = 120): power(startPower) {}

    virtual string GetName() const
    {
        return "Wolf";
    }

    virtual int GetPower() const
    {
        return power;
    }

    virtual void SetPower(int newPower)
    {
        power = newPower;
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
