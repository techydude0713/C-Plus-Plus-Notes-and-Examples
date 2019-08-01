//
//  location.cpp
//  Forward
//
//  Created by John Papetti III on 8/1/19.
//  Copyright © 2019 John Papetti III. All rights reserved.
//
#include <iostream>
#include <string>

#include "location.h"
using namespace::std;

void createSpace(){
    const int WIDTH = 20;
    const int HEIGHT = 20;
    
    string Table [HEIGHT][WIDTH];
    int n,m;
    
        for (n=0; n<HEIGHT; n++)
            for (m=0; m<WIDTH; m++)
            {
                Table[n][m]=(n+1)*(m+1);
            }
    std::cout<< Table[1][1] <<"t";
    Table[1][1] = "NOPE";
    std::cout<< Table[01][01];
}
