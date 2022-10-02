#include "Functions.h"

void runGame()
{
}

void initBoard(char board[3][3])
{

}

void placeAPiece(int x, int y, char piece, char board[3][3])
{
}

bool checkForWinner(char piece, char board[3][3])
{
}

bool checkForDraw(char board[3][3])
{
}


void displayBoard(char board[3][3])
{
    //cout << "Rows:" << sizeof(board)/sizeof(board[0]) << " Columns: " << sizeof(board[0])/sizeof(board[0][0]);
    for(int i = 0; i < 3;i++)
    {
        for(int j = 0; j < 3;j++)
        {
            if (board[i][j] == 'X' || board[i][j] == 'O')
            {
                cout << board[i][j];
            }
            else
            {
                cout << '-';
            }
            if (j != 2)
            {
                cout << '|';
            }
        }
        if (i != 2)
        {
            cout << "\n-----\n";
        }
    }
}