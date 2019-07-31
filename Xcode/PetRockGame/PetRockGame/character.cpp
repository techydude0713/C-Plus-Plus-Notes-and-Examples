//
//  character.cpp
//  PetRockGame
//
//  Created by John Papetti III on 7/30/19.
//  Copyright © 2019 John Papetti III. All rights reserved.
//

#include <stdio.h>
#include "character.h"

using namespace std;

character::character() : character::character("Default Name", "Default Description") {};

character::character(string enteredName, string enteredDescription)
{
    name = enteredName;
    description = enteredDescription;
}

void character::describe(){
    cout<<name<<""<<description<<endl;
}
