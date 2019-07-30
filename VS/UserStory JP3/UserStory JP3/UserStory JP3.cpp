// UserStory JP3.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
#include <string>
using namespace std;

int main()
{
	string company1;
	string company2;
	string game;
	string place;
	string consoleA;
	string year;
	string consoleB;
	cout << "Make a company: ";
	cin >> company1;
	cout << "Make another company: ";
	cin >> company2;
	cout << "Make a gametitle: ";
	cin >> game;
	cout << "Specify a country: ";
	cin >> place;
	cout << "Make a console name: ";
	cin >> consoleA;
	cout << "Make another console name: ";
	cin >> consoleB;
	cout << "Give a random year: ";
	cin >> year;

	cout << "---The Legend of "<<game<<": The video Game---\n";
    cout << "In " << year << ", " << company1 << ", the lengandary video game company released " << game << " for the " << consoleA << " \n";
	cout << "Since it was based off the movie, the game was sure to be a hit.\n";
	cout << "However, it failed terribly for " << company1 << ", and the video game crash began.\n";
	cout << "Many people who had copies of " << company1 << " games threw it all away, causing it to pile in a landfill.\n";
	cout << "However, when the crash ended, " << company2 << " exported the " << consoleB << " to the " << place << ", where video games became popular again.\n";
	cout << "After that, " << company1 << " fell behind everybody else.\n";
	cout << "---THE END---\n";
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
