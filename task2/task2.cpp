#include <iostream>
#include "Hoofed.h"
#include "Bird.h"

int main()
{
	Hoofed bull("bull", "Bovidae", "mammal", 200, "At home, I have no clue, seriously");
	bull.showInfo();
	cout << "\n========================" << endl;
	Bird hawk("Hawk", "Accipitridae", "Bird", 5, "In mountains");
	hawk.showInfo();
	cout << "\n========================" << endl;
	Animal cat("Cat", "sphinx", "mammal", 4);
	cat.showInfo();
	cout << "\n========================" << endl;
	Creature example("Example creature");
	example.showInfo();
}

