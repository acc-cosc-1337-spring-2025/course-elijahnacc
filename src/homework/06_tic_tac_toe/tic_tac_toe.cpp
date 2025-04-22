//cpp
#include "tic_tac_toe.h"

using std::cout;

bool TicTacToe::game_over()
{
    if (check_row_win() == true || check_column_win() == true || check_diagonal_win() == true)
    {
        set_winner();
        return true;
    }
    else if (check_board_full() == true)
    {
        winner = "C";
        return true;
    }
    return false;
}

void TicTacToe::start_game(std::string first_player)
{
    player = first_player;
    clear_board();
}

void TicTacToe::mark_board(int position)
{
    pegs[position - 1] = player;
    set_next_player();
}

void TicTacToe::display_board() const
{   
    int iteration{0};
    if (pegs.size() > 10)
        iteration = 1;
    for (std::size_t i = 0; i < pegs.size(); i += 3 + iteration)
    {
        cout << pegs[i] << "|" << pegs[i+1] << "|" << pegs[i+2];
        if (pegs.size() > 10)
            cout << "|" << pegs[i+3];
        cout << "\n";
    }
}

//private functions
void TicTacToe::clear_board()
{
    for (auto& peg: pegs)
    {
        peg = " ";
    }
}

void TicTacToe::set_winner()
{
    if (player == "X")
        winner = "O";
    else
        winner = "X";

}

void TicTacToe::set_next_player()
{
    if (player == "X")
        player = "O";
    else
        player = "X";
}

bool TicTacToe::check_column_win()
{
    return false;
}

bool TicTacToe::check_row_win()
{
    return false;
}

bool TicTacToe::check_diagonal_win()
{
    return false;
}

bool TicTacToe::check_board_full()
{
    for (long unsigned int i = 0; i <= pegs.size() - 1; ++i)
    {
        if (pegs[i] == " ")
        {
            return false;
        }
    }
    return true;
}
