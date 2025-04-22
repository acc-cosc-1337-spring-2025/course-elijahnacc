//cpp
#include "tic_tac_toe_manager.h"
#include <iostream>
#include <vector>
#include <memory>

void TicTacToeManager::get_winner_totals(int& X, int& O, int& T)
{
    X = x_wins;
    O = o_wins;
    T = ties;
}

void TicTacToeManager::save_game(std::unique_ptr<TicTacToe>& g)
{
    update_winner_count(g -> get_winner());
    games.push_back(std::move(g));
}

void TicTacToeManager::display_game_history()
{
    int iteration{0};
    std::cout << "Game history: \n";

    for(auto& game : games)
    {
        ++iteration;
        std::cout << "\nGame " << iteration << ": ";
        if (game -> get_winner() == "C")
            std::cout << "Draw\n";
        else
            std::cout << game -> get_winner() << " wins!\n"; 
        game -> display_board();  
    }
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