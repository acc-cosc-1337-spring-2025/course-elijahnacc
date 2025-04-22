#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "tic_tac_toe.h"
#include "tic_tac_toe_3.h"
#include "tic_tac_toe_4.h"
#include "tic_tac_toe_manager.h"
#include <memory>

TEST_CASE("Verify Test Configuration", "verification") {
	REQUIRE(true == true);
}

TEST_CASE("Verify first player set X") {

	TicTacToe3 game;
	game.start_game("X");
	REQUIRE(game.get_player() == "X");
}

TEST_CASE("Verify first player set O") {

	TicTacToe3 game;
	game.start_game("O");
	REQUIRE(game.get_player() == "O");
}

TEST_CASE("Verify game_over class function") {
	
	TicTacToe3 game;
	
	game.mark_board(1);
	REQUIRE(game.game_over() == false);
	game.mark_board(2);
	REQUIRE(game.game_over() == false);
	game.mark_board(3);
	REQUIRE(game.game_over() == false);
	game.mark_board(4);
	REQUIRE(game.game_over() == false);
	game.mark_board(5);
	REQUIRE(game.game_over() == false);
	game.mark_board(7);
	REQUIRE(game.game_over() == false);
	game.mark_board(6);
	REQUIRE(game.game_over() == false);
	game.mark_board(9);
	REQUIRE(game.game_over() == false);
	game.mark_board(8);
	REQUIRE(game.game_over() == true);
	
	REQUIRE(game.get_winner() == "C");
}

TEST_CASE("Verify win by first column") {

	TicTacToe3 game;
	game.start_game("X");
	
	game.mark_board(1);
	REQUIRE(game.game_over() == false);
	game.mark_board(2);
	REQUIRE(game.game_over() == false);
	game.mark_board(4);
	REQUIRE(game.game_over() == false);
	game.mark_board(5);
	REQUIRE(game.game_over() == false);
	game.mark_board(7);
	REQUIRE(game.game_over() == true);

	REQUIRE(game.get_winner() == "X");
}

TEST_CASE("Verify win by second column") {

	TicTacToe3 game;
	game.start_game("X");
	
	game.mark_board(2);
	REQUIRE(game.game_over() == false);
	game.mark_board(1);
	REQUIRE(game.game_over() == false);
	game.mark_board(5);
	REQUIRE(game.game_over() == false);
	game.mark_board(4);
	REQUIRE(game.game_over() == false);
	game.mark_board(8);
	REQUIRE(game.game_over() == true);

	REQUIRE(game.get_winner() == "X");
}

TEST_CASE("Verify win by third column") {

	TicTacToe3 game;
	game.start_game("X");
	
	game.mark_board(3);
	REQUIRE(game.game_over() == false);
	game.mark_board(1);
	REQUIRE(game.game_over() == false);
	game.mark_board(6);
	REQUIRE(game.game_over() == false);
	game.mark_board(4);
	REQUIRE(game.game_over() == false);
	game.mark_board(9);
	REQUIRE(game.game_over() == true);

	REQUIRE(game.get_winner() == "X");
}

TEST_CASE("Verify win by first column 4") {

	TicTacToe4 game;
	game.start_game("X");
	
	game.mark_board(1);
	REQUIRE(game.game_over() == false);
	game.mark_board(2);
	REQUIRE(game.game_over() == false);
	game.mark_board(5);
	REQUIRE(game.game_over() == false);
	game.mark_board(6);
	REQUIRE(game.game_over() == false);
	game.mark_board(9);
	REQUIRE(game.game_over() == false);
	game.mark_board(10);
	REQUIRE(game.game_over() == false);
	game.mark_board(13);
	REQUIRE(game.game_over() == true);

	REQUIRE(game.get_winner() == "X");
}

TEST_CASE("Verify win by second column 4") {

	TicTacToe4 game;
	game.start_game("X");
	
	game.mark_board(2);
	REQUIRE(game.game_over() == false);
	game.mark_board(1);
	REQUIRE(game.game_over() == false);
	game.mark_board(6);
	REQUIRE(game.game_over() == false);
	game.mark_board(4);
	REQUIRE(game.game_over() == false);
	game.mark_board(10);
	REQUIRE(game.game_over() == false);
	game.mark_board(8);
	REQUIRE(game.game_over() == false);
	game.mark_board(14);
	REQUIRE(game.game_over() == true);

	REQUIRE(game.get_winner() == "X");
}

TEST_CASE("Verify win by third column 4") {

	TicTacToe4 game;
	game.start_game("X");
	
	game.mark_board(3);
	REQUIRE(game.game_over() == false);
	game.mark_board(1);
	REQUIRE(game.game_over() == false);
	game.mark_board(7);
	REQUIRE(game.game_over() == false);
	game.mark_board(4);
	REQUIRE(game.game_over() == false);
	game.mark_board(11);
	REQUIRE(game.game_over() == false);
	game.mark_board(5);
	REQUIRE(game.game_over() == false);
	game.mark_board(15);
	REQUIRE(game.game_over() == true);

	REQUIRE(game.get_winner() == "X");
}

TEST_CASE("Verify win by fourth column 4") {

	TicTacToe4 game;
	game.start_game("X");
	
	game.mark_board(4);
	REQUIRE(game.game_over() == false);
	game.mark_board(1);
	REQUIRE(game.game_over() == false);
	game.mark_board(8);
	REQUIRE(game.game_over() == false);
	game.mark_board(2);
	REQUIRE(game.game_over() == false);
	game.mark_board(12);
	REQUIRE(game.game_over() == false);
	game.mark_board(5);
	REQUIRE(game.game_over() == false);
	game.mark_board(16);
	REQUIRE(game.game_over() == true);

	REQUIRE(game.get_winner() == "X");
}

TEST_CASE("Verify O win by third column") {

	TicTacToe3 game;
	game.start_game("O");
	
	game.mark_board(3);
	REQUIRE(game.game_over() == false);
	game.mark_board(1);
	REQUIRE(game.game_over() == false);
	game.mark_board(6);
	REQUIRE(game.game_over() == false);
	game.mark_board(4);
	REQUIRE(game.game_over() == false);
	game.mark_board(9);
	REQUIRE(game.game_over() == true);

	REQUIRE(game.get_winner() == "O");
}

TEST_CASE("Verify win by first row") {

	TicTacToe3 game;
	game.start_game("X");
	
	game.mark_board(1);
	REQUIRE(game.game_over() == false);
	game.mark_board(4);
	REQUIRE(game.game_over() == false);
	game.mark_board(2);
	REQUIRE(game.game_over() == false);
	game.mark_board(5);
	REQUIRE(game.game_over() == false);
	game.mark_board(3);
	REQUIRE(game.game_over() == true);

	REQUIRE(game.get_winner() == "X");
}

TEST_CASE("Verify win by second row") {

	TicTacToe3 game;
	game.start_game("X");
	
	game.mark_board(4);
	REQUIRE(game.game_over() == false);
	game.mark_board(1);
	REQUIRE(game.game_over() == false);
	game.mark_board(5);
	REQUIRE(game.game_over() == false);
	game.mark_board(2);
	REQUIRE(game.game_over() == false);
	game.mark_board(6);
	REQUIRE(game.game_over() == true);

	REQUIRE(game.get_winner() == "X");
}

TEST_CASE("Verify win by third row") {

	TicTacToe3 game;
	game.start_game("X");
	
	game.mark_board(7);
	REQUIRE(game.game_over() == false);
	game.mark_board(1);
	REQUIRE(game.game_over() == false);
	game.mark_board(8);
	REQUIRE(game.game_over() == false);
	game.mark_board(2);
	REQUIRE(game.game_over() == false);
	game.mark_board(9);
	REQUIRE(game.game_over() == true);

	REQUIRE(game.get_winner() == "X");
}

TEST_CASE("Verify win by first row 4") {

	TicTacToe4 game;
	game.start_game("X");
	
	game.mark_board(1);
	REQUIRE(game.game_over() == false);
	game.mark_board(5);
	REQUIRE(game.game_over() == false);
	game.mark_board(2);
	REQUIRE(game.game_over() == false);
	game.mark_board(6);
	REQUIRE(game.game_over() == false);
	game.mark_board(3);
	REQUIRE(game.game_over() == false);
	game.mark_board(7);
	REQUIRE(game.game_over() == false);
	game.mark_board(4);
	REQUIRE(game.game_over() == true);

	REQUIRE(game.get_winner() == "X");
}

TEST_CASE("Verify win by second row 4") {

	TicTacToe4 game;
	game.start_game("X");
	
	game.mark_board(5);
	REQUIRE(game.game_over() == false);
	game.mark_board(1);
	REQUIRE(game.game_over() == false);
	game.mark_board(6);
	REQUIRE(game.game_over() == false);
	game.mark_board(2);
	REQUIRE(game.game_over() == false);
	game.mark_board(7);
	REQUIRE(game.game_over() == false);
	game.mark_board(3);
	REQUIRE(game.game_over() == false);
	game.mark_board(8);
	REQUIRE(game.game_over() == true);

	REQUIRE(game.get_winner() == "X");
}

TEST_CASE("Verify win by third row 4") {

	TicTacToe4 game;
	game.start_game("X");
	
	game.mark_board(9);
	REQUIRE(game.game_over() == false);
	game.mark_board(1);
	REQUIRE(game.game_over() == false);
	game.mark_board(10);
	REQUIRE(game.game_over() == false);
	game.mark_board(2);
	REQUIRE(game.game_over() == false);
	game.mark_board(11);
	REQUIRE(game.game_over() == false);
	game.mark_board(3);
	REQUIRE(game.game_over() == false);
	game.mark_board(12);
	REQUIRE(game.game_over() == true);

	REQUIRE(game.get_winner() == "X");
}

TEST_CASE("Verify win by fourth row 4") {

	TicTacToe4 game;
	game.start_game("X");
	
	game.mark_board(13);
	REQUIRE(game.game_over() == false);
	game.mark_board(1);
	REQUIRE(game.game_over() == false);
	game.mark_board(14);
	REQUIRE(game.game_over() == false);
	game.mark_board(2);
	REQUIRE(game.game_over() == false);
	game.mark_board(15);
	REQUIRE(game.game_over() == false);
	game.mark_board(3);
	REQUIRE(game.game_over() == false);
	game.mark_board(16);
	REQUIRE(game.game_over() == true);

	REQUIRE(game.get_winner() == "X");
}

TEST_CASE("Verify win by top left diagonal") {

	TicTacToe3 game;
	game.start_game("X");
	
	game.mark_board(1);
	REQUIRE(game.game_over() == false);
	game.mark_board(3);
	REQUIRE(game.game_over() == false);
	game.mark_board(5);
	REQUIRE(game.game_over() == false);
	game.mark_board(2);
	REQUIRE(game.game_over() == false);
	game.mark_board(9);
	REQUIRE(game.game_over() == true);
	
	REQUIRE(game.get_winner() == "X");
}

TEST_CASE("Verify win by bottom left diagonal") {

	TicTacToe3 game;
	game.start_game("X");
	
	game.mark_board(3);
	REQUIRE(game.game_over() == false);
	game.mark_board(1);
	REQUIRE(game.game_over() == false);
	game.mark_board(5);
	REQUIRE(game.game_over() == false);
	game.mark_board(2);
	REQUIRE(game.game_over() == false);
	game.mark_board(7);
	REQUIRE(game.game_over() == true);
	
	REQUIRE(game.get_winner() == "X");
}

TEST_CASE("Verify win by top left diagonal 4") {

	TicTacToe4 game;
	game.start_game("X");
	
	game.mark_board(1);
	REQUIRE(game.game_over() == false);
	game.mark_board(3);
	REQUIRE(game.game_over() == false);
	game.mark_board(6);
	REQUIRE(game.game_over() == false);
	game.mark_board(2);
	REQUIRE(game.game_over() == false);
	game.mark_board(11);
	REQUIRE(game.game_over() == false);
	game.mark_board(15);
	REQUIRE(game.game_over() == false);
	game.mark_board(16);
	REQUIRE(game.game_over() == true);
	
	REQUIRE(game.get_winner() == "X");
}

TEST_CASE("Verify win by bottom left diagonal 4") {

	TicTacToe4 game;
	game.start_game("X");
	
	game.mark_board(13);
	REQUIRE(game.game_over() == false);
	game.mark_board(3);
	REQUIRE(game.game_over() == false);
	game.mark_board(10);
	REQUIRE(game.game_over() == false);
	game.mark_board(2);
	REQUIRE(game.game_over() == false);
	game.mark_board(7);
	REQUIRE(game.game_over() == false);
	game.mark_board(15);
	REQUIRE(game.game_over() == false);
	game.mark_board(4);
	REQUIRE(game.game_over() == true);
	
	REQUIRE(game.get_winner() == "X");
}

TEST_CASE("Verify Manager class get_winner_total public function") {

	TicTacToeManager manager;
	int X{0};
	int O{0};
	int T{0};
	
	//game 1
	std::unique_ptr<TicTacToe> game1 = std::make_unique<TicTacToe3>();
	game1 -> start_game("X");

	game1 -> mark_board(1);
	REQUIRE(game1 -> game_over() == false);
	game1 -> mark_board(4);
	REQUIRE(game1 -> game_over() == false);
	game1 -> mark_board(2);
	REQUIRE(game1 -> game_over() == false);
	game1 -> mark_board(5);
	REQUIRE(game1 -> game_over() == false);
	game1 -> mark_board(3);
	REQUIRE(game1 -> game_over() == true);
	REQUIRE(game1 -> get_winner() == "X");

	manager.save_game(game1);
	manager.get_winner_totals(X, O, T);

	REQUIRE(X == 1);
	REQUIRE(O == 0);
	REQUIRE(T == 0);

	//game 2
	std::unique_ptr<TicTacToe> game2 = std::make_unique<TicTacToe4>();
	game2 -> start_game("O");

	game2 -> mark_board(1);
	REQUIRE(game2 -> game_over() == false);
	game2 -> mark_board(5);
	REQUIRE(game2 -> game_over() == false);
	game2 -> mark_board(2);
	REQUIRE(game2 -> game_over() == false);
	game2 -> mark_board(6);
	REQUIRE(game2 -> game_over() == false);
	game2 -> mark_board(3);
	REQUIRE(game2 -> game_over() == false);
	game2 -> mark_board(7);
	REQUIRE(game2 -> game_over() == false);
	game2 -> mark_board(4);
	REQUIRE(game2 -> game_over() == true);
	REQUIRE(game2 -> get_winner() == "O");

	manager.save_game(game2);
	manager.get_winner_totals(X, O, T);

	REQUIRE(X == 1);
	REQUIRE(O == 1);
	REQUIRE(T == 0);

	//game 3
	std::unique_ptr<TicTacToe> game3 = std::make_unique<TicTacToe3>();
	game3 -> start_game("X");

	game3 -> mark_board(1);
	REQUIRE(game3 -> game_over() == false);
	game3 -> mark_board(5);
	REQUIRE(game3 -> game_over() == false);
	game3 -> mark_board(7);
	REQUIRE(game3 -> game_over() == false);
	game3 -> mark_board(4);
	REQUIRE(game3 -> game_over() == false);
	game3 -> mark_board(6);
	REQUIRE(game3 -> game_over() == false);
	game3 -> mark_board(8);
	REQUIRE(game3 -> game_over() == false);
	game3 -> mark_board(2);
	REQUIRE(game3 -> game_over() == false);
	game3 -> mark_board(3);
	REQUIRE(game3 -> game_over() == false);
	game3 -> mark_board(9);
	REQUIRE(game3 -> game_over() == true);
	REQUIRE(game3 -> get_winner() == "C");

	manager.save_game(game3);
	manager.get_winner_totals(X, O, T);

	REQUIRE(X == 1);
	REQUIRE(O == 1);
	REQUIRE(T == 1);
}