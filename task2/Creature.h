#pragma once
#include <string>
#include <iostream>
using namespace std;
class Creature
{
	string name;
public:
	Creature(string name);

	void setName(string name);
	string getName();

	void showInfo()const;
};

