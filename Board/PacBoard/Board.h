#ifndef BOARD_H_INCLUDED
#define BOARD_H_INCLUDED

// ********************************************************
// FileName: Board.h
//
// Summary: This file includes the implementation for the ----- class (defined
// in ---.h).
//
// Author: Salvador Ramirez
// Last Modified
//
//
// *******************************************************

#include "Board.h"
#include <iostream>
using namespace std;

class Board
{
    private:
        char Layout1[22][31];
        int score;
    public:
        Board();
        char getPosition(int x, int y);

        char getLayout1();
        char getScore();
        void setScore(int score);
        void setLayout1();
        void DisplayScore(int score);

};

#endif // BOARD_H_INCLUDED
