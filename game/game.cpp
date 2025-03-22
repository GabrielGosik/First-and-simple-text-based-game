#include <iostream>
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
    int HP;
    int maxHP;
    int dmgMin;
    int dmgMax;
    int armorClass;
    int level;
    string Inventory[10];
};

int main()
{
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

    return 0;
    
}

