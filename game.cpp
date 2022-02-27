#include <iostream>
#include <ctime> //for the time seed time
#include <cstdlib> //for srand(), rand() function
using namespace std;

#include "game.h"

/**
 * @brief Display the Rock, Paper, Scissors game menu.
 */
void GameMenu()
{
    cout << "--------------------------------------" << endl;
    cout << "-- Lets play Rock, Paper, Scissors! --" << endl;
    cout << "--------------------------------------" << endl;
    cout << "Press 1 for Rock, 2 for Paper, 3 for Scissors:" << endl;
}

/**
 * @brief generate a random number between 1 and 3
 *
 * @return int: random number
 */
int AiChoice()
{
    // gets a random number between 1 and 3
    srand (time(NULL)); //set random seed
    int ai = rand() % 3 + 1;
    // Display random computer choice
    cout << "The computer selects: " << ai << endl;
    return ai; //return value
}

/**
 * @brief Logic for Rock, Paper, Scissors game
 *
 * @param player: player 1 choice
 * @param computer: player 2 choice
 */
 void RockPaperScissors(int player, int computer)
{
     //if statements if player selects 1.
     if(player == 1)
     {
        // nested if statement for computer depending on random generated number 1-3
        if (computer == 1)
        {
          cout << "Rock meets Rock its a tie!" << endl;
        }
        else if (computer == 2)
        {
             cout << "Rock is covered by Paper the computer wins!" << endl;
        }
        else
        {
            cout << "Rock crushes Scissors you win!" << endl;
        }
    }

     //if statements if player selects 2.
     else if(player == 2)
     {
         // nested if statement for computer depending on random generated number 1-3
         if (computer == 1)
         {
             cout << "Paper covers Rock you win!" << endl;
         }
         else if (computer == 2)
         {
             cout << "Paper meets Paper its a tie!" << endl;
         }
         else
         {
             cout << "Paper is cut by Scissors the computer wins!" << endl;
         }
     }

     //if statements if player selects 3.
     else if(player == 3)
     {
         // nested if statement for computer depending on random generated number 1-3
         if (computer == 1)
         {
             cout << "Scissors are crushed by Rock computer wins!" << endl;
         }
         else if (computer == 2)
         {
             cout << "Scissors cuts Paper you win!" << endl;
         }
         else
         {
             cout << "Scissors meet Scissors its a tie!" << endl;
         }
     }

     //if any other combination was selected
     else
     {
         cout << "You didn't select 1, 2, or 3" << endl;
     }

}
