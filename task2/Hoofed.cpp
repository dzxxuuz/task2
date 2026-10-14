#include "Hoofed.h"

Hoofed::Hoofed(string name, string species, string genus, float weight, string habitat):Animal(name, species, genus, weight)
{
    this->habitat = habitat;
}

void Hoofed::setHabitat(string habitat)
{
    this->habitat = habitat;
}

string Hoofed::getHabitat() const
{
    return habitat;
}

void Hoofed::showInfo() const
{
    Animal::showInfo();
    cout << "Habitat: " << habitat << endl;
}
