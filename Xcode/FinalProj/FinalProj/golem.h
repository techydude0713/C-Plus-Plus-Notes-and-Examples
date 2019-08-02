#pragma once
#include "character.h"
#include "player.h"
#include <random>


using namespace std;


class golem : public character {
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

		int str = 30;
		
		int def = 15;
		int damageRatio = str / def;
		//int def = 10;
		int totalHealth = 300;
		int currentHealth = 300;
		
		golem(string enteredName, string enteredDescription) : character(enteredName, enteredDescription) {};
		void golemfight(character *other);
		bool golemisAlive();
		void golemsetStats(int level);
	*/
};
