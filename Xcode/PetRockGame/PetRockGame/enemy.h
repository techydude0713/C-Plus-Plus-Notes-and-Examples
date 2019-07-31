//
//  enemy.hpp
//  PetRockGame
//
//  Created by John Papetti III on 7/30/19.
//  Copyright © 2019 John Papetti III. All rights reserved.
//
#pragma once
#include "character.h"

using namespace std;

class enemy : public character{
public:
    enemy(string enteredName,string enteredDescription) : character(enteredName, enteredDescription){};
    void fight(character *other);
    bool isAlive();
    void setStats(int level);
};
