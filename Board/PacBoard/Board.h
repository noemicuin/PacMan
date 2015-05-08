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

#include "Board.h"
#include <iostream>
using namespace std;

class Board
{
    private:
        char Layout1[22][31];
        int score;
        int life;
    public:
        Board();
        char getPosition(int x, int y);//return the character in the position given
        char getLayout1();
        int getScore();
        int getLife();
        void setLife(int life);
        void setScore(int score);
        void setLayout1();// sets the pacman map

        void placeGhost(int x, int y);// places ghost on map based on x and y coordinates


        void DisplayCounters();// This displays the score and lives


};

#endif // BOARD_H_INCLUDED
