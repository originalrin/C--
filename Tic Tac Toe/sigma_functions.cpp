#include <vector>
#include <iostream>
//originalrin was here :P
using namespace std;

char board[3][3] = { {'1','2','3'}, {'4','5','6'}, {'7','8','9'} };
char player;

void greet() {
	cout << "=======================\n";
	cout << "Welcome to Tic Tac Toe\n";
	cout << "=======================\n";
}


bool is_filled(int pos, char player) {
	int row = (pos - 1) / 3;
	int col = (pos - 1) % 3;

	if (board[row][col] == 'X' || board[row][col] == 'O') {
		cout << "Spot is filled, choose another spot." << endl;
			return true;
	}
	else {
		board[row][col] = player;
		return false;
	}
}


void turn(bool& pturn, char player) {
	while (pturn) {
		int move;
		cout << "Please enter a move.\n";
		cin >> move;
		if (!is_filled(move, player)) {
			pturn = false;
		}
	}

}
void display_board() {
	cout << "\n";
	for (int i = 0; i < 3; i++) {
		cout << " " << board[i][0] << " | " << board[i][1] << " | " << board[i][2] << " \n";
		if (i < 2) {
			cout << "---|---|---\n";
		}
	}
	cout << "\n";
}


bool win(char player) {
	// 8 win conditions
	//parameter can check either 'X' or 'O' in main
	if (board[0][0] == player && board[0][1] == player && board[0][2] == player) {
		return true;
	}
	if (board[1][0] == player && board[1][1] == player && board[1][2] == player) {
		return true;
	}
	if (board[2][0] == player && board[2][1] == player && board[2][2] == player) {
		return true;
	}
	if (board[0][0] == player && board[0][1] == player && board[0][2] == player) {
		return true;
	}
	if (board[1][0] == player && board[1][1] == player && board[1][2] == player) {
		return true;
	}
	if (board[2][0] == player && board[2][1] == player && board[2][2] == player) {
		return true;
	}
	if (board[0][0] == player && board[1][1] == player && board[2][2] == player) {
		return true;
	}
	if (board[0][2] == player && board[1][1] == player && board[2][0] == player) {
		return true;
	}
	else {
		return false;
	}
}


bool is_draw() {

	for (int i = 0; i < 3; i++) {
		for (int t = 0; t < 3; t++) {
			if (board[i][t] != 'X' && board[i][t] != 'O') {
				return false;
			}
		}
		if (!win('X') && !win('O')) {
			return true;
		}
	}
	return false;
	
}
	
