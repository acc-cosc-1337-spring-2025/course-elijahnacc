#include "tic_tac_toe.h"

using std::cout; using std::cin; using std::string;

int main() 
{
	TicTacToe game;
	string first_player;
	char choice = 'Y';
	
	do {

		cout << "Enter first player: ";
		cin >> first_player;

		game.start_game(first_player);

		int position;

		while (!game.game_over())
		{
			cout << "Enter a position (1-9): ";
			cin >> position;
			game.mark_board(position);
			game.display_board();
		}

		cout << "Play again? (y/n): ";
		cin >> choice;

	} while (toupper(choice) == 'Y');

	return 0;
}