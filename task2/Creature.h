#pragma once
#include <string>
#include <iostream>
using namespace std;
class Creature
{
	string name;
public:
	Creature();
	Creature(string name);

	void setName(string name);
	string getName()const;

	void showInfo()const;
};

