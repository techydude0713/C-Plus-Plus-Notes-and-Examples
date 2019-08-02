#pragma once
#include "character.h"

using namespace std;


class chef : public character {
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
    chef(string enteredName, string enteredDescription) : character(enteredName, enteredDescription) {};
    
};



/*
class player : public character {
public:

int option = 0;
int str = 5;
int mag = 20;
int mp = 20;
//int damage = str / other->def;
//int def = 5;
//int magdam = mag / other->def;
int totalHealth = 7;
int currentHealth = 7;
int def = 10;
player(string enteredName, string enteredDescription) : character(enteredName, enteredDescription) {};
void wizfight(character *other);
bool wizisAlive();
void wizsetStats(int level);
	
};
*/
