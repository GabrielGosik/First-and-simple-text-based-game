#include <iostream>
#include <cstdlib>
#include <stdio.h>
#include <time.h>
#include <dos.h>
#include <windows.h>
#include <string>
#ifdef _WIN32
#include <io.h>
#define access _access

#else
#include <unistd.h>
#endif

class enemy {
public:
    int HP;
    int dmgMin;
    int dmgMax;
    int armorClass;
    std::string enemyName;
    bool alive = true;
};

using namespace std;
class player {
public:
    int HP = 10;
    int maxHP = 10;
    int dmgMin = 1;
    int dmgMax = 5;
    int armorClass = 10;
    int level = 1;
    string Inventory[10] = { "0","0","0","0","0","0","0","0","0","0" };
};

string inventoryCheck(player a) {
	cout << "You check your inventory." << endl;
	Sleep(1000);
	cout << "You have:" << endl;
	for (int i = 0; i < 10; i++) {
		if (a.Inventory[i] != "0") {
			cout << a.Inventory[i] << endl;
		}
	}
    return 0;
}

void inventoryCheckCheck(bool invCheck, player a) {
	if (invCheck == false) cout << "Your inventory is empty." << endl;
	else inventoryCheck(a);
}
void death() {
    system("CLS");
    cout << "You tried." << endl;
    Sleep(1000);
    cout << "But you failed." << endl;
    Sleep(1000);
    cout << "You died." << endl;
    Sleep(1000);
    cout << "Press any key to continue..." << endl;
    cin.ignore();
    terminate();
}

int enemyTurn(enemy enemy, player a) {
    int damage, hitChance;
	cout << enemy.enemyName << " attacks you..." << endl;
	hitChance = rand() % 20 + 1; //Hit chance
	if (hitChance >= a.armorClass) { //If hit
		damage = rand() % (enemy.dmgMax - enemy.dmgMin + 1) + enemy.dmgMin; //Damage calculation
		a.HP -= damage;
		if (a.HP <= 0) {
			cout << "You died." << endl;
			Sleep(2000);
            death();
		}
        else {
            cout << "You took " << damage << " damage." << endl;
        }
	}
	else {
		cout << "The attack missed!" << endl;
	}
	return a.HP;
}
int playerTurn(player player, enemy enemy) {
	int playerAttack = rand() % (player.dmgMax - player.dmgMin + 1) + player.dmgMin;
	return playerAttack;
}






int main() {
    srand(time(NULL)); //Random number generator seed
    bool hunger = true, invCheckUnlock = false;
    string charName;
    char nameChoice;
    int nameChoiceInt = 0, interactionActive = 0;

    cout << "Name your character: ";
    cin >> charName;

    do {
        cout << endl << endl << "Your name shall be " << charName << endl << "Are you sure? (y/n): "; //The game asks player for name
        cin >> nameChoice;

        if (nameChoice == 'y') { //Then player is asked if he is sure of his name in-game
            nameChoiceInt = 1;
            cout << "The name was chosen. You're called " << charName;
            Sleep(2000);
            system("CLS");
        }
        else if (nameChoice != 'y' && nameChoice != 'n') cout << "Incorrect character used" << endl; //Simple check to make sure that player uses correct character
        else {
            cout << "Name your character: "; //Renaming players' character if they change their mind and decide to do so
            cin >> charName;
        }
    } while (nameChoiceInt > 1);

    cout << "+-----------------------------------------------------------------------------------+" << endl;
    Sleep(200);
    cout << "|                                                                                   |" << endl;
    Sleep(200);
    cout << "|          You look at yourself in mirror, making sure that you look good.          |" << endl;
    Sleep(200);
    cout << "|                                                                                   |" << endl;
    Sleep(200);
    cout << "|                      It's a big day, for both of you.                             |" << endl;
    Sleep(200);
    cout << "|                                                                                   |" << endl;
    Sleep(200);
    cout << "+-----------------------------------------------------------------------------------+" << endl;
    Sleep(2000);
    cout << endl << "Press any key to continue...";
    cin.ignore();
    cin.ignore();
    system("CLS");

    cout << "+-----------------------------------------------------------------------------------+" << endl;

    Sleep(200);
    cout << "|                                                                                   |" << endl;
    Sleep(200);
    cout << "|                   Today you get to show your new invention.                       |" << endl;
    Sleep(200);
    cout << "|                                                                                   |" << endl;
    Sleep(200);
    cout << "|            A new machine that is able to throw anything anywhere in time          |" << endl;
    Sleep(200);
    cout << "|                                                                                   |" << endl;
    Sleep(200);
    cout << "+-----------------------------------------------------------------------------------+" << endl;
    Sleep(2000);
    cout << endl << "Press any key to continue...";
    cin.ignore();
    system("CLS");

    cout << "| " << charName << " |" << endl;
    cout << "+-----------------------------------------------------------------------------------+" << endl;
    Sleep(200);
    cout << "|                                                                                   |" << endl;
    Sleep(200);
    cout << "|                              'How do I look?'                                     |" << endl;
    Sleep(200);
    cout << "|                                                                                   |" << endl;
    Sleep(200);
    cout << "|                  You asked your assistant and love of your life                   |" << endl;
    Sleep(200);
    cout << "|                                                                                   |" << endl;
    Sleep(200);
    cout << "+-----------------------------------------------------------------------------------+" << endl;
    Sleep(2000);
    cout << endl << "Press any key to continue...";
    cin.ignore();
    system("CLS");

    cout << "| Ellie |" << endl;
    Sleep(150);
    cout << "+-----------------------------------------------------------------------------------+" << endl;
    Sleep(150);
    cout << "|                                                                                   |" << endl;
    Sleep(150);
    cout << "|                            'Better than you think'                                |" << endl;
    Sleep(150);
    cout << "|                                                                                   |" << endl;
    Sleep(150);
    cout << "|             'Now come on, don't let them wait more than they need to'             |" << endl;
    Sleep(150);
    cout << "|                                                                                   |" << endl;
    Sleep(150);
    cout << "+-----------------------------------------------------------------------------------+" << endl;
    Sleep(2000);
    cout << endl << "Press any key to continue...";
    cin.ignore();
    system("CLS");

    cout << "+-----------------------------------------------------------------------------------+" << endl;
    Sleep(200);
    cout << "|                                                                                   |" << endl;
    Sleep(200);
    cout << "|                             We walk out to the crowd                              |" << endl;
    Sleep(200);
    cout << "|                                                                                   |" << endl;
    Sleep(200);
    cout << "|                     Your Machine is there, covered by canvas                       |" << endl;
    Sleep(200);
    cout << "|                                                                                   |" << endl;
    Sleep(200);
    cout << "+-----------------------------------------------------------------------------------+" << endl;
    Sleep(2000);
    cout << endl << "Press any key to continue...";
    cin.ignore();
    system("CLS");

    cout << "+-----------------------------------------------------------------------------------+" << endl;
    Sleep(200);
    cout << "|                                                                                   |" << endl;
    Sleep(200);
    cout << "|                              Presentation goes well                               |" << endl;
    Sleep(200);
    cout << "|                                                                                   |" << endl;
    Sleep(200);
    cout << "|                       People are fascinated by The Machine                        |" << endl;
    Sleep(200);
    cout << "|                                                                                   |" << endl;
    Sleep(200);
    cout << "+-----------------------------------------------------------------------------------+" << endl;
    Sleep(2000);
    cout << endl << "Press any key to continue...";
    cin.ignore();
    system("CLS");

    cout << "+-----------------------------------------------------------------------------------+" << endl;
    Sleep(200);
    cout << "|                                                                                   |" << endl;
    Sleep(200);
    cout << "|                  Then... time to show possibilities of the invention              |" << endl;
    Sleep(200);
    cout << "|                                                                                   |" << endl;
    Sleep(200);
    cout << "|                  You activate it. It roars, its lights start to glow              |" << endl;
    Sleep(200);
    cout << "|                                                                                   |" << endl;
    Sleep(200);
    cout << "+-----------------------------------------------------------------------------------+" << endl;
    Sleep(2000);
    cout << endl << "Press any key to continue...";
    cin.ignore();
    system("CLS");

    cout << "| " << charName << " |" << endl;
    cout << "+-----------------------------------------------------------------------------------+" << endl;
    Sleep(200);
    cout << "|                                                                                   |" << endl;
    Sleep(200);
    cout << "|                                'Are you ready?'                                   |" << endl;
    Sleep(200);
    cout << "|                                                                                   |" << endl;
    Sleep(200);
    cout << "|                          You look at your wife excited                            |" << endl;
    Sleep(200);
    cout << "|                                                                                   |" << endl;
    Sleep(200);
    cout << "+-----------------------------------------------------------------------------------+" << endl;
    Sleep(2000);
    cout << endl << "Press any key to continue...";
    cin.ignore();
    system("CLS");

    cout << "| Ellie |" << endl;
    Sleep(150);
    cout << "+-----------------------------------------------------------------------------------+" << endl;
    Sleep(150);
    cout << "|                                                                                   |" << endl;
    Sleep(150);
    cout << "|                                 'Whenever you are'                                |" << endl;
    Sleep(150);
    cout << "|                                                                                   |" << endl;
    Sleep(150);
    cout << "|                She goes to door of the machine, waiting for your sign             |" << endl;
    Sleep(150);
    cout << "|                                                                                   |" << endl;
    Sleep(150);
    cout << "+-----------------------------------------------------------------------------------+" << endl;
    Sleep(2000);
    cout << endl << "Press any key to continue...";
    cin.ignore();
    system("CLS");

    cout << "+-----------------------------------------------------------------------------------+" << endl;
    Sleep(200);
    cout << "|                                                                                   |" << endl;
    Sleep(200);
    cout << "|                     Suddenly... white light flashes in your eyes.                 |" << endl;
    Sleep(200);
    cout << "|                                                                                   |" << endl;
    Sleep(200);
    cout << "+-----------------------------------------------------------------------------------+" << endl;
    Sleep(2000);
    cout << endl << "Press any key to continue...";
    cin.ignore();
    system("CLS");

    cout << "+-----------------------------------------------------------------------------------+" << endl;
    Sleep(200);
    cout << "|                                                                                   |" << endl;
    Sleep(200);
    cout << "|                                  It happened. Again.                              |" << endl;
    Sleep(200);
    cout << "|                                                                                   |" << endl;
    Sleep(200);
    cout << "+-----------------------------------------------------------------------------------+" << endl;
    Sleep(2000);
    cout << endl << "Press any key to continue...";
    cin.ignore();
    system("CLS");

    cout << "+-----------------------------------------------------------------------------------+" << endl;
    Sleep(200);
    cout << "|                                                                                   |" << endl;
    Sleep(200);
    cout << "|                              You wake up in your bed                              |" << endl;
    Sleep(200);
    cout << "|                                                                                   |" << endl;
    Sleep(200);
    cout << "+-----------------------------------------------------------------------------------+" << endl;
    Sleep(2000);
    cout << endl << "Press any key to continue...";
    cin.ignore();
    system("CLS");

    cout << "+-----------------------------------------------------------------------------------+" << endl;
    Sleep(200);
    cout << "|                                                                                   |" << endl;
    Sleep(200);
    cout << "|                                      You get up.                                  |" << endl;
    Sleep(200);
    cout << "|                                                                                   |" << endl;
    Sleep(200);
    cout << "+-----------------------------------------------------------------------------------+" << endl;
    Sleep(2000);
    cout << endl << "Press any key to continue...";
    cin.ignore();
    system("CLS");

    cout << "+-----------------------------------------------------------------------------------+" << endl;
    Sleep(200);
    cout << "|                                                                                   |" << endl;
    Sleep(200);
    cout << "|                         It's time to finish what you started                      |" << endl;
    Sleep(200);
    cout << "|                                                                                   |" << endl;
    Sleep(200);
    cout << "+-----------------------------------------------------------------------------------+" << endl;
    Sleep(2000);
    cout << endl << "Press any key to continue...";
    cin.ignore();
    system("CLS");

    int interactionPassive;
    string interactionRoom;
    player player
        ; //Creating player object
    do {
        do { //Bedroom section
            cout << "You are in your bedroom." << endl;
            Sleep(1000);
            cout << "You see a mirror, a bed, a wardrobe and a door." << endl;
            Sleep(1000);
            cout << "What do you want to do? (type in correct number)." << endl << "1. Interact" << endl << "2. Use" << endl << "3. Go" << endl << "4. Check inventory" << endl << endl << "?>";
            cin >> interactionPassive;

            if (interactionPassive == 1) {
                cout << "What do you want to interact with?" << endl << "1. Mirror" << endl << "2. Bed" << endl << "3. Wardrobe" << endl << "4. Door" << "?>";
                cin >> interactionPassive;
                if (interactionPassive == 1) {
                    cout << "You come up to the mirror" << endl;
                    Sleep(1000);
                    cout << "Even though it is a bit dusty, you can see yourself in it." << endl;
                    Sleep(1000);
                    cout << "Despite everything, it is still you." << endl;
                    cout << endl;
                }
                else if (interactionPassive == 2) {
                    cout << "You come up to the bed" << endl;
                    Sleep(1000);
                    cout << "It's a bed. You don't feel tired for now." << endl;
                    Sleep(1000);
                    cout << endl;
                }
                else if (interactionPassive == 3) {
                    cout << "You come up to the wardrobe" << endl;
                    Sleep(1000);
                    cout << "You see your clothes in it. Old and used" << endl;
                    Sleep(1000);
                    cout << endl;
                }
                else if (interactionPassive == 4) {
                    cout << "You come up to the door" << endl;
                    Sleep(1000);
                    cout << "You can go to living room. To do that use command 'go'" << endl;
                    Sleep(1000);
                    cout << endl;
                }

                else {
                    cout << "You can't do that." << endl;
                }

            }
            else if (interactionPassive == 2) {
                cout << "What do you want to use?" << endl << "1. Mirror" << endl << "2. Bed" << endl << "3. Wardrobe" << endl << "4. Door" << "?>";
                cin >> interactionPassive;
                if (interactionPassive == 1) {
                    cout << "How do you think you can use that besides looking at yourself?" << endl;
                }
                else if (interactionPassive == 2) {
                    cout << "You are not tired." << endl;
                }
                else if (interactionPassive == 3) {
                    cout << "You don't need to change your clothes right now." << endl;
                }
                else if (interactionPassive == 4) {
                    cout << "You go to Living room." << endl;

                }
            }
            else if (interactionPassive == 3) {
                cout << "You go to living room." << endl;
                interactionRoom = "living room";
                Sleep(1000);
            }
            else if (interactionPassive == 4) {
                if (invCheckUnlock == false)
                    cout << "Your inventory is empty." << endl;
                else
                    inventoryCheck(player);
            }
            else {
                cout << "You can't do that." << endl;
            }
            cout << endl;
        } while (interactionRoom != "living room");

        do { //Living room section
            cout << "You are in the living room." << endl;
            Sleep(500);
            cout << "It's a bit empty, since you moved important stuff to your basement, but at least there are kitchen utensils in your kitchen." << endl;
            cout << "...or rather what's left of it." << endl;
            Sleep(500);
            if (hunger) cout << "Speaking of which, you feel a bit hungry." << endl;
            cout << "Oh, and also there are two doors. One goes to bathroom and the other one goes to basement." << endl;
            cout << "1. Interact" << endl << "2. Use" << endl << "3. Go" << endl << "4. Check inventory" << endl << endl << "?>";
            cin >> interactionPassive;
            if (interactionPassive == 1) {
                cout << endl << "1. Kitchen utensils" << endl << "2. Doors" << endl << endl << "?>";
                cin >> interactionPassive;
                if (interactionPassive == 1 && hunger == true) {
                    cout << "You prepare some bread with old cheese." << endl;
                    cout << "You don't feel hungry anymore." << endl;
                    hunger = false;
                }
                else if (interactionPassive == 1 && hunger == false) {
                    cout << "You don't feel hungry." << endl;
                }
                else if (interactionPassive == 2) {
                    cout << "Which one?" << endl << "1. Bathroom" << endl << "2. Basement" << endl << endl << "?>";
                    cin >> interactionPassive;
                    if (interactionPassive == 1) {
                        cout << "You go to bathroom" << endl;
                        interactionRoom = "bathroom";
                    }
                    if (interactionPassive == 2) {
                        cout << "You go to basement" << endl;
                        interactionRoom = "basement";
                    }
                }
            }
            else if (interactionPassive == 2) {
                cout << endl << "1. Kitchen utensils" << endl << "2. Doors" << endl << endl << "?>";
                cin >> interactionPassive;
                if (interactionPassive == 1 && hunger == false) {
                    cout << "You don't need to use them." << endl;
                }
                else if (interactionPassive == 1 && hunger == true) {
                    cout << "You prepare some bread with old cheese." << endl;
                    cout << "You don't feel hungry anymore." << endl;
                    hunger = false;
                    player.HP += 5;
                    player.dmgMax += 2;
                }
                else if (interactionPassive == 2) {
                    cout << "Which one?" << endl << "1. Bathroom" << endl << "2. Basement" << endl << endl << "?>";
                    cin >> interactionPassive;
                    if (interactionPassive == 1) {
                        cout << "You go to bathroom" << endl;
                        interactionRoom = "bathroom";
                    }
                    if (interactionPassive == 2) {
                        cout << "You go to basement" << endl;
                        interactionRoom = "basement";
                    }
                    else {
                        cout << "You can't do that." << endl;
                    }


                }
                else if (interactionPassive == 3) {
                    cout << "Which one?" << endl << "1. Bathroom" << endl << "2. Basement" << endl << endl << "?>";
                    cin >> interactionPassive;
                    if (interactionPassive == 1) {
                        cout << "You go to bathroom" << endl;
                        interactionRoom = "bathroom";
                    }
                    if (interactionPassive == 2) {
                        cout << "You go to basement" << endl;
                        interactionRoom = "basement";
                    }
                    else {
                        cout << "You can't do that." << endl;
                    }
                }
                else if (interactionPassive == 4) {
                    if (invCheckUnlock == false) cout << "Your inventory is empty." << endl;
                    else inventoryCheck(player);
                }
                cout << endl;
            } while (interactionRoom == "living room");
            if (interactionRoom == "bathroom") {
                do { //Bathroom section
                    cout << "You see a sink and a toilet." << endl;
                    cout << "Other than that there's nothing interesting here." << endl;
                    cout << endl << "1. Interact" << endl << "2. Use" << endl << "3. Go" << endl << "4. Check inventory" << endl << endl << "?>";
                    cin >> interactionPassive;
                    if (interactionPassive == 1) {
                        cout << endl << "1. Sink" << endl << "2. Toilet" << endl << "3. Door" << endl << endl << "?>";
                        cin >> interactionPassive;
                        if (interactionPassive == 1) {
                            cout << "Old sink. At least it does not leak, but you could use something newer." << endl;
                        }
                        else if (interactionPassive == 2) {
                            cout << "Well... It is actually a chair with a dirty bucket, but you cannot afford anything else... for now." << endl;
                        }
                        else if (interactionPassive == 3) {
                            cout << "You go to living room." << endl;
                            interactionRoom = "living room";
                        }
                        else {
                            cout << "You can't do that." << endl;
                        }
                    }
                    else if (interactionPassive == 2) {
                        cout << endl << "1. Sink" << endl << "2. Toilet" << endl << "?>";
                        cin >> interactionPassive;
                        if (interactionPassive == 1) {
                            cout << "You don't need to use it." << endl;
                        }
                        else if (interactionPassive == 2) {
                            cout << "You don't feel the need to use it." << endl;
                        }
                        else {
                            cout << "You can't do that." << endl;
                        }
                    }
                    else if (interactionPassive == 3) {
                        cout << "You go to living room." << endl;
                        interactionRoom = "living room";
                    }
                    else if (interactionPassive == 4) {
                        if (invCheckUnlock == false) cout << "Your inventory is empty." << endl;
                        else inventoryCheck(player);
                    }
                    else {
                        cout << "You can't do that." << endl;
                    }
                    cout << endl;
                } while (interactionRoom == "bathroom");
            }
            if (interactionRoom == "basement") {
                int* invCheck = new int(); //This is a pointer to check if player has something in their inventory
                char* toolsTake = new char();
                do { //basement section
                    cout << "You are in the basement." << endl;
                    cout << "It is a bit dark, but you can see your desk, a chair and The Machine." << endl;
                    cout << "...You still need to come up with some kind of name for it." << endl;
                    cout << endl << "1. Interact" << endl << "2. Use" << endl << "3. Go" << endl << "4. Check inventory" << endl << endl << "?>";
                    cin >> interactionPassive;
                    if (interactionPassive == 1) {
                        cout << endl << "1. Desk" << endl << "2. Chair" << endl << "3. The Machine" << endl << "4. Door" << endl << endl << "?>";
                        if (interactionPassive == 1) {
                            cout << "You come up to the desk." << endl;
                            cout << "It is a bit dusty, but you can still see your notes and blueprints on it." << endl;
                            cout << "You also found your trusty wrench and a screwdriver." << endl;
                            cout << "You take them with you." << endl;
                            cout << "Do you want to take them? (y/n): ";
                            cin >> toolsTake;
                            if (*toolsTake == 'y') {
                                for (int i = 0;*invCheck < 2;i++) {
                                    if (player.Inventory[i] == "0" || *invCheck == 0)
                                    {
                                        player.Inventory[i] = "wrench";
                                        *invCheck++;

                                    }
                                    else if (player.Inventory[i] == "0" || *invCheck == 1)
                                    {
                                        player.Inventory[i] = "screwdriver";
                                        *invCheck++;
                                    }
                                }
                                cout << "Inventory unlocked." << endl;
                                invCheckUnlock = true;
                            }
                            else cout << "You left them on the desk." << endl;
                            delete toolsTake;
                            if (invCheckUnlock == true) {
                                cout << "You hear some noise from behind the desk." << endl;
                                Sleep(1000);
                                cout << "Suddenly, a rat jumps out of behind the desk" << endl;
                                cout << "Two more follow it" << endl;
                                Sleep(1000);
                                cout << "You had to get rid of them long ago. I think this is a good time to do it." << endl;
                                system("CLS"); //Fight Begins
                                enemy rat1, rat2, rat3;
                                rat1.HP = 5, rat2.HP = 5, rat3.HP = 5;
                                rat1.dmgMin = 1, rat2.dmgMin = 1, rat3.dmgMin = 1;
                                rat1.dmgMax = 1, rat2.dmgMax = 1, rat3.dmgMax = 1; //There has to be a way to do it better, but I don't know how
                                rat1.armorClass = 5, rat2.armorClass = 5, rat3.armorClass = 5;
                                rat1.enemyName = "Rat 1", rat2.enemyName = "Rat 2", rat3.enemyName = "Rat 3";
                                cout << "Fight commences!" << endl;
                                bool* ratsAlive = new bool;
                                int* hitChance = new int;
                                int* damageHit = new int;
                                int* turn = new int;
                                do {
                                    *turn = 0;
                                    system("CLS");
                                    if (turn = 0) {
                                        cout << charName << " HP: " << player.HP << endl << endl;
                                        cout << "Actions:" << endl << "1. Attack" << endl << "2. Check" << endl << "3. Defend" << endl << "4. Run (NOT POSSIBLE)" << endl << "!>";
                                        cin >> interactionActive;
                                        if (interactionActive == 1) {
                                            cout << "Which one?" << endl;
                                            if (rat1.alive == true) cout << "1. " << rat1.enemyName << endl;
                                            if (rat2.alive == true) cout << "2. " << rat2.enemyName << endl;
                                            if (rat3.alive == true) cout << "3. " << rat3.enemyName << endl;
                                            cin >> interactionActive;
                                            if (interactionActive == 1 && rat1.alive) {
                                                cout << "You attack " << rat1.enemyName << "..." << endl;
                                                *hitChance = rand() % 20 + 1;
                                                Sleep(500);
                                                if (*hitChance >= rat1.armorClass) {
                                                    cout << "You hit " << rat1.enemyName << "!" << endl;
                                                    *damageHit = rand() % (player.dmgMax - player.dmgMin + 1) + player.dmgMin;
                                                    cout << "You deal " << *damageHit << " damage." << endl;
                                                    rat1.HP -= *damageHit;
                                                    if (rat1.HP <= 0) {
                                                        cout << rat1.enemyName << " is dead." << endl;
                                                        rat1.alive = false;
                                                    }
                                                }
                                                else {
                                                    cout << "You missed!" << endl;
                                                }
                                            }
                                            else if (interactionActive == 2 && rat2.alive) {
                                                cout << "You attack " << rat2.enemyName << "..." << endl;
                                                *hitChance = rand() % 20 + 1;
                                                Sleep(500);
                                                if (*hitChance >= rat2.armorClass) {
                                                    cout << "You hit " << rat2.enemyName << "!" << endl;
                                                    *damageHit = rand() % (player.dmgMax - player.dmgMin + 1) + player.dmgMin;
                                                    cout << "You deal " << *damageHit << " damage." << endl;
                                                    rat2.HP -= *damageHit;
                                                    if (rat2.HP <= 0) {
                                                        cout << rat2.enemyName << " is dead." << endl;
                                                        rat2.alive = false;
                                                    }
                                                }
                                                else {
                                                    cout << "You missed!" << endl;
                                                }
                                            }
                                            else if (interactionActive == 3 && rat3.alive) {
                                                cout << "You attack " << rat3.enemyName << "..." << endl;
                                                *hitChance = rand() % 20 + 1;
                                                Sleep(500);
                                                if (*hitChance >= rat3.armorClass) {
                                                    cout << "You hit " << rat3.enemyName << "!" << endl;
                                                    *damageHit = rand() % (player.dmgMax - player.dmgMin + 1) + player.dmgMin;
                                                    cout << "You deal " << *damageHit << " damage." << endl;
                                                    rat3.HP -= *damageHit;
                                                    if (rat3.HP <= 0) {
                                                        cout << rat3.enemyName << " is dead." << endl;
                                                        rat3.alive = false;
                                                    }
                                                }
                                                else {
                                                    cout << "You missed!" << endl;
                                                }
                                            }
                                            else {
                                                cout << "You can't do that." << endl;
                                            }
                                        }
                                        else if (interactionActive == 2) {
                                            cout << "Which one do you want to check?" << endl;
                                            cout << "1. " << rat1.enemyName << endl;
                                            cout << "2. " << rat2.enemyName << endl;
                                            cout << "3. " << rat3.enemyName << endl;
                                            cin >> interactionActive;
                                            if (interactionActive == 1 && rat1.alive) {
                                                cout << "You check " << rat1.enemyName << endl;
                                                cout << rat1.enemyName << " has " << rat1.HP << " HP." << endl;
                                            }
                                            else if (interactionActive == 2 && rat2.alive) {
                                                cout << "You check " << rat2.enemyName << endl;
                                                cout << rat2.enemyName << " has " << rat2.HP << " HP." << endl;
                                            }
                                            else if (interactionActive == 3 && rat3.alive) {
                                                cout << "You check " << rat3.enemyName << endl;
                                                cout << rat3.enemyName << " has " << rat3.HP << " HP." << endl;
                                            }
                                        }
                                        else if (interactionActive == 3) {
                                            cout << "You try to defend yourself." << endl;
                                            player.armorClass += 2;
                                        }
                                        else if (interactionActive == 4) {
                                            cout << "You try to run away..." << endl;
                                            Sleep(1000);
                                            cout << "You failed." << endl; //This fight is important. Running away is not an option.
                                        }
                                        else {
                                            cout << "You can't do that." << endl;
                                        }

                                        *turn++;


                                    }
                                    else if (*turn == 1) {
                                        player.HP = enemyTurn(rat1, player);
                                        *turn++;
                                    }
                                    else if (*turn == 2) {
                                        player.HP = enemyTurn(rat2, player);
                                        *turn++;
                                    }
                                    else if (*turn == 3) {
                                        player.HP = enemyTurn(rat3, player);
                                        *turn++;
                                    }
                                    else {
                                        if (rat1.alive == false && rat2.alive == false && rat3.alive == false) {
                                            cout << "You won!" << endl;
                                            *ratsAlive = false;
                                        }
                                        *turn = 0;
                                        cout << endl;
                                    }
                                } while (*ratsAlive);
                                delete ratsAlive;
                                delete turn;
                                delete hitChance;
                                delete damageHit;
                                cout << endl;
                                cout << "Well... That was tougher than you expected." << endl;
                                cout << "But now it is time to fix that machine." << endl;
                                cout << "Time to get to work." << endl;
                            }
                        }
                        delete invCheck;
                        Sleep(3000);
                        cout << "+-----------------------------------------------------------------------------------+" << endl;
                        cout << "|                                                                                   |" << endl;
                        cout << "|                              You start to work on The Machine                     |" << endl;
                        cout << "|                                                                                   |" << endl;
                        cout << "|                     You are not sure if you can fix it, but you have to try.      |" << endl;
                        cout << "|                                                                                   |" << endl;
                        cout << "+-----------------------------------------------------------------------------------+" << endl;
                        Sleep(3000);
                        cout << endl << "Press any key to continue...";
                        cin.ignore();
                        system("CLS");
                        cout << "+-----------------------------------------------------------------------------------+" << endl;
                        cout << "|                                                                                   |" << endl;
                        cout << "|                              It takes a few hours.                                |" << endl;
                        cout << "|                                                                                   |" << endl;
                        cout << "|                        But you are not going to give up.                          |" << endl;
                        cout << "|                                                                                   |" << endl;
                        cout << "+-----------------------------------------------------------------------------------+" << endl;
                        Sleep(3000);
                        cout << endl << "Press any key to continue...";
                        cin.ignore();
                        system("CLS");
                        cout << "+-----------------------------------------------------------------------------------+" << endl;
                        cout << "|                                                                                   |" << endl;
                        cout << "|                             Not after all these months                            |" << endl;
                        cout << "|                                                                                   |" << endl;
                        cout << "|                     You are not going to give up on your promise.                 |" << endl;
                        cout << "|                                                                                   |" << endl;
                        cout << "+-----------------------------------------------------------------------------------+" << endl;
                        Sleep(3000);
                        cout << endl << "Press any key to continue...";
                        cin.ignore();
                        system("CLS");
                        cout << "+-----------------------------------------------------------------------------------+" << endl;
                        cout << "|                                                                                   |" << endl;
                        cout << "|                              You finish your work.                                |" << endl;
                        cout << "|                                                                                   |" << endl;
                        cout << "|                     You are not sure if it will work, but you have to try.        |" << endl;
                        cout << "|                                                                                   |" << endl;
                        cout << "+-----------------------------------------------------------------------------------+" << endl;
                        Sleep(3000);
                        cout << endl << "Press any key to continue...";
                        cin.ignore();
                        system("CLS");
                        cout << "+-----------------------------------------------------------------------------------+" << endl;
                        cout << "|                                                                                   |" << endl;
                        cout << "|                              You power it up...                                   |" << endl;
                        cout << "|                                                                                   |" << endl;
                        cout << "|                                     ...                                           |" << endl;
                        cout << "|                                                                                   |" << endl;
                        cout << "+-----------------------------------------------------------------------------------+" << endl;
                        Sleep(3000);
                        cout << endl << "Press any key to continue...";
                        cin.ignore();
                        system("CLS");
                        cout << "+-----------------------------------------------------------------------------------+" << endl;
                        cout << "|                                                                                   |" << endl;
                        cout << "|                                   It wakes up.                                    |" << endl;
                        cout << "|                                                                                   |" << endl;
                        cout << "|           Its' diodes are lit up, like eyes of eldrich horror, looking at you     |" << endl;
                        cout << "|                                                                                   |" << endl;
                        cout << "+-----------------------------------------------------------------------------------+" << endl;
                        Sleep(3000);
                        cout << endl << "Press any key to continue...";
                        cin.ignore();
                        system("CLS");
                        cout << "+-----------------------------------------------------------------------------------+" << endl;
                        cout << "|                                                                                   |" << endl;
                        cout << "|                              You hear banging on your door                        |" << endl;
                        cout << "|                                                                                   |" << endl;
                        cout << "|                          Someone is yelling for you to come out.                  |" << endl;
                        cout << "|                                                                                   |" << endl;
                        cout << "+-----------------------------------------------------------------------------------+" << endl;
                        Sleep(3000);
                        cout << endl << "Press any key to continue...";
                        cin.ignore();
                        system("CLS");
                        cout << "| ??? |" << endl;
                        cout << "+-----------------------------------------------------------------------------------+" << endl;
                        cout << "|                                                                                   |" << endl;
                        cout << "|                      " << charName << ", we know you're in there!'                 | " << endl;
                        cout << "|                                                                                   |" << endl;
                        cout << "|                 'Come out with your hands up! You're under arrest!'               |" << endl;
                        cout << "|                                                                                   |" << endl;
                        cout << "+-----------------------------------------------------------------------------------+" << endl;
                        Sleep(3000);
                        cout << endl << "Press any key to continue...";
                        cin.ignore();
                        cout << "| " << charName << " |" << endl;
                        cout << "+-----------------------------------------------------------------------------------+" << endl;
                        cout << "|                                                                                   |" << endl;
                        cout << "|                              'It's now or never...'                               |" << endl;
                        cout << "|                                                                                   |" << endl;
                        cout << "+-----------------------------------------------------------------------------------+" << endl;
                        Sleep(3000);
                        cout << endl << "Press any key to continue...";
                        cin.ignore();
                        system("CLS");
                        cout << "+-----------------------------------------------------------------------------------+" << endl;
                        cout << "|                                                                                   |" << endl;
                        cout << "|                              You step into The Machine.                           |" << endl;
                        cout << "|                                                                                   |" << endl;
                        cout << "|                     It takes you to some kind of marble realm.                    |" << endl;
                        cout << "|                                                                                   |" << endl;
                        cout << "+-----------------------------------------------------------------------------------+" << endl;
                        Sleep(3000);
                        cout << endl << "Press any key to continue...";
                        cin.ignore();
                        system("CLS");
                        cout << "+-----------------------------------------------------------------------------------+" << endl;
                        cout << "|                                                                                   |" << endl;
                        cout << "|                            Whatever it is... You're safe here.                    |" << endl;
                        cout << "|                                                                                   |" << endl;
                        cout << "|                     At least... for now.                                          |" << endl;
                        cout << "|                                                                                   |" << endl;
                        cout << "+-----------------------------------------------------------------------------------+" << endl;
                        Sleep(3000);
                        cout << endl << "Press any key to continue...";
                        cin.ignore();
                        system("CLS");
                        cout << "Thank you for finishing this short game. I hope you enjoyed it." << endl;
                        Sleep(2000);
                        cout << "This was a personal project where I wanted to learn a bit of C++." << endl;
                        Sleep(2000);
                        cout << "I also wanted to get into game making, but my programming skills were (and still are as of the moment) a bit too bad" << endl << "to make something more complex." << endl;
                        Sleep(2000);
                        cout << "If you want to leave then just click any key, and program should shut itself off." << endl;
                        cin.ignore();
                        terminate();

                    }
                } while (interactionRoom == "end");
                //Exeption in case of player doing something I wasn't able to foresee and going off the script
                system("CLS");
                cout << "Oops! It appears that I didn't foresee this eventuality. How about we will start again from the start?" << endl << "1. Yes" << endl << "2. No" "?>";
                cin >> interactionPassive;
                if (interactionPassive == 1) cout << "Alright, then let us begin from the start." << endl;
                else {
                    cout << "That's fine. You can start again in your own time (and from the beginning, since I didn't yet" << endl << "learned how to do save system :(. )";
                    Sleep(5000);
                    return 0;
                }

            } while (interactionRoom == "a");



        } while (true);
        
    }
    return 0;
}
// If you are seeing this, then I'm sorry that you've read through that mess. Probably in the future from now any code I'll create will be more readable