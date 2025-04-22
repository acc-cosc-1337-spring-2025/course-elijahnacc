#include "tic_tac_toe_4.h"

TicTacToe4::TicTacToe4() : TicTacToe(4) {}

bool TicTacToe4::check_column_win()
{
    for (int pos = 0; pos <= 3; ++pos)
    {
        if (pegs[pos] == "X" || pegs[pos] == "O")
        {
            if (pegs[pos] == pegs[4+pos] && pegs[pos] == pegs[8+pos] && pegs[pos] == pegs[12+pos])
                return true;
        }
    }
    return false;
}

bool TicTacToe4::check_row_win()
{
    for (int i = 0; i <= 3; ++i)
    {
        if (pegs[i*4] == "X" || pegs[i*4] == "O")
        {

            if (pegs[i*4] == pegs[1+i*4] && pegs[i*4] == pegs[2+i*4] && pegs[i*4] == pegs[3+i*4])
                return true;
        }
    }
    return false;
}

bool TicTacToe4::check_diagonal_win()
{
    if (pegs[0] == "X" || pegs[0] == "O")
    {
        if (pegs[0] == pegs[5] && pegs[0] == pegs[10] && pegs[0] == pegs[15])
            return true;
    }
    if (pegs[3] == "X" || pegs[3] == "O")
    {
        if (pegs[3] == pegs[6] && pegs[3] == pegs[9] && pegs[3] == pegs[12])
            return true;
    }
    return false;
}