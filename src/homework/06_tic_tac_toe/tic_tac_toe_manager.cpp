//cpp
#include "tic_tac_toe_manager.h"

void TicTacToeManager::get_winner_totals(int& X, int& O, int& T)
{
    X = x_wins;
    O = o_wins;
    T = ties;
}

void TicTacToeManager::save_game(TicTacToe game)
{
    games.push_back(game);
    update_winner_count(game.get_winner());
}

//private functions

void TicTacToeManager::update_winner_count(std::string winner)
{
    if (winner == "X")
        x_wins += 1;
    if (winner == "O")
        o_wins += 1;
    if (winner == "C")
        ties += 1;
}