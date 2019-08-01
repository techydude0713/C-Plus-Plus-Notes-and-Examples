#pragma once
#include "character.h"

using namespace std;


class player : public character {
public:
	int option = 0;
	int str = 20;
	int damage = 2 * str;
	//int def = 5
	int total_Health = 10;
	int current_Health = 10;
	int def = 15;
	player(string enteredName, string enteredDescription) : character(enteredName, enteredDescription) {};
	void fight(character *other);
	bool isAlive();
	void setStats(int level);
};


