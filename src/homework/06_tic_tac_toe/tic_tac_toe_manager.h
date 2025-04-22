//h
#include <iostream>
#include <string>
#include <vector>
#include <memory>
#include "tic_tac_toe.h"
#ifndef TIC_TAC_TOE_MANAGER_H
#define TIC_TAC_TOE_MANAGER_H

class TicTacToeManager
{
public:
    void get_winner_totals(int& X, int& O, int& T);
    void save_game(std::unique_ptr<TicTacToe>& g);
    void display_game_history();
private:
    int x_wins {0};
    int o_wins {0};
    int ties {0};
    std::vector<std::unique_ptr<TicTacToe>> games;
    void update_winner_count(std::string winner);

};

#endif