#include "tic_tac_toe_3.h"

TicTacToe3::TicTacToe3() : TicTacToe(3) {}

bool TicTacToe3::check_column_win()
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

bool TicTacToe3::check_row_win()
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

bool TicTacToe3::check_diagonal_win()
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