#ifndef BOARD_H_INCLUDED
#define BOARD_H_INCLUDED

// ********************************************************
// FileName: Board.h
// Author: Salvador Ramirez
// Last Modified: 5/14/15
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
<<<<<<< HEAD

        string getPosition(int x);//return the character in the position given
        char getLayout1(int x, int y);
        int getScore();
        int getLife();

        void setPosition(int x, int y, char symbol);
        void setLife(int life);
        void setScore(int score);
        void setLayout1();// sets the pac man map




        void placeGhost(int x, int y);// places ghost on map based on x and y coordinates


=======
        void setPosition(int x, int y, char symbol);
        char getLayout1(int x, int y);
        int getScore();
        void setScore(int score);
        void MakeLayout1();// sets the pacman map
>>>>>>> db986f811bf407ad565670dfc7da0ae9878e8eb6
        void DisplayCounters();// This displays the score and lives


};

#endif // BOARD_H_INCLUDED
