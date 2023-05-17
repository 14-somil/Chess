#include "pieces.h"
#include <iostream>
#include <iomanip>

using namespace std;

class Board
{
public:
    Empty temp_empty;
    Pawn temp_pawn;
    Pieces *empty = &temp_empty;
    Pieces *board[8][8] = {
            {empty, empty, empty, empty, empty, empty, empty, empty},
            {empty, empty, empty, empty, empty, empty, empty, empty},
            {empty, empty, empty, empty, empty, empty, empty, empty},
            {empty, empty, empty, empty, empty, empty, empty, empty},
            {empty, empty, empty, empty, empty, empty, empty, empty},
            {empty, empty, empty, empty, empty, empty, empty, empty},
            {empty, empty, empty, empty, empty, empty, empty, empty},
            {empty, empty, empty, empty, empty, empty, empty, empty},
        };;

    Board() : temp_pawn(WHITE, C, 4)
    {

        Pieces *p1 = &temp_pawn;
        board[4][2] = p1;
    }

    friend void showBoard(const Board &b);
};

void showBoard(const Board &b)
{
    for (int i = 0; i < 8; i++)
    {
        cout<<'|';
        for (int j = 0; j < 8; j++)
        {
            cout <<setw(7)<< b.board[i][j]->print() << '|';
        }
        cout << endl;
    }
}