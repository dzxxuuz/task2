#pragma once
#include "Creature.h"
class Animal :
    public Creature
{
    string species;
    string genus;
    float weight;
public:
    void setSpecies();
    string getSpecies()const;

    void setGenus();
    string setGenus()const;

    void setWeight();
    float getWeight()const;
};

