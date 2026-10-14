#include "Creature.h"

void Creature::setName(string name)
{
	this->name = name;
}

string Creature::getName()
{
	return name;
}

void Creature::showInfo() const
{
	cout << "Name: " << name;
}
