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
            cout << "What do you want to do? (type in correct number)." << endl << "1. Interact" << endl << "2. Use" << endl << "3. Go" << endl << endl << "?>";
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
                }
                else if (interactionPassive == 2) {
                    cout << "You come up to the bed" << endl;
                    Sleep(1000);
                    cout << "It's a bed. You don't feel tired for now." << endl;
                    Sleep(1000);
                }
                else if (interactionPassive == 3) {
                    cout << "You come up to the wardrobe" << endl;
                    Sleep(1000);
                    cout << "You see your clothes in it. Old and used" << endl;
                    Sleep(1000);
                }
                else if (interactionPassive == 4) {
                    cout << "You come up to the door" << endl;
                    Sleep(1000);
                    cout << "You can go to living room. To do that use command 'go'" << endl;
                    Sleep(1000);
                }

                else {
                    cout << "You can't do that." << endl;
                }
            }
            else if (interactionPassive == 2) {
                cout << "What do you want to use?" << endl << "1. Mirror" << endl << "2. Bed" << endl << "3. Wardrobe" << endl << "4. Door" << "?>";
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
            else {
                cout << "You can't do that." << endl;
            }

        } while (interactionRoom != "living room");

        do { //Living room section
            cout << "You are in the living room." << endl;
            Sleep(500);
            cout << "It's a bit empty, since you moved important stuff to your basement, but at least there are kitchen utensils in your kitchen." << endl;
            cout << "...or rather what's left of it." << endl;
            Sleep(500);
            if (hunger) cout << "Speaking of which, you feel a bit hungry." << endl;
            cout << "Oh, and also there are two doors. One goes to bathroom and the other one goes to basement." << endl;
            cout << "1. Interact" << endl << "2. Use" << endl << "3. Go" << endl << endl << "?>";
            cout << "?>";
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

        } while (interactionRoom == "living room");
        if (interactionRoom == "bathroom") {
            do { //Bathroom section
                cout << "You see a sink and a toilet." << endl;
                cout << "Other than that there's nothing interesting here." << endl;
                cout << endl << "1. Interact" << endl << "2. Use" << endl << "3. Go" << endl << endl << "?>";
                cin >> interactionPassive;
                if (interactionPassive == 1) {
                    cout << endl << "1. Sink" << endl << "2. Toilet" << endl << "3. Door" << endl << endl << "?>";
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
                else {
                    cout << "You can't do that." << endl;
                }
            } while (interactionRoom == "bathroom");
        }
        if (interactionRoom == "basement") {
            int* invCheck = new int(); //This is a pointer to check if player has something in their inventory
            char* toolsTake = new char();
            do { //basement section
                cout << "You are in the basement." << endl;
                cout << "It is a bit dark, but you can see your desk, a chair and The Machine." << endl;
                cout << "...You still need to come up with some kind of name for it." << endl;
                cout << endl << "1. Interact" << endl << "2. Use" << endl << "3. Go" << endl << endl << "?>";
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
                            cout << "You unlocked a new operation! Type 'inv' or 'inventory' to check your inventory." << endl;
                        }
                        else cout << "You left them on the desk." << endl;
                        delete toolsTake;

                        cout << "?>";
                        cin >> interactionPassive;

                    }
                    delete invCheck;

                }
            } while (interactionRoom == "living room");
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

        return 0;

	}while (true);
}