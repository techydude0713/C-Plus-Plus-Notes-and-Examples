#pragma once
#include "character.h"

using namespace std;


class skele : public character {
public:
    static int lSTR;
    static int hDEF;
    static int lATK;
    static int hATK;
    //int damage = str / other->def;
    //int def = 5;
    //int magdam = mag / other->def;
    static int totalHealth;
    static int currentHealth;
    static int lDEF;

/*
	int option = 0;
	int str = 20;
    int def = 5;
	int damageRatio =  str / def;
	int totalHealth = 200;
	int currentHealth = 200;
	

	skele(string enteredName, string enteredDescription) : character(enteredName, enteredDescription) {};
	//void fight(character *other);
	//bool isAlive();
	//void setStats(int level);
 */
};

