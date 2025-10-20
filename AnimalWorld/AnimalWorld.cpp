#include "AnimalWorld.h"
#include "IContinent.h"
#include "IHerbivore.h"
#include "ICarnivore.h"
using namespace std;

AnimalWorld::AnimalWorld(IContinent* continent, int herbCount, int carnCount)
{
    herbivoreCount = herbCount;
    carnivoreCount = carnCount;

    herbivores = new IHerbivore * [herbivoreCount];
    carnivores = new ICarnivore * [carnivoreCount];

    for (int i = 0; i < herbivoreCount; i++)
    {
        herbivores[i] = continent->CreateHerbivore();
    }
    for (int i = 0; i < carnivoreCount; i++)
    {
        carnivores[i] = continent->CreateCarnivore();
    }
}

AnimalWorld::~AnimalWorld()
{
    for (int i = 0; i < herbivoreCount; i++)
    {
        delete herbivores[i];
    }
    for (int i = 0; i < carnivoreCount; i++)
    {
        delete carnivores[i];
    }
    delete[] herbivores;
    delete[] carnivores;
}

IHerbivore* AnimalWorld::FindFirstAliveHerbivore() const
{
    for (int i = 0; i < herbivoreCount; i++)
    {
        if (herbivores[i]->IsAlive())
        {
            return herbivores[i];
        }
    }
    return nullptr;
}

void AnimalWorld::MealsHerbivores()
{
    for (int i = 0; i < herbivoreCount; i++)
    {
        herbivores[i]->EatGrass();
    }
}

void AnimalWorld::NutritionCarnivores()
{
    for (int i = 0; i < carnivoreCount; i++)
    {
        IHerbivore* prey = FindFirstAliveHerbivore();
        if (prey == nullptr)
        {
            cout << "No alive herbivores left." << endl;
            return;
        }
        carnivores[i]->Eat(prey);
    }
}

void AnimalWorld::PrintState() const
{
    cout << "Herbivores:" << endl;
    for (int i = 0; i < herbivoreCount; i++)
    {
        cout << herbivores[i]->GetName()
            << ", weight=" << herbivores[i]->GetWeight()
            << ", alive=" << (herbivores[i]->IsAlive() ? "yes" : "no")
            << endl;
    }

    cout << "Carnivores:" << endl;
    for (int i = 0; i < carnivoreCount; i++)
    {
        cout << carnivores[i]->GetName()
            << ", power=" << carnivores[i]->GetPower()
            << endl;
    }
}
