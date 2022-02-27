#include <iostream>
#include "game.h"
using namespace std;

int main()
{
    //Set the char variable for the y/n while loop.
    char ch = 'Y';
    int games = 0; //variable to keep track of # of games

    //Part 1.2: start of game loop, the loop will run until ch != 'Y' or 'y'
    while (ch == 'Y' || ch == 'y')
    {
        int choice;
        //Part 1.1: Call Menu Function
        GameMenu();
        cin >> choice;      //capture input

        //Part 2: Get AI choice
        int ai = AiChoice();

        //Part 3: Call logic function
        RockPaperScissors(choice, ai);

        //Repeat process
        cout << "Would you like to play again? Y/N" << endl;
        cin >> ch;

        //Part 1.3: Increment counter
        games++;
        if(games >=3) // exit loop if >=3
        {
            cout << "You played " << games << " times. Thank you for playing." << endl;
            break;
        }

    }   // end of while loop

    return 0;
}