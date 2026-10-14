#pragma once
#include "Creature.h"
class Animal :
    public Creature
{
    string species;
    string genus;
    float weight;
public:
    Animal(string name, string species, string genus, float weight);

    void setSpecies(string species);
    string getSpecies()const;

    void setGenus(string genus);
    string getGenus()const;

    void setWeight(float weight);
    float getWeight()const;

    void showInfo()const;
};

