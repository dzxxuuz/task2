#include "Animal.h"

Animal::Animal(string name, string species, string genus, float weight)
{
	setName(name);
	this->species = species;
	this->genus = genus;
	this->weight = weight;
}

void Animal::setSpecies(string species)
{
	this->species = species;
}

string Animal::getSpecies() const
{
	return species;
}

void Animal::setGenus(string genus)
{
	this->genus = genus;
}

string Animal::getGenus() const
{
	return genus;
}

void Animal::setWeight(float weight)
{
	this->weight = weight;
}

float Animal::getWeight() const
{
	return weight;
}

void Animal::showInfo() const
{
	Creature::showInfo();
	cout << endl;
	cout << "Species: " << species << endl << "Genus: " << genus << endl << "Weight: " << weight << endl;
}
