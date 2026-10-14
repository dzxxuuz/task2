#include "Creature.h"

Creature::Creature()
{
	name = "unknown";
}

Creature::Creature(string name) {
	this->name = name;
}

void Creature::setName(string name)
{
	this->name = name;
}

string Creature::getName() const
{
	return name;
}

void Creature::showInfo() const
{
	cout << "Name: " << name;
}
