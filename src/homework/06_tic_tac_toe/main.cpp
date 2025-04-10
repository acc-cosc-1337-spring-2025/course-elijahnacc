#include "tic_tac_toe.h"
#include "tic_tac_toe_manager.h"

using std::cout; using std::cin; using std::string;

int main() 
{
	TicTacToe game;
	TicTacToeManager manager;
	string first_player;
	char choice = 'Y';
	int position, X, O, T;
	
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

		manager.save_game(game);
		manager.get_winner_totals(X, O, T);

		cout << "\n";
		cout << "X wins: " << X << "\n";
		cout << "O wins: " << O << "\n";
		cout << "Ties: " << T << "\n";
		cout << "\n";

		cout << "Play again? (y/n): ";
		cin >> choice;

	} while (toupper(choice) == 'Y');

	return 0;
}