#include "Bird.h"

Bird::Bird(string name, string species, string genus, float weight, bool isPredator) : Animal(name, species, genus, weight)
{
    this->isPredator = isPredator;
}

void Bird::setPredator(bool isPredator)
{
    this->isPredator = isPredator;
}

bool Bird::getPredator() const
{
    return isPredator;
}

void Bird::showInfo() const
{
    Animal::showInfo();
    cout << "Predator: " << (isPredator ? "Yes" : "No") << endl;
}
