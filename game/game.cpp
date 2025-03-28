﻿#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <time.h>
#include <dos.h>
#include <windows.h>
#ifdef _WIN32
#include <io.h>
#define access _access

#else
#include <unistd.h>
#endif
using namespace std;

class enemy {
    int HP;
    int dmgMin;
    int dmgMax;
    int armorClass;
    string enemyName;
};

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

int main()
{
    bool hunger = true;
    string charName;
    char nameChoice;
    int nameChoiceInt = 0;

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

    string interactionPassive;
    player player
        ; //Creating player object
    do {
		do { //Bedroom section
            cout << "You are in your bedroom." << endl;
            Sleep(1000);
            cout << "You see a mirror, a bed, a wardrobe and a door." << endl;
            Sleep(1000);
            cout << "Type 'interact', 'use' or 'go' to interact with objects." << endl << "?>";
            cin >> interactionPassive;

            if (interactionPassive == "interact mirror") {
                cout << "You come up to the mirror" << endl;
                Sleep(1000);
                cout << "Even though it is a bit dusty, you can see yourself in it." << endl;
                Sleep(1000);
            }
            else if (interactionPassive == "interact bed") {
                cout << "You come up to the bed" << endl;
                Sleep(1000);
                cout << "It's a bed. You don't feel tired for now." << endl;
                Sleep(1000);
            }
            else if (interactionPassive == "interact wardrobe") {
                cout << "You come up to the wardrobe" << endl;
                Sleep(1000);
                cout << "You see your clothes in it. Old and used" << endl;
                Sleep(1000);
            }
            else if (interactionPassive == "interact door") {
                cout << "You come up to the door" << endl;
                Sleep(1000);
                cout << "You can go to living room. To do that use command 'go'" << endl;
                Sleep(1000);

            }
            else if (interactionPassive == "use mirror") {
                cout << "How do you think you can use that besides looking at yourself?" << endl;
            }
            else if (interactionPassive == "use bed") {
                cout << "You are not tired." << endl;
            }
            else if (interactionPassive == "use wardrobe") {
                cout << "You don't need to change your clothes right now." << endl;
            }
            else if (interactionPassive == "use door") {
                cout << "You go to Living room." << endl;

            }
            else if (interactionPassive == "go living room" || interactionPassive == "go Living room" || interactionPassive == "go Living Room") {
                cout << "You go to living room." << endl;
                Sleep(1000);
            }
            else {
                cout << "You can't do that." << endl;
            }

        } while (interactionPassive != "go living room" || interactionPassive != "go Living room" || interactionPassive != "go Living Room" || interactionPassive != "use door");

		do { //Living room section
            cout << "You are in the living room." << endl;
            Sleep(500);
            cout << "It's a bit empty, since you moved important stuff to your basement, but at least there are kitchen utensils in your kitchen." << endl;
            cout << "...or rather what's left of it." << endl;
            Sleep(500);
            if (hunger) cout << "Speaking of which, you feel a bit hungry." << endl;
            cout << "Oh, and also there are two doors. One goes to bathroom and the other one goes to basement." << endl;
            cout << "?>";
            cin >> interactionPassive;
            if (interactionPassive == "interact kitchen" || interactionPassive == "use kitchen") {
                cout << "You prepare yourself some food. You don't feel hunger anymore" << endl;
                hunger = false;
            }
            else if (interactionPassive == "use door") {
                cout << "Which one?" << endl << "?>";
                cin >> interactionPassive;
                if (interactionPassive == "bathroom" || interactionPassive == "Bathroom") {
                    cout << "You go to bathroom" << endl;
                    interactionPassive = "bathroom";
                }
                if (interactionPassive == "basement" || interactionPassive == "Basement") {
                    cout << "You go to basement" << endl;
                    interactionPassive = "basement";
                }
            }
        } while (interactionPassive == "bathroom" || interactionPassive == "basement");
        if (interactionPassive == "bathroom") {
            do { //Bathroom section
                cout << "You see a sink and a toilet." << endl;
                cout << "Other than that there's nothing interesting here." << endl;
                cout << "?>";
                cin >> interactionPassive;
                if (interactionPassive == "use sink" || interactionPassive == "interact sink") {
                    cout << "Old sink. At least it does not leak, but you could use something newer." << endl;
                }
                else if (interactionPassive == "use toilet" || interactionPassive == "interact toilet") {
                    cout << "Well... It is actually a chair with a dirty bucket, but you cannot afford anything else... for now." << endl;
                }
                else if (interactionPassive == "use door") {
                    cout << "You go to living room." << endl;
                    interactionPassive = "living room";
                }
                else {
                    cout << "You can't do that." << endl;
                } while (interactionPassive == "living room");
            } while (interactionPassive == "");
        }
        if (interactionPassive == "basement") {
			int* invCheck = new int();
            do { //basement section
				cout << "You are in the basement." << endl;
				cout << "It is a bit dark, but you can see your desk, a chair and The Machine." << endl;
				cout << "...You still need to come up with some kind of name for it." << endl;
				cout << "?>";
				cin >> interactionPassive;
                if (interactionPassive == "interact desk" || interactionPassive == "use desk") {
                    cout << "You come up to the desk." << endl;
                    cout << "It is a bit dusty, but you can still see your notes and blueprints on it." << endl;
                    cout << "You also found your trusty wrench and a screwdriver." << endl;
					cout << "You take them with you." << endl;
                    for (int i =0;*invCheck < 2;i++) {
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
					cout << "You unlocked a new operation! Type 'inv' or 'inventory' to check your inventory." << endl;
					cout << "?>";
					cin >> interactionPassive;
					
                }
                delete invCheck;

			} while (interactionPassive == "living room" || interactionPassive == "");
        }
            //Exeption in case of player doing something I wasn't able to foresee and going off the script
            cout << "Oops! It appears that I didn't foresee this eventuality. How about we will start again from the start?" << endl << "?>";
            cin >> interactionPassive;
            if (interactionPassive == "yes" || interactionPassive == "Yes") cout << "Alright, then let us begin from the start." << endl;
            else {
                cout << "That's fine. You can start again in your own time (and from the beginning, since I didn't yet" << endl << "learned how to do save system :(. )";
                Sleep(5000);
                return 0;
            }
        
    } while (interactionPassive == "");

    return 0;
    
}

