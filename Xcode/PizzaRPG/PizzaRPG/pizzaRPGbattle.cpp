// pizzaRPGbattle.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
#include <string>
#include <random>
#include <chrono>
#include <thread>
#include <array>
#include <time.h>

#include "ending.h"
#include "textprint.h"

using namespace std;
/*
void slowSpeak(string str,int mode);
void sleep(int millisec);
 */
void fight();
void badEnding();
void fight(){
    string playerName = "player";
    int playerHP = 20;
    int playerMaxHP = 20;
    int playerMP = 10;
    int playerMaxMP = 10;
    int playerPow = 5;
    int playerDef = 6;
    string enemyName = "enemy";
    int enemyHP = 25;
    int enemyMaxHP = 25;
    int enemyPow = 3;
    int enemyDef = 5;
    int playerDamage = (enemyPow - ((playerDef / 17) / 0.5));
    int enemyDamage = (playerPow - ((enemyDef / 17) / 0.5));
    //array<string, 8> inventory = { "-","-", "-", "-", "-", "-", "-", "-" }; // What is this
    // damage dealt
    cout << "Enemy has " << enemyHP << "." << endl;
    cout << "player attacked\n";
    enemyDamage = (playerPow - ((enemyDef / 17) / 0.5));
    enemyHP = enemyHP - enemyDamage;
    cout << "Enemy took " << enemyDamage << ".\n";
    cout << "Enemy now has " << enemyHP << ".\n";
    
    cout << "Player has " << enemyHP << "." << endl;
    cout << "enemy attacked\n";
    playerDamage = (enemyPow - ((playerDef / 17) / 0.5));
    playerHP = playerHP - playerDamage;
    cout << "Player took " << playerDamage << ".\n";
    cout << "Player now has " << playerHP << ".\n";
}
int main()
{
    slowSpeak("You are trapped in a dimly lit cave with only one weapon in your hand.\n",1);
    sleep(1500);
    int choice;
    int ready = 1;
    while (ready){
        choice = 0;
        slowSpeak("What is the weapon you hold?\n",1);
        sleep(500);
        cout << "### [1] Pizza Cutter\n";
        sleep(500);
        cout << "### [2] Pizza Box\n";
        sleep(500);
        cout << "### [3] Pizza Sauce Ladle\n> ";
        cin >> choice;
        if (choice == 1 ||choice == 2||choice == 3){
            slowSpeak("That's right, ", 1);
            sleep(500);
            if (choice == 1){
                slowSpeak("you are a chef from the local pizzeria.\n",1);
                sleep(2000);
            }
            else if (choice == 2){
                slowSpeak("you are a delivery man from the local pizzeria.\n",1);
                sleep(2000);
            }
            else if (choice == 3){
                slowSpeak("you are the Pizza Wizard Mascot from the local pizzeria.\n",1);
                sleep(2000);
            }
            slowSpeak("You look around to see that there is nothing, but rocks and stone around your path.\n",1);
            sleep(1000);
            slowSpeak("The only way to go is forward.\n",1);
            sleep(1000);
            slowSpeak("Desperate to escape (and get back to work), you begin your journey by walking forward.",1);
            ready= 0;
        }
        else{
            cout << "You are sure you only had one of the three weapons...\n";
        }
    };
	
    
    
    
    
    deathEnding();
}

