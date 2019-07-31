//
//  player.cpp
//  PetRockGame
//
//  Created by John Papetti III on 7/30/19.
//  Copyright © 2019 John Papetti III. All rights reserved.
//

#include "player.h"

using namespace std;

void player::fight(character *other)
{
    int option = 0;
    cout << "1. Fight" << endl;
    cout << ">";
    cin >> option;
    if (option == 1)
    {
        other->currentHealth -= damage;
        cout << name << " hit " << other->name << " for " << damage << " damage." << endl;
        cout << other->name << " is at " << other->currentHealth << "/" << other->totalHealth << " health." << endl;
    }
}

void player::setStats(int level)
{
    int baseStat = 2 * level;
    int x = rand() % baseStat + 1;
    
    damage = x;
    currentHealth = totalHealth = x * 3;
}

bool player::isAlive()
{
    if (currentHealth > 0)
        return true;
    else
        return false;
}
