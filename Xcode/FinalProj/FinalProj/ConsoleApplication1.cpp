// Collab RPG Game: Story <JOHN P.>

#include "pch.h"
#include <iostream>
#include "location.h"
#include "textprint.h"
#include "ending.h"
#include "fightstatus.h"

#ifdef __APPLE__
#include "macwindows.h"
#elif defined _WIN32 || defined _WIN64
#include <windows.h>
#endif


string classerman::typeofclass;

int x = 9;
int y = 6;
string returnhelper::returner;
int main()
{
    FightInitalization();
	createSpace();
	int gameend = 1;
	slowSpeak("\nYou are trapped in a dimly lit cave with only one weapon in your hand.\n", 1);
	sleep(1500);
	int choice;
	int ready = 1;
	while (ready) 
	{
		choice = 0;
		slowSpeak("What is the weapon you hold?\n", 1);
		sleep(500);
		cout << "### [1] Pizza Cutter\n";
		Beep(350, 500);
		sleep(500);
		cout << "### [2] Pizza Box\n";
		Beep(400, 500);
		sleep(500);
		cout << "### [3] Pizza Sauce Ladle\n> ";
		Beep(450, 500);
		
		cin >> choice;
		Beep(66, 3000);
		if (choice == 1 || choice == 2 || choice == 3) 
		{
			slowSpeak("That's right, ", 1);
			sleep(500);
			if (choice == 1) 
			{
                classerman::typeofclass = "CHEF";
				slowSpeak("you are a chef from the local pizzeria.\n", 1);
				sleep(2000);
			}
			else if (choice == 2) 
			{
                classerman::typeofclass = "DELMAN";
				slowSpeak("you are a delivery man from the local pizzeria.\n", 1);
				sleep(2000);
			}
			else if (choice == 3) 
			{
                classerman::typeofclass = "WIZ";
				slowSpeak("you are the Pizza Wizard Mascot from the local pizzeria.\n", 1);
				sleep(2000);
			}
			slowSpeak("You look around to see that there is nothing, but rocks and stone around your path.\n", 1);
			sleep(1000);
			slowSpeak("The only way to go is forward.\n", 1);
			sleep(1000);
			slowSpeak("Desperate to escape (and get back to work), you begin your journey by walking forward.\n", 1);
			sleep(1000);
			ready = 0;
		}
		else
		{
			cout << "You are sure you only had one of the three weapons...\n";
		}
	};
	while (gameend != 0)
	{
		int choice = 0;
		location(x, y);
        if (returnhelper::returner.find('c') != string::npos) {
			Beep(466, 200);
			Beep(523, 200);
			Beep(554, 200);
			Beep(622, 200);
			Beep(698, 1000);
			cout << "\nENEMY LOOP SHOULD START!n";
            startFight(1);
		}
		if (returnhelper::returner.find('g') != string::npos) {
			Beep(466, 200);
			Beep(523, 200);
			Beep(554, 200);
			Beep(622, 200);
			Beep(698, 1000);
			cout << "\nENEMY LOOP (GOLEM) SHOULD START!n";
		}
		if (returnhelper::returner.find('b') != string::npos) {
			Beep(466, 200);
			Beep(523, 200);
			Beep(554, 200);
			Beep(622, 200);
			Beep(698, 1000);
			cout << "\nENEMY LOOP (BOSS) SHOULD START!n";
		}
		if (returnhelper::returner.find('r') != string::npos) {
			Beep(466, 200);
			Beep(523, 200);
			Beep(554, 200);
			Beep(622, 200);
			Beep(698, 1000);
			cout << "\nENEMY LOOP (RIVAL) SHOULD START!n";
		}
		if (returnhelper::returner.find('b') != string::npos) {
			Beep(466, 200);
			Beep(523, 200);
			Beep(554, 200);
			Beep(622, 200);
			Beep(698, 1000);
			cout << "\nENEMY LOOP (BOSS) SHOULD START!n";
		}
		if (returnhelper::returner.find('x') != string::npos) {
			Beep(392, 100);
			sleep(200);
			Beep(392, 200);
			Beep(523, 1000);
			badEnding();
		}
		if (returnhelper::returner.find('f') != string::npos) {
			Beep(523, 100);
			Beep(493, 100);
			Beep(466, 100);
			Beep(440, 100);
			Beep(415, 100);
			Beep(392, 100);
			Beep(369, 100);
			Beep(349, 1000);
			if (returnhelper::returner.find(":0804") != string::npos) {
				slowSpeak("It seems that you have fallen!\n", 1);
				x = 8;
				y = 4;
				sleep(1000);
				continue;
			}
			if (returnhelper::returner.find(":0802") != string::npos) {
				slowSpeak("It seems that you have fallen!\n", 1);
				x = 8;
				y = 2;
				sleep(1000);
				continue;
			}
			if (returnhelper::returner.find(":0808") != string::npos) {
				slowSpeak("It seems that you have fallen!\n", 1);
				x = 8;
				y = 8;
				sleep(1000);
				continue;
			}
			if (returnhelper::returner.find(":0204") != string::npos) {
				slowSpeak("It seems that you have fallen!\n", 1);
				x = 2;
				y = 4;
				sleep(1000);
				continue;
			}
			if (returnhelper::returner.find(":0906") != string::npos) {
				slowSpeak("It seems that you have fallen!\n", 1);
				x = 9;
				y = 6;
				sleep(1000);
				continue;

			}
			
		}
		if (returnhelper::returner.find('n') != string::npos) {
			slowSpeak("It seems that you have fallen!\n", 1);
			Beep(523, 100);
			Beep(493, 100);
			Beep(466, 100);
			Beep(440, 100);
			Beep(415, 100);
			Beep(392, 100);
			Beep(369, 100);
			Beep(349, 1000);
			x = 9;
			y = 6;
			sleep(1000);
			continue;
		}
		sleep(1000);
		choice = 0;
		slowSpeak("Which way do you go?\n", 1);
		sleep(500);
		if (returnhelper::returner.find('i') != string::npos){
			cout << "### [1] Forward\n";
			sleep(500);
		}
		if (returnhelper::returner.find('k') != string::npos) {
			cout << "### [2] Backward\n";
			sleep(500);
		}
		if (returnhelper::returner.find('j') != string::npos) {
			cout << "### [3] Left\n";
			sleep(500);
		}
		if (returnhelper::returner.find('l') != string::npos) {
			cout << "### [4] Right\n";
		}
		cout << ">";
		cin >> choice;
		if (choice == 1 && returnhelper::returner.find('i') != string::npos) {
			x--;
		}
		else if (choice == 2 && returnhelper::returner.find('k') != string::npos) {
			x++;
		}
		else  if (choice == 3 && returnhelper::returner.find('j') != string::npos) {
			y--;
		}
		else if (choice == 4 && returnhelper::returner.find('l') != string::npos) {
			y++;
		}
		else {
			cout << "NOTE\n";
		}
	}

	//deathEnding();
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
