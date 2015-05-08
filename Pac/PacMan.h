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
#include "Ghost.h"
using namespace std;


class PacMan
{
    private:
        Ghost ghost;
        char pacman; //This character will be how we distinguish paacman..
        int rowX; //Row we are at.
        int colY; //Col we are currently at.
        int pellets;
        bool hasLost;
    public:
        PacMan();
        PacMan(char pacman, char curr_tile, int rowX, int rowY, int life, int points);
        //Accessors
        char getPacman()const{return pacman;}
        //char getCurrTile()const{return curr_tile;}
        int getRowX()const{return rowX;}
        int getColY()const{return colY;}

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
        // Pre-Condition: Make sure that the move is not out of bounds.
        void moveDown();
        // Summary:
        // Pre-Condition:
        void moveLeft();
        // Summary:
        // Pre-Condition:
        void moveRight();
        // Summary:
        // PreCondition:
        bool isAttacked();
        // Summary: If pacman gets attacked we will lower the life variable.
        // pre Condition: If pacman gets attacked and he has 1 life we will call the hasLost() function.
        void eatEnemy();
        // Summary: Pacman will be able to eat the ghost if they are the color blue.
        // pre-Condition: If pacman gets close to a blue ghost the ghost will go back to the center.
        //                but if the ghost is not blue then we will remove a life and if pacman has no more lifes
        //          we call the has lost function.
        bool hasLostGame();
        bool hasWon();
        // Summary: PacMan wins if he eats all the dots.
        // Pre Condition: If Pacman wins we will call the didWin function!
        bool isDot(Board board);
        // Summary: If the character has a . then it is a dot and will increase there points.
        // PreCondition: Before it moves it will check if the next movement contains a dot if it does then
        //               the point variable will increase.

        int getXPosition() const {return rowX;}
        int getYPosition() const {return colY;}

};
#endif // PACMAN_H_INCLUDED
