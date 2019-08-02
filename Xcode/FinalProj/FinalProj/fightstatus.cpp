//
//  fightstatus.cpp
//  FinalProj
//
//  Created by John Papetti III on 8/1/19.
//  Copyright © 2019 John Papetti III. All rights reserved.
//


#include <iostream>
#include "textprint.h"
#include "fightstatus.h"
#include <string>
#include "golem.h"
#include "wizard.h"
#include "chef.h"
#include "delman.h"
#include "skeleton.h"
#include "RIVAL.h"
#include "boss.h"
#include "enemy.h"

#ifdef __APPLE__
#include "macwindows.h"
#elif defined _WIN32 || defined _WIN64
#include <windows.h>
#endif

string ItemList[10] = {"Cold Pizza - Restorer","Cold Pizza - Restorer","Year Old Pizza - Poison","Year Old Pizza - Poison","Roofied Pizza - Stun","Roofied Pizza - Stun","Very Hot Pizza - Burn Effect","Very Hot Pizza - Burn Effect","Moldy Pizza - ATK Down","Moldy Pizza - ATK Down"};

using namespace std;
random_device rd;
////PLAYER
int chef::lSTR = 15;
int chef::hDEF = 25;
int chef::lATK = 20;
int chef::hATK = 40;
//int damage = str / other->def;
//int def = 5;
//int magdam = mag / other->def;
int chef::totalHealth = 150;
int chef::currentHealth = 150;
int chef::lDEF = 30;

int delman::lSTR = 10;
int delman::hDEF = 25;
int delman::lATK = 25;
int delman::hATK = 50;
//int damage = str / other->def;
//int def = 5;
//int magdam = mag / other->def;
int delman::totalHealth = 150;
int delman::currentHealth = 150;
int delman::lDEF = 10;

int wizard::lSTR = 10;
int wizard::hDEF = 25;
int wizard::lATK = 1;
int wizard::hATK = 15;
int wizard::lMP = 200;
//int damage = str / other->def;
//int def = 5;
//int magdam = mag / other->def;
int wizard::totalHealth = 350;
int wizard::currentHealth = 350;
int wizard::lDEF = 25;
////END
////ENEMY
int boss::lSTR = 10;
int boss::hDEF = 25;
int boss::lATK = 1;
int boss::hATK = 15;
//int damage = str / other->def;
//int def = 5;
//int magdam = mag / other->def;
int boss::totalHealth = 350;
int boss::currentHealth = 350;
int boss::lDEF = 25;

int golem::lSTR = 10;
int golem::hDEF = 25;
int golem::lATK = 1;
int golem::hATK = 15;
//int damage = str / other->def;
//int def = 5;
//int magdam = mag / other->def;
int golem::totalHealth = 350;
int golem::currentHealth = 350;
int golem::lDEF = 25;

int rival::lSTR = 10;
int rival::hDEF = 25;
int rival::lATK = 1;
int rival::hATK = 15;
//int damage = str / other->def;
//int def = 5;
//int magdam = mag / other->def;
int rival::totalHealth = 350;
int rival::currentHealth = 350;
int rival::lDEF = 25;

int skele::lSTR = 10;
int skele::hDEF = 25;
int skele::lATK = 1;
int skele::hATK = 15;
//int damage = str / other->def;
//int def = 5;
//int magdam = mag / other->def;
int skele::totalHealth = 350;
int skele::currentHealth = 350;
int skele::lDEF = 25;

int enemy::lSTR = 10;
int enemy::hDEF = 25;
int enemy::lATK = 1;
int enemy::hATK = 15;
//int damage = str / other->def;
//int def = 5;
//int magdam = mag / other->def;
int enemy::totalHealth = 350;
int enemy::currentHealth = 350;
int enemy::lDEF = 25;

////
void FightInitalization(){
    boss::lSTR = 60;
    boss::hDEF = 40;
    boss::lATK = 10;
    boss::hATK = 50;
    //int damage = str / other->def;
    //int def = 5;
    //int magdam = mag / other->def;
    boss::totalHealth = 1000;
    boss::currentHealth = 1000;
    boss::lDEF = 25;
    
    golem::lSTR = 35;
    golem::hDEF = 30;
    golem::lATK = 10;
    golem::hATK = 35;
    //int damage = str / other->def;
    //int def = 5;
    //int magdam = mag / other->def;
    golem::totalHealth = 500;
    golem::currentHealth = 500;
    golem::lDEF = 20;
    
    rival::lSTR = 25;
    rival::hDEF = 25;
    rival::lATK = 10;
    rival::hATK = 25;
    //int damage = str / other->def;
    //int def = 5;
    //int magdam = mag / other->def;
    rival::totalHealth = 350;
    rival::currentHealth = 350;
    rival::lDEF = 10;
    
    skele::lSTR = 10;
    skele::hDEF = 15;
    skele::lATK = 1;
    skele::hATK = 15;
    //int damage = str / other->def;
    //int def = 5;
    //int magdam = mag / other->def;
    skele::totalHealth = 100;
    skele::currentHealth = 100;
    skele::lDEF = 0;
    
    enemy::lSTR = 5;
    enemy::hDEF = 10;
    enemy::lATK = 1;
    enemy::hATK = 10;
    //int damage = str / other->def;
    //int def = 5;
    //int magdam = mag / other->def;
    enemy::totalHealth = 75;
    enemy::currentHealth = 75;
    enemy::lDEF = 5;

    
}



void startFight(int enemy){
    //ENEMY INTEGERS
    //1 Goblin/Skeleton
    //2 Skeleton
    //3 Golem
    //4 Rival
    //5 Boss
    string toc;
    toc=classerman::typeofclass;
    FightInitalization();
    int fightover = 0;
    int told = 0;
    int choice = 0;
    int damage = 0;
    int JIC1 = 0;
    int JIC2 = 0;
    int playerDisabled = 0;
    int enemyDisabled = 0;
    int heal =0;
    int playertotalhealth;
    int enemytotalhealth;
    int enemyhATK;
    int enemylATK;
    int enemyhDEF;
    int enemylDEF;
    int enemylSTR;
    int enemydefense;
    int enemystrength;
    string damagespk;
    while (fightover != 1)
    {
        if (enemy==1&&told == 0){
            slowSpeak("You are in combat with a Goblin!\n", 1);
            enemytotalhealth = enemy::currentHealth;
            enemyhATK = enemy::hATK;
            enemylATK = enemy::lATK;
            enemyhDEF = enemy::hDEF;
            enemylDEF = enemy::lDEF;
            enemylSTR = enemy::lSTR;
            Sleep(1000);
            told=1;
            }
        if (enemy==2&&told == 0){
            slowSpeak("You are in combat with a Skeleton!\n", 1);
            enemytotalhealth = skele::currentHealth;
            enemyhATK = skele::hATK;
            enemylATK = skele::lATK;
            enemyhDEF = skele::hDEF;
            enemylDEF = skele::lDEF;
            enemylSTR = skele::lSTR;
            Sleep(1000);
            told=1;
        }
        if (enemy==3&&told == 0){
            slowSpeak("You are in combat with a Golem!\n", 1);
            enemytotalhealth = golem::currentHealth;
            enemyhATK = golem::hATK;
            enemylATK = golem::lATK;
            enemyhDEF = golem::hDEF;
            enemylDEF = golem::lDEF;
            enemylSTR = golem::lSTR;
            Sleep(1000);
            told=1;
        }
        if (enemy==4&&told == 0){
            slowSpeak("You are in combat with your Rival!\n", 1);
            enemytotalhealth = rival::currentHealth;
            enemyhATK = rival::hATK;
            enemylATK = rival::lATK;
            enemyhDEF = rival::hDEF;
            enemylDEF = rival::lDEF;
            enemylSTR = rival::lSTR;
            Sleep(1000);
            told=1;
        }
        if (enemy==5&&told == 0){
            slowSpeak("You are in combat with the Goblin Boss!\n", 1);
            enemytotalhealth = boss::currentHealth;
            enemyhATK = boss::hATK;
            enemylATK = boss::lATK;
            enemyhDEF = boss::hDEF;
            enemylDEF = boss::lDEF;
            enemylSTR = boss::lSTR;
            Sleep(1000);
            told=1;
        }
        slowSpeak("\n--Your Turn--\n", 1);
        Sleep(2000);
        slowSpeak("How do you proceed?\n", 1);
        sleep(500);
        cout << "### [1] Attack\n";
        Beep(350, 500);
        sleep(500);
        cout << "### [2] Use Item\n";
        Beep(400, 500);
        sleep(500);
        cout << "### [3] Call for Help";
        Beep(450, 500);
        cout << "\n> ";
        cin >> choice;
        if (choice == 1)
        {
            choice = 0;
            cout << "### [1] Hit\n";
            Beep(350, 500);
            sleep(500);
            if (toc=="CHEF"){
                cout << "### [2] Throw knife\n";
                Beep(400, 500);
            }
            else if (toc=="DELMAN"){
                cout << "### [2] Throw box\n";
                Beep(400, 500);
            }
            else if (toc=="WIZ"){
                cout << "### [2] MAGIC";
                Beep(400, 500);
            }
            cout << "\n> ";
            cin >> choice;
            if (choice==1&&toc=="CHEF"){
                //20 (player hit) - 5 (rand def) *(.5) (STR)
                damage = rd()% chef::hATK+chef::lATK;
                enemydefense = rd()% enemyhDEF+enemylDEF;
                enemydefense = enemydefense * -1;
                enemystrength = enemylSTR /10;
                enemydefense = enemydefense * enemydefense;
                damage = damage - enemydefense;
                damagespk = damage;
                enemytotalhealth -= damage;
                slowSpeak("With your pizza cutter, you taken ", 1);
                slowSpeak(damagespk, 1);
                slowSpeak(" HP from your foe.\n", 1);
                
                Sleep(1000);
            }
            if (choice==1&&toc=="DELMAN"){
                damage = rd()% delman::hATK+delman::lATK;
                damagespk = damage;
                slowSpeak("From fist to face, you taken ", 1);
                slowSpeak(damagespk, 1);
                slowSpeak(" HP from your foe.\n", 1);
                Sleep(1000);
            }
            if (choice==1&&toc=="WIZ"){
                damage = rd()% wizard::hATK+wizard::lATK;
                damagespk = damage;
                slowSpeak("You have never learned how to hit an enemy before.\n", 1);
                slowSpeak(damagespk, 1);
                slowSpeak(" HP from your foe.\n", 1);
                Sleep(1000);
            }
            if (choice==2&&toc=="CHEF"){
                JIC1 = chef::hATK *1.5;
                damage = rd()% JIC1+chef::lATK;
                damagespk = damage;
                slowSpeak("Using your knife thowing skills, you taken \n", 1);
                slowSpeak(damagespk, 1);
                slowSpeak(" HP from your foe.\n", 1);
                Sleep(1000);
            }
            else if (choice==2&&toc=="DELMAN"){
                JIC1 = delman::hATK / 2;
                JIC2 = delman::lATK / 5;
                damage = rd()% JIC1+JIC2;
                damagespk = damage;
                slowSpeak("What a great toss! \n", 1);
                Sleep(1000);
                slowSpeak("But it is only a pizza box. ", 1);
                Sleep(2000);
                slowSpeak("So...\n ", 2);
                slowSpeak(damagespk, 1);
                slowSpeak(" HP from your foe.\n", 1);
                Sleep(1000);
            }
            else if (choice==2&&toc=="WIZ"){
                cout << "--MP Current amount: " <<wizard::lMP<<" --\n";
                Beep(450, 500);
                Beep(450, 500);
                Sleep(1000);
                cout << "### [1] Clibano ignis -- MP 50\n";
                Beep(350, 500);
                sleep(500);
                cout << "### [2] Piperis Suffocatio -- 75 MP\n";
                Beep(400, 500);
                sleep(500);
                cout << "### [3] Caseus Inimicus -- 150 MP";
                Beep(450, 500);
                cout << "\n> ";
                cin >> choice;
                if (choice==1 &&wizard::lMP>50){
                    JIC1 = wizard::hATK*4;
                    JIC2 = (wizard::lATK+5)*5;
                    damage = rd()% JIC1+JIC2;
                    damagespk = damage;
                    slowSpeak("As soon as you cast your spell, a large fire erupted, causing ", 1);
                    slowSpeak(damagespk, 1);
                    slowSpeak(" HP to be lost from your foe.\n", 1);
                    Sleep(1000);
                
                }
                if (choice==2 &&wizard::lMP>75){
                    JIC1 = 5;
                    JIC2 = (wizard::lATK+5)*5;
                    damage = rd()% JIC1+JIC2;
                    damagespk = damage;
                    slowSpeak("As soon as you cast your spell, the smell of peppers became incresingly strong.\n", 1);
                    slowSpeak("Even though your enemy is choking, you seemed to be fine.\n", 1);
                    slowSpeak("Only ", 1);
                    slowSpeak(damagespk, 1);
                    slowSpeak(" HP was lost from your foe. However, they cannot attack for awhile!\n", 1);
                    Sleep(1000);
                }
                if (choice==3 &&wizard::lMP>150){
                    JIC1 = 75;
                    JIC2 = 25;
                    damage = rd()% JIC1+JIC2;
                    damagespk = damage;
                    slowSpeak("As soon as you cast your spell, a big ball of cheeze crashed into your enemy, causing ", 1);
                    slowSpeak(damagespk, 1);
                    slowSpeak(" HP to be taken from your foe. ", 1);
                    Sleep(1000);
                }
            }
        }
        if (choice ==2){
            int helper = 1;
            cout << "--Items--\n\n";
            for (int i=0; i<10; i++) {
                if (i==9){
                    cout << "### [0] "<< ItemList[i] <<" \n";
                }else{
                    cout << "### ["<<i+helper<<"] "<< ItemList[i] <<" \n";
                }
                
                
            }
            cout << "---REMEMBER THAT THE ITEM CAN ONLY BE USED ONCE---\n\n";
            cout << "> ";
            cin >> choice;
            if (choice==0&&ItemList[0]!="--USED--"){
                //mold
                ItemList[9] = "--USED--";
            }
            if (choice==1&&ItemList[0]!="--USED--"){
                //Cold
                ItemList[0] = "--USED--";
            }
            if (choice==2&&ItemList[0]!="--USED--"){
                //Cold
                ItemList[1] = "--USED--";
            }
            if (choice==3&&ItemList[0]!="--USED--"){
                //Year
                ItemList[2] = "--USED--";
            }
            if (choice==4&&ItemList[0]!="--USED--"){
                //Year
                ItemList[3] = "--USED--";
            }
            if (choice==5&&ItemList[0]!="--USED--"){
                //roofied
                ItemList[4] = "--USED--";
            }
            if (choice==6&&ItemList[0]!="--USED--"){
                //roofied
                ItemList[5] = "--USED--";
            }
            if (choice==7&&ItemList[0]!="--USED--"){
                //hot
                ItemList[6] = "--USED--";
            }
            if (choice==8&&ItemList[0]!="--USED--"){
                //hot
                ItemList[7] = "--USED--";
            }
            if (choice==9&&ItemList[0]!="--USED--"){
                //mold
                ItemList[8] = "--USED--";
            }
            else{
                slowSpeak("Don't have any items you want to use?\n", 1);
                Sleep(1000);
                slowSpeak("Too Bad...\n", 2);
            }
            
        }
        if (choice ==3){
            int chance = rd()% 25+1;
            slowSpeak("You yelled for help...\n", 1);
            Sleep(4000);
            if (chance == 25){
                slowSpeak("and help you shall get!\n", 1);
                damage = rd()% 75+50;
                damagespk = damage;
                heal = rd()% 50+25;
                Sleep(5000);
                //something happens
            }
            else{
                slowSpeak("But nobody came...\n", 2);
                Sleep(2000);
            }
        }
        slowSpeak("\n--Enemy's Turn--\n", 1);
        slowSpeak("The enemy gives an IOU card to you, saying that you will die later.\n", 1);
        Sleep(2000);
    }
}
