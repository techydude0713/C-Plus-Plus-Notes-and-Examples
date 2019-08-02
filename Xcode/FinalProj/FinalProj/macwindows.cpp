//
//  windows.cpp
//  FinalProj
//
//  Created by John Papetti III on 8/1/19.
//  Copyright © 2019 John Papetti III. All rights reserved.
//

#include "macwindows.h"
#include <iostream>
#include <string>
#include <random>
#include <chrono>
#include <thread>
#include <array>
#include <time.h>
using namespace std;

void Sleep(int millisec){
    std::this_thread::sleep_for(std::chrono::milliseconds(millisec));
};
void Beep(int hz,int milli){
    std::cout<<"\a";
};
