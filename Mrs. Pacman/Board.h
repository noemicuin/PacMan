#ifndef BOARD_H_INCLUDED
#define BOARD_H_INCLUDED

// ********************************************************
// FileName: Board.h
//
//
// Author: Salvador Ramirez
// Last Modified
//
//
// *******************************************************


#include <iostream>
#include <string>
using namespace std;

class Board
{
    private:
        char Layout1[22][31];
        int score;

    public:
        Board();
        void setPosition(int x, int y, char symbol);
        char getLayout1(int x, int y);
        int getScore();
        void setScore(int score);
        void MakeLayout1();// sets the pacman map
        void DisplayCounters();// This displays the score and lives


};

#endif // BOARD_H_INCLUDED
