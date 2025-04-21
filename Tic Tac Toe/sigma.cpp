//from this point on projects files will use sigma bc im too lazy to make new ones :p
#include <iostream>
#include <vector>
#include "sigma.h"
using namespace std;
//originalrin was here :P

int main(){
    int s1 = 0, s2 = 0;
    bool game_over = false;
    char curr_player = 'X';
    greet(); 
    
    while (!game_over) {
        display_board();


        bool pturn = true;
        turn(pturn, curr_player);

        if (win('X')) {
            display_board();
            cout << "Player " << curr_player << " has won!\n";
            game_over = true;
        }
        else if (is_draw()) {
            display_board();
            cout << "It's a draw!" << endl;
            game_over = true;
        }
        else {
            curr_player = (curr_player == 'X') ? 'O' : 'X';
        }
    }
    return 0;

}

