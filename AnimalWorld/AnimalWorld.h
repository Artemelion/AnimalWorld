#pragma once
#include <iostream>
using namespace std;

class IContinent;
class IHerbivore;
class ICarnivore;

class AnimalWorld
{
    IHerbivore** herbivores;
    ICarnivore** carnivores;
    int herbivoreCount;
    int carnivoreCount;

    IHerbivore* FindFirstAliveHerbivore() const;

public:
    AnimalWorld(IContinent* continent, int herbCount, int carnCount);
    ~AnimalWorld();

    void MealsHerbivores();
    void NutritionCarnivores();
    void PrintState() const;
};
