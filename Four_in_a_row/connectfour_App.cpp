// Class definition for XO_App class
// Author:  Mohammad El-Ramly
// Date:    10/10/2022
// Version: 1
# include "windows.h"
#include <iostream>
#include"include/connectfour.hpp"
using namespace std;

int main(){
    int choice;
    Player* players[2];
    players[0] = new Player (1, 'x');

    cout << "Welcome to FCAI X-O Game. :)\n";
    cout << "Press 1 if you want to play with computer  : ";
    cin >> choice;


    if (choice != 1)
        players[1] = new connect4Player (2, 'o');
    else
        //Player pointer points to child
        players[1] = new RandomPlayer ('o', 7);

    GameManager x_o_game (new Connect4board() , players);
    x_o_game.run();
    system ("pause") ;
}
