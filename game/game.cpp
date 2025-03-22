#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <time.h>
//#include <unistd.h>
#include <dos.h>
#include <windows.h>


using namespace std;
int main()
{
    string charName;
    char nameChoice;
    int nameChoiceInt = 0;

    cout << "Name your character: ";
    cin >> charName;

    do {
        cout << endl << endl << "Your name shall be " << charName << endl << "Are you sure? (y/n): ";
        cin >> nameChoice;
        if (nameChoice == 'y') {
            nameChoiceInt = 1;
            cout << "The name was chosen. You're called " << charName;
            Sleep(2000);
            system("CLS");
        }
        else if (nameChoice != 'y' && nameChoice != 'n') cout << "Incorrect character used" << endl;

    } while (nameChoiceInt > 1);
    return 0;
    
}

