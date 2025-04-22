#include "tic_tac_toe.h"
#include "tic_tac_toe_3.h"
#include "tic_tac_toe_4.h"
#include "tic_tac_toe_manager.h"

using std::cout; using std::cin; using std::string; using std::unique_ptr; using std::make_unique;

int main() 
{
	TicTacToeManager manager;
	string first_player;
	char choice = 'Y';
	int board_size, position, X, O, T;
	
	do {

		do {
			cout << "Please enter TicTacToe board size (3 for 3x3 / 4 for 4x4): ";
			cin >> board_size;
		} while (board_size != 3 && board_size != 4);

		unique_ptr<TicTacToe> game;

		if (board_size == 3)
			game = make_unique<TicTacToe3>();
		if (board_size == 4)
			game = make_unique<TicTacToe4>();
		
		do {
			cout << "Enter first player (X/O): ";
			cin >> first_player;
			first_player = toupper(first_player[0]);
		} while (first_player != "X" && first_player != "O");

		game -> start_game(first_player);

		while (!game -> game_over())
		{
			do {
				if (board_size == 3) {
					cout << "Enter an empty position (1-9): ";
					cin >> position;
				}
				else if (board_size == 4) {
					cout << "Enter an empty position (1-16): ";
					cin >> position;
				}
				
			} while (game -> get_position(position) != " ");

			game -> mark_board(position);
			game -> display_board();
		}

		cout << "Game over\n";

		if (game -> get_winner() == "C")
		{
			cout << "Result: Draw\n";
		}
		else
		{
			cout << "Result: " << game -> get_winner() << " wins!\n";
		}

		manager.save_game(game);
		manager.get_winner_totals(X, O, T);

		cout << "\n";
		cout << "X wins: " << X << "\n";
		cout << "O wins: " << O << "\n";
		cout << "Ties: " << T << "\n";
		cout << "\n";

		cout << "Display game history? (press y): ";
		cin >> choice;

		if (toupper(choice) == 'Y')
			manager.display_game_history();

		cout << "Play again? (y/n): ";
		cin >> choice;

	} while (toupper(choice) == 'Y');

	return 0;
}