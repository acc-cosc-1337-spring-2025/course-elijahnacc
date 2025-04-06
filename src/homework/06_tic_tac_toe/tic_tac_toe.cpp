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
    for (long unsigned int i = 0; i < pegs.size(); i += 3)
    {
        cout << pegs[i] << "|" << pegs[i+1] << "|" << pegs[i+2] << "\n";
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
    for (int pos = 0; pos <= 2; ++pos)
    {
        if (pegs[pos] == "X" || pegs[pos] == "O")
        {
            if (pegs[pos] == pegs[3+pos] && pegs[pos] == pegs[6+pos])
                return true;
        }
    }
    return false;
}

bool TicTacToe::check_row_win()
{
    for (int i = 0; i <= 2; ++i)
    {
        if (pegs[i*3] == "X" || pegs[i*3] == "O")
        {

            if (pegs[i*3] == pegs[1+i*3] && pegs[i*3] == pegs[2+i*3])
                return true;
        }
    }
    return false;
}

bool TicTacToe::check_diagonal_win()
{
    if (pegs[0] == "X" || pegs[0] == "O")
    {
        if (pegs[0] == pegs[4] && pegs[0] == pegs[8])
            return true;
    }
    if (pegs[2] == "X" || pegs[2] == "O")
    {
        if (pegs[2] == pegs[4] && pegs[2] == pegs[6])
            return true;
    }
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
