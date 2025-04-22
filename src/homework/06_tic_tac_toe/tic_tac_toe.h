//h
#include <iostream>
#include <string>
#include <vector>
#ifndef TIC_TAC_TOE_H
#define TIC_TAC_TOE_H

class TicTacToe
{
public:
    TicTacToe(int size) : pegs(size*size, " ") {}
    bool game_over();
    void start_game(std::string first_player);
    void mark_board(int position);
    void display_board() const;
    std::string get_position(int position) {return pegs[position - 1];}
    std::string get_player() const{return player;}
    std::string get_winner() {return winner;}
private:
    std::string player;
    std::string winner;
    void clear_board();
    void set_winner();
    void set_next_player();
    bool check_board_full();
protected:
    std::vector<std::string> pegs;
    virtual bool check_column_win();
    virtual bool check_row_win();
    virtual bool check_diagonal_win();
};

#endif