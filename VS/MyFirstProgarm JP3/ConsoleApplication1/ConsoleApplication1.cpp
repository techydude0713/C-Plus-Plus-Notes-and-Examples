// ConsoleApplication1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
#include <random>
#include "time.h"
#include <chrono>
#include <string>
#include <stdio.h>
#include <stdlib.h> 



using namespace std;

int BossDamage()

{
	srand(time(NULL));
	int boss = rand() % 15 + 10;
	int crit = rand() % 10 +1;
	if (crit == 10) {
		cout << "BOSS GOT A CRITICAL HIT!\n";
		boss = boss * 3;

	}
	cout << "Boss damaged you by " << boss << endl;
	return boss;
	

}

int main()
{
	
	int choice = 1;
	int enemyHealth = 7000;
	int myHealth = 600;
	int bossnotded = 1;
	int damage = 5;
	int turn = 0;
    cout << "You are now in battle!\n";
	while (enemyHealth > 0 && myHealth > 0 ) {
		srand(time(NULL));
		int player = rand() % 15 + 10;
		cout << "\n\n\nHow would you like to proceed?\n";
		cout << "1: Attack\n";
		cout << "2: Defend (Skip turn)\n";
		cout << "3 Item\n";
		cin >> choice;
		cout << "\n";
		if (choice == 1) {
			cout << "HIT!!! Damage given:" << player << endl;
			enemyHealth = enemyHealth - damage;
			int mod;
			mod = BossDamage();
			myHealth -= mod;
			turn--;
		}
		else if (choice == 2) {
			int recover = rand() % 10 + 1;
			int mod;
			mod = BossDamage();
			myHealth -= mod;
			myHealth += recover;
			turn--;
			
		}
		else if (choice == 3) {
			if (turn > 0){
				cout << "HitBooster cooldown in effect!  \n" << turn << " turns remaining!\n";
				continue;
			}
			cout << ("Using HitBooster... \n");
			for (int a = 4; a > 0; a--) 
			{
				
				enemyHealth = enemyHealth - player;
			}
			cout << "HIT!!! Damage given:" << player*4 << endl;
			int mod;
			mod = BossDamage();
			myHealth -= mod;
			turn = 10;
		}
		else{
			cout << "Invalid Choice\n";
		}
	}
	if (enemyHealth <= 0) {
		cout << "Congrats! You beat the boss!";
	}
	if (myHealth <= 0) {
		cout << "Congrats! The boss killed you!";
	}

	return 0;
}


// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
