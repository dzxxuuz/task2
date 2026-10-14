#pragma once
#include "Animal.h"
class Hoofed :
    public Animal
{
    string habitat;
public:
    Hoofed(string name, string species, string genus, float weight, string habitat);
    
    void setHabitat(string habitat);
    string getHabitat()const;

    void showInfo()const;
};

