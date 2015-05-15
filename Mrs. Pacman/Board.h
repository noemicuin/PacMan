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
        int life;
        Board();

        string getPosition(int x);//return the character in the position given
        void setPosition(int x, int y, char symbol);
        char getLayout1(int x, int y);
        int getScore();
        int getLife();

        void setLife(int life);
        void setScore(int score);
        void setLayout1();// sets the pacman map


        void placeGhost(int x, int y);// places ghost on map based on x and y coordinates


        void DisplayCounters();// This displays the score and lives


};

#endif // BOARD_H_INCLUDED
