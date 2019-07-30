// RPG fighting tournament.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "main.h"


using namespace std;


void setupPlayerStats(string &name, int &str, int &def, int &armor, int &skill, int &wins);
void savePlayerStats(string name, int str, int def, int armor, int skill, int wins);

int main() {
	random_device rd;
	uniform_int_distribution<int> d6(1, 6);


	string player1Name;
	int player1Str;
	int player1Def;
	int player1Armor;
	int player1Skill;
	int player1Wins;

	string player2Name;
	int player2Str;
	int player2Def;
	int player2Armor;
	int player2Skill;
	int player2Wins;

	cout << "Setup Player 1" << endl;
	setupPlayerStats(player1Name, player1Str, player1Def, player1Armor, player1Skill, player1Wins);

	cout << "Setup Player 2" << endl;
    cout << player2Name;
	setupPlayerStats(player2Name, player2Str, player2Def, player2Armor, player2Skill, player2Wins);

	int player1Health = 20;
	int player2Health = 20;
	int turns = 0;
    cout << "\n\n\n";
	cout << player1Name << " - " << player1Wins << " Wins" << endl;
	cout << "- vs. -" << endl;
	cout << player2Name << " - " << player2Wins << " Wins" << endl;
    cout << "~~~~~~~~~~\n";
    cout << "{ FIGHT! }\n";
    cout << "~~~~~~~~~~\n";
    
	while (player1Health > 0 && player2Health > 0 && turns < 100) {
		int attackRoll;
		int damageRoll;
		attackRoll = player1Skill + d6(rd);
		if (attackRoll >= 3 + player2Def){
			cout << player1Name << " hits " << player2Name << "." << endl;
			damageRoll = player1Str + d6(rd) - player2Armor;
			if (damageRoll > 0) {
				player2Health -= damageRoll;
				cout << player2Name << " takes " << damageRoll << " damage." << endl;
				}
			else {
				cout << player2Name << "'s armor blocks the hit." << endl;

			}
		}
		else {
			cout << player1Name << " missed." << endl;
		}
		attackRoll = player2Skill + d6(rd);
		if (attackRoll >= 3 + player1Def) {
			cout << player2Name << " hits " << player1Name << "." << endl;
			damageRoll = player2Str + d6(rd) - player1Armor;
			if (damageRoll > 0) {
				player1Health -= damageRoll;
				cout << player1Name << " takes " << damageRoll << " damage." << endl;
			}
			else {
				cout << player1Name << "'s armor blocks the hit." << endl;

			}
		}
		else {
			cout << player2Name << " missed." << endl;
		}
		cout << player1Name << " HP: " << player1Health << endl;
		cout << player2Name << " HP: " << player2Health << endl;
		turns++;
	}
    if ((player1Health > 0 && player2Health > 0) || (player1Health < 0 && player2Health < 0)) {
        cout << "Draw!" << endl;
    }
    else if (player1Health > 0) {
        cout << player1Name << " wins!" << endl;
        player1Wins++;
    }
    else {
        cout << player2Name << " wins!" << endl;
        player2Wins++;
    }
    
    // Save records to a file:
    savePlayerStats(player1Name, player1Str, player1Def, player1Armor, player1Skill, player1Wins);
    savePlayerStats(player2Name, player2Str, player2Def, player2Armor, player2Skill, player2Wins);
}

void setupPlayerStats(string &name, int &str, int &def, int &armor, int &skill, int &wins) {

    fstream file;
    cout << "Name: ";
//getline(cin, name);

	// If they enter no name, use a default
    while (name == ""){
        getline(cin, name);
        if (name == ""){
            cout << "Please enter a name.\n";
            cout << "Name: ";
        }
    }
	string filename = name + ".txt";
    
	file.open(filename, ios::in); 
	if (file.is_open()) {
		cout << "Retrived file...";
		file >> str;
		file >> def;
		file >> armor;
		file >> skill;
		file >> wins;
	}
	else {
		bool accepted = false;
		while (!accepted) {
			cout << "\nCreate your fighter!\n";
			int points = 20;
			wins = 0;
			
			cout << "Player Str: ";
			cin >> str;
			points -= str;

			cout << points << " points left.\n";
			cout << "Player Def: ";
			cin >> def;
			points -= def;

			cout << points << " points left.\n";
			cout << "Player Armor: ";
			cin >> armor;
			points -= armor;

			cout << points << " points left.\n";
			cout << "Player Skill: ";
			cin >> skill;
			points -= skill;
			
			if (points >= 0) {
				accepted = true;
			}
			else {
				cout << "You tried to use too many points. Try again.";
			}

		}

	}
}

void savePlayerStats(string name, int str, int def, int armor, int skill, int wins) {

	// TODO: Save the player's stats to a file.
	fstream file;
	string filename = name + ".txt";

	file.open(filename, ios::out);

	file << str << endl;
	file << def << endl;
	file << armor << endl;
	file << skill << endl;
	file << wins << endl;

	file.close();
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
