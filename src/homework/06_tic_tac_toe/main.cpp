#include "tic_tac_toe.h"

using std::cout; using std::cin; using std::string;

int main() 
{
	TicTacToe game;
	string first_player;
	char choice = 'Y';
	int position;
	
	do {

		do {
			cout << "Enter first player (X/O): ";
			cin >> first_player;
			first_player = toupper(first_player[0]);
		} while (first_player != "X" && first_player != "O");

		game.start_game(first_player);

		while (!game.game_over())
		{
			do {
				cout << "Enter an empty position (1-9): ";
				cin >> position;
			} while (game.get_position(position) != " ");

			game.mark_board(position);
			game.display_board();
		}

		cout << "Game over\n";

		if (game.get_winner() == "C")
		{
			cout << "Result: Draw\n";
		}
		else
		{
			cout << "Result: " << game.get_winner() << " wins!\n";
		}

		cout << "Play again? (y/n): ";
		cin >> choice;

	} while (toupper(choice) == 'Y');

	return 0;
}