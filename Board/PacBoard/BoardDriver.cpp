// ********************************************************
// FileName:
//
// Summary:
//
//
// Author: Salvador Ramirez
// Last Modified
//
//
// *******************************************************
#include "Board.h"
#include <iostream>


using namespace std;

int main()
{
    Board board;
    board.getLayout1();
    board.setLayout1();

    for(int i = 0; i < 22; i++)
    {
            for(int j = 0; j < 31 ; j++)
        {
            cout << board.getPosition(i,j);
        }
        cout << endl;
    }



}
