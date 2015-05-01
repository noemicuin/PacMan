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

class Board
{
    private:
        char Layout1[18][32];
        char Layout2[18][32];
        char Layout3[18][32];
        int score;
    public:
        Board();
        char getLayout1();
        char getLayout2();
        char getLayout3();
        char getScore();
        void setScore(int score);
        void setLayout1();
        void setLayout2();
        void setLayout3();
        void DisplayScore(int score);

};

#endif // BOARD_H_INCLUDED
