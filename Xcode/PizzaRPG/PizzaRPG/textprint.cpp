//
//  textprint.cpp
//  PizzaRPG
//
//  Created by John Papetti III on 7/31/19.
//  Copyright © 2019 John Papetti III. All rights reserved.
//


#include <iostream>

#include <string>

#include <chrono>

#include <thread>



#include <time.h>

#include "textprint.h"
#include "pch.h"
using namespace std;

//void slowSpeak( string str,int mode);
//void sleep (int millisec);

void slowSpeak(string str,int mode){
    int milli;
    int counter = str.length();
    if (mode==1){
        milli = 50;
    }
    else if (mode==2){
        milli = 300;
    }
    else if (mode==3){
        milli = 100;
    }
    
    for (int i = 0; i < counter; i++) {
        cout<<str[i]<< flush;
        std::this_thread::sleep_for(std::chrono::milliseconds(milli));
    }
    
};

void sleep(int millisec){
    std::this_thread::sleep_for(std::chrono::milliseconds(millisec));
};
