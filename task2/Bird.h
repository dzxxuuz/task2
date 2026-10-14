#pragma once
#include "Animal.h"
class Bird :
    public Animal
{
    bool isPredator;
public:
    Bird(string name, string species, string genus, float weight, bool isPredator);

    void setPredator(bool isPredator);
    bool getPredator()const;

    void showInfo()const;
};

