//
//  ending.cpp
//  PizzaRPG
//
//  Created by John Papetti III on 7/31/19.
//  Copyright © 2019 John Papetti III. All rights reserved.
//
/*
#include "pch.h"
#include <iostream>
#include <string>
#include <random>
#include <chrono>
#include <thread>
#include <array>
#include <time.h>
*/

#ifdef __APPLE__
#include "macwindows.h"
#elif defined _WIN32 || defined _WIN64
#include <windows.h>
#endif
#include "ending.h"
//#include "textprint.h"
#include "textprint.h"
using namespace std;

void badEnding()
{
	slowSpeak("You are taking the first step for your freedom!\n", 1);
    Sleep(2000);
    slowSpeak("Actually, ",3);
	Beep(523, 1000);
	Beep(415, 1000);
	Beep(349, 1000);
    Sleep(1000);
    slowSpeak("you haven't taken any steps at all. \n",1);
    Sleep(1000);
    slowSpeak("Rather, you fell off a cliff, and your bones snapped louder than a stale breadstick.\n",1);
    Sleep(1000);
    slowSpeak("Worse, the pizza delivery was a failure, and you lost your job (even though you're dead).\n",1);
    Sleep(2000);
    slowSpeak("(Hey, that's life ",1);
    Sleep(1000);
    slowSpeak("(and death))",1);
    Sleep(2000);
    string go1 ="_______________________________________\n";
    string go2 ="| ######      ###    ##     ## ######## |\n";
    string go3 ="|##    ##    ## ##   ###   ### ##       |\n";
    string go4 ="|##         ##   ##  #### #### ##       |\n";
    string go5 ="|##   #### ##     ## ## ### ## ######   |\n";
    string go6 ="|##    ##  ######### ##     ## ##       |\n";
    string go7 ="|##    ##  ##     ## ##     ## ##       |\n";
    string go8 ="| ######   ##     ## ##     ## ######## |\n";
    string go9 ="|                                       |\n";
    string go10 ="| #######  ##     ## ######## ########  |\n";
    string go11 ="|##     ## ##     ## ##       ##     ## |\n";
    string go12 ="|##     ## ##     ## ##       ##     ## |\n";
    string go13 ="|##     ## ##     ## ######   ########  |\n";
    string go14 ="|##     ##  ##   ##  ##       ##   ##   |\n";
    string go15 ="|##     ##   ## ##   ##       ##    ##  |\n";
    string go16 ="| #######     ###    ######## ##     ## |\n";
    string go17 ="|_______________________________________|\n";
    for (int x=10; x>0; x--) {
        cout<<"\n";
        Sleep(250);
    }
    
    cout<<go1;
    Sleep(250);
    cout<<go2;
    Sleep(250);
    cout<<go3;
    Sleep(250);
    cout<<go4;
    Sleep(250);
    cout<<go5;
    Sleep(250);
    cout<<go6;
    Sleep(250);
    cout<<go7;
    Sleep(250);
    cout<<go8;
    Sleep(250);
    cout<<go9;
    Sleep(250);
    cout<<go10;
    Sleep(250);
    cout<<go11;
    Sleep(250);
    cout<<go12;
    Sleep(250);
    cout<<go13;
    Sleep(250);
    cout<<go14;
    Sleep(250);
    cout<<go15;
    Sleep(250);
    cout<<go16;
    Sleep(250);
    cout<<go17;
	Beep(587, 600);
	Beep(466, 600);
	Beep(392, 600);
	Beep(523, 600);
	Beep(440, 600);
	Beep(349, 600);
	Beep(392, 2000);
	Sleep(4000);
    slowSpeak("\n\nRestart to try again!\n",1);
    exit(EXIT_SUCCESS);
}

void deathEnding(){
    slowSpeak("During the battle, you suddenly notice that your vision becomes very blurry.\n",1);
    Sleep(2000);
    slowSpeak("Stunned, you fall backwards into a strange endless pit, which wasn't there before.\n",1);
    Sleep(2000);
    slowSpeak("Suddenly, the hole closes resulting in total darkness.\n",1);
    Sleep(2000);
    slowSpeak("You think to yourself:\n",1);
    Sleep(1000);
    slowSpeak("\"What is this place?\"\n",1);
    Sleep(1000);
    slowSpeak("\"Why am I here?\"\n",1);
    Sleep(2000);
    slowSpeak("Even though you were very curious, you were unable to truly know.\n",1);
    Sleep(3000);
    slowSpeak("Why?\n",1);
    Sleep(4000);
    string go1 ="_______________________________________\n";
    string go2 ="|    ##    ##  #######  ##     ##      |\n";
    string go3 ="|     ##  ##  ##     ## ##     ##      |\n";
    string go4 ="|      ####   ##     ## ##     ##      |\n";
    string go5 ="|       ##    ##     ## ##     ##      |\n";
    string go6 ="|       ##    ##     ## ##     ##      |\n";
    string go7 ="|       ##    ##     ## ##     ##      |\n";
    string go8 ="|       ##     #######   #######       |\n";
    string go9 ="|                                      |\n";
    string go10 ="|   ########  #### ######## ########   |\n";
    string go11 ="|   ##     ##  ##  ##       ##     ##  |\n";
    string go12 ="|   ##     ##  ##  ##       ##     ##  |\n";
    string go13 ="|   ##     ##  ##  ######   ##     ##  |\n";
    string go14 ="|   ##     ##  ##  ##       ##     ##  |\n";
    string go15 ="|   ##     ##  ##  ##       ##     ##  |\n";
    string go16 ="|   ########  #### ######## ########   |\n";
    string go17 ="|______________________________________|\n";
    
    
    
    for (int x=10; x>0; x--) {
        cout<<"\n";
        Sleep(250);
    }
    
    cout<<go1;
    Sleep(250);
    cout<<go2;
    Sleep(250);
    cout<<go3;
    Sleep(250);
    cout<<go4;
    Sleep(250);
    cout<<go5;
    Sleep(250);
    cout<<go6;
    Sleep(250);
    cout<<go7;
    Sleep(250);
    cout<<go8;
    Sleep(250);
    cout<<go9;
    Sleep(250);
    cout<<go10;
    Sleep(250);
    cout<<go11;
    Sleep(250);
    cout<<go12;
    Sleep(250);
    cout<<go13;
    Sleep(250);
    cout<<go14;
    Sleep(250);
    cout<<go15;
    Sleep(250);
    cout<<go16;
    Sleep(250);
    cout<<go17;
	Beep(587, 600);
	Beep(466, 600);
	Beep(392, 600);
	Beep(523, 600);
	Beep(440, 600);
	Beep(349, 600);
	Beep(392, 2000);
	Sleep(4000);
    slowSpeak("\n\nRestart to try again!\n",1);
    exit(EXIT_SUCCESS);
}

