// ConsoleApplication2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
using namespace std;

int main() {
	int choice;
	cout << "Enter in your choice!" << endl;
	cin >> choice;

	switch (choice) {
	case 1:
		cout << "That's a good choice." << endl;
		break;
	case 2:
		cout << "That's a bad choice." << endl;
		break;
	case 6:
		cout << "That's a choice a kitty cat would make." << endl;
		break;
	default:
		cout << "Choosing not to decide, you still have made a choice." << endl;
		break;
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
