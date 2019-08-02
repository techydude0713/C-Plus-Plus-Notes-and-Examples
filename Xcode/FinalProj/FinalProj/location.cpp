//
//  location.cpp
//  Forward
//
//  Created by John Papetti III on 8/1/19.
//  Copyright © 2019 John Papetti III. All rights reserved.
//

#include "location.h"
#include <iostream>
#include <string>

using namespace std;
//string returner;
const int WIDTH = 13;
const int HEIGHT = 11;
string Table[HEIGHT][WIDTH];
void createSpace()
{
    //const int WIDTH = 13;
    //const int HEIGHT = 11;
	//string Table[HEIGHT][WIDTH];

	string FAKE = "x";
	string EN = "c";
	string FALLE11 = "f:0804";
	string FALLC11 = "f:0802";
	string FALLH11 = "f:0808";
	string FALLE5 = "f:0204";
	string FALLST = "f:0906";
	string NONE = "n";
	string GOL = "g";
	string BOSS = "b";
	string RIVAL = "r";
	string EXIT = "e";
	string START = "s";
	string ENEMY = "c";
	//Directions
	string NORTH = "i";
	string WEST = "j";
	string SOUTH = "k";
	string EAST = "l";
   
	//ROW 1
	int row = 0;
	Table[row][0] = FAKE;
	Table[row][1] = ENEMY+WEST+EAST;
	Table[row][2] = SOUTH+WEST;
	Table[row][3] = NONE;
	Table[row][4] = FAKE;
	Table[row][5] = NONE;
	Table[row][6] = FAKE;
	Table[row][7] = BOSS+SOUTH+EAST+WEST;
	Table[row][8] = WEST+EAST;
	Table[row][9] = WEST+SOUTH+ENEMY;
	Table[row][10] = NONE;
	Table[row][11] = SOUTH;
	Table[row][12] = NONE;
	
	row++;
	//ROW 2
	Table[row][0] = NONE;
	Table[row][1] = NONE;
	Table[row][2] = GOL+NORTH+SOUTH+EAST;
	Table[row][3] = WEST+SOUTH+EAST;
	Table[row][4] = NORTH+WEST+SOUTH;
	Table[row][5] = NONE;
	Table[row][6] = NONE;
	Table[row][7] = NORTH+EAST;
	Table[row][8] = ENEMY+WEST+EAST;
	Table[row][9] = NORTH+WEST+EAST;
	Table[row][10] = WEST+EAST;
	Table[row][11] = NORTH+WEST+SOUTH;
	Table[row][12] = NONE;
	
	row++;
	//ROW 3
	Table[row][0] = NONE;
	Table[row][1] = NONE;
	Table[row][2] = NORTH+SOUTH+EAST;
	Table[row][3] = GOL+NORTH+WEST+SOUTH+EAST;
	Table[row][4] = NORTH+WEST+SOUTH;
	Table[row][5] = NONE;
	Table[row][6] = NONE;
	Table[row][7] = NONE;
	Table[row][8] = NONE;
	Table[row][9] = NONE;
	Table[row][10] = NONE;
	Table[row][11] = ENEMY+NORTH+SOUTH;
	Table[row][12] = NONE;

	row++;
	//ROW 4
	Table[row][0] = SOUTH+EAST;
	Table[row][1] = WEST+EAST;
	Table[row][2] = NORTH+SOUTH+EAST+WEST;
	Table[row][3] = NORTH+WEST+EAST;
	Table[row][4] = GOL+NORTH+WEST+EAST;
	Table[row][5] = SOUTH+EAST+WEST;
	Table[row][6] = ENEMY+SOUTH+WEST;
	Table[row][7] = NONE;
	Table[row][8] = FALLH11;
	Table[row][9] = NONE;
	Table[row][10] = NONE;
	Table[row][11] = NORTH+SOUTH+EAST;
	Table[row][12] = FALLE5;
	
	row++;
	//ROW 5
	Table[row][0] = ENEMY+NORTH+SOUTH;
	Table[row][1] = NONE;
	Table[row][2] = FALLC11;
	Table[row][3] = NONE;
	Table[row][4] = NONE;
	Table[row][5] = NORTH+SOUTH+EAST;
	Table[row][6] = NORTH+SOUTH+WEST;
	Table[row][7] = NONE;
	Table[row][8] = GOL+NORTH+SOUTH;
	Table[row][9] = NONE;
	Table[row][10] = NONE;
	Table[row][11] = NORTH+SOUTH;
	Table[row][12] = NONE;

	row++;
	//ROW 6
	Table[row][0] = ENEMY+NORTH+SOUTH;
	Table[row][1] = NONE;
	Table[row][2] = NONE;
	Table[row][3] = NONE;
	Table[row][4] = NONE;
	Table[row][5] = FALLE11;
	Table[row][6] = GOL+NORTH+EAST+WEST;
	Table[row][7] = WEST+EAST;
	Table[row][8] = NORTH+WEST+EAST;
	Table[row][9] = WEST+EAST;
	Table[row][10] = WEST + EAST;
	Table[row][11] = RIVAL+NORTH+WEST+SOUTH;
	Table[row][12] = NONE;

	row++;
	//ROW 7
	Table[row][0] = NORTH+SOUTH+EAST;
	Table[row][1] = ENEMY+WEST+EAST;
	Table[row][2] = WEST;
	Table[row][3] = NONE;
	Table[row][4] = NONE;
	Table[row][5] = NONE;
	Table[row][6] = NONE;
	Table[row][7] = NONE;
	Table[row][8] = NONE;
	Table[row][9] = NONE;
	Table[row][10] = NONE;
	Table[row][11] = NORTH+SOUTH;
	Table[row][12] = NONE;
	
	row++;
	//ROW 8
	Table[row][0] = NORTH+SOUTH;
	Table[row][1] = NONE;
	Table[row][2] = NONE;
	Table[row][3] = ENEMY+SOUTH;
	Table[row][4] = NONE;
	Table[row][5] = NONE;
	Table[row][6] = NONE;
	Table[row][7] = NONE;
	Table[row][8] = NONE;
	Table[row][9] = NONE;
	Table[row][10] = NONE;
	Table[row][11] = NORTH+SOUTH+EAST;
	Table[row][12] = FALLST;

	row++;
	//ROW 9
	Table[row][0] = NORTH+SOUTH+EAST;
	Table[row][1] = ENEMY+WEST+EAST;
	Table[row][2] = WEST+EAST+SOUTH;
	Table[row][3] = WEST+NORTH+EAST;
	Table[row][4] = SOUTH+WEST+EAST;
	Table[row][5] = WEST+EAST;
	Table[row][6] = WEST+EAST+SOUTH;
	Table[row][7] = WEST+EAST;
	Table[row][8] = ENEMY+WEST+SOUTH;
	Table[row][9] = NONE;
	Table[row][10] = NONE;
	Table[row][11] = NORTH+SOUTH;
	Table[row][12] = NONE;

	row++;
	//ROW 10
	Table[row][0] = ENEMY+NORTH+SOUTH;
	Table[row][1] = NONE;
	Table[row][2] = NORTH;
	Table[row][3] = NONE;
	Table[row][4] = NORTH;
	Table[row][5] = NONE;
	Table[row][6] = START+NORTH;
	Table[row][7] = NONE;
	Table[row][8] = ENEMY+NORTH+EAST;
	Table[row][9] = SOUTH+WEST;
	Table[row][10] = NONE;
	Table[row][11] = ENEMY+NORTH+EAST;
	Table[row][12] = FAKE;
	row++;
	//ROW 11
	Table[row][0] = FAKE;
	Table[row][1] = NONE;
	Table[row][2] = NONE;
	Table[row][3] = NONE;
	Table[row][4] = NONE;
	Table[row][5] = NONE;
	Table[row][6] = NONE;
	Table[row][7] = NONE;
	Table[row][8] = NONE;
	Table[row][9] = FAKE;
	Table[row][10] = NONE;
	Table[row][11] = NONE;
	Table[row][12] = NONE;
	
}

void location(int x,int y) 
{
    returnhelper::returner = Table[x][y];
    //cout << "DIRECTION:: "<< returnhelper::returner <<"\n";
}


