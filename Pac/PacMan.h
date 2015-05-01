#ifndef PACMAN_H_INCLUDED
#define PACMAN_H_INCLUDED

//*********************************************************************
//File Name: PacMan.h
//Date: 4/30/15
//Author: Karina Pizano, Noemi Cuin, Salvador, Jose Sanchez
//Description:
//
//*********************************************************************
#include <iostream>
using namespace std;


class PacMan
{
    private:
        char pacman; //This character will be how we distinguish paacman.
        //char curr_tile[][];  // We need to keep track of what tile we are currently on.
        int rowX; //Row we are at.
        int colY; //Col we are currently at.
        int life; //How many lifes we have.
        int points; // How many points they get.
    public:
        PacMan();
        PacMan(char pacman, char curr_tile, int rowX, int rowY, int life, int points);
        //Accessors
        char getPacman()const{return pacman;}
        //char getCurrTile()const{return curr_tile;}
        int getRowX()const{return rowX;}
        int getColY()const{return colY;}
        int getLife()const{return life;}
        int getPoints()const{return points;}
        //Setters
        void setPacman(char pacman);
        //void setCurrTile(char curr_tile);
        void setRowX(int rowX);
        void setColY(int colY);
        void setLife(int life);
        void setPoints(int points);
        //Member Functions
        void moveUp();
        // Summary: If the user presses ' ' then they will move up.
        // Pre-Condition: Check that where the tile is already
        void moveDown();
        void moveLeft();
        void moveRight();
        bool isInsideParameters();
        bool isAttacked();
        void eatEnemy();
        bool hasWon();
        bool hasLost();
        void isADot();
        bool isDot();
        void didWin();




};
#endif // PACMAN_H_INCLUDED
