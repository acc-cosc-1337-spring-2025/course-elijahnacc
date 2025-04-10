//h
#include <iostream>
#include <string>
#include <vector>
#include "tic_tac_toe.h"
#ifndef TIC_TAC_TOE_MANAGER_H
#define TIC_TAC_TOE_MANAGER_H

class TicTacToeManager
{
public:
    void get_winner_totals(int& X, int& O, int& T);
    void save_game(TicTacToe game);
private:
    int x_wins {0};
    int o_wins {0};
    int ties {0};
    std::vector<TicTacToe> games;
    void update_winner_count(std::string winner);

};

#endif