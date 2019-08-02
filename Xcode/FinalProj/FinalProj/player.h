#pragma once
#include "character.h"
//#include "pizzaRPGbattle.cpp"

using namespace std;


class player : public character {
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
int totalHealth = 10;
int currentHealth = 10;
//int def = 15;
player(string enteredName, string enteredDescription) : character(enteredName, enteredDescription) {};
void fight(character *other);
//int damage = str / other->def;
//bool isAlive();
//void setStats(int level);
 */
};


