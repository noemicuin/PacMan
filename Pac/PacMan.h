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
        //Ghost ghost;
        char pacman;
        int rowX;
        int colY;
        int pellets;
        bool hasLost;
    public:
        //Constructors:
        PacMan();
        PacMan(char pacman, char curr_tile, int rowX, int rowY, int life, int points);

        //Accessors:
        char getPacman()const{return pacman;}
        int getRowX()const{return rowX;}
        int getColY()const{return colY;}

        //Setters:
        void setPacman(char pacman);
        void setRowX(int rowX);
        void setColY(int colY);

        //Member Functions
        void moveUp();
        // Summary: If the user presses up Key then they will move up.
        // Pre-Condition: Make sure that the move is not out of bounds.
        void moveDown();
        // Summary: If the user presses the down Key pac man will move down.
        // Pre-Condition: Check that it is inside the boundaries and that there is no obstacles, '#'.
        void moveLeft();
        // Summary: If the user presses the left key pac man will move left.
        // Pre-Condition: Check that it's inside boundaries and that there is no obstacles '#'
        void moveRight();
        // Summary: If the user presses the right key pac man will move right.
        // PreCondition: Checck that it is inside the parameters and nothing blocking the way.
        bool isAttacked();
        // Summary: If pac man gets attacked we will lower the life variable.
        // Pre-Condition: If pac man gets attacked and he has 1 life we will call the hasLost() function.
        bool hasLostGame();
        // Summary: This function will return false if Pac man lost or true if pac man Won.
        // Pre-Condition: We have to check that the life = 0 and that pacman did not get all the dots.
        bool hasWon();
        // Summary: Pac Man wins if he eats all the dots and has more than 0 life.
        // Pre-Condition: Check that all the dots are gone and check that pac man still has at least 1 life left.
        void. isDot(Board board);
        // Summary: If the character has a . then it is a dot and will increase there points.
        // Pre-Condition: Before it moves it will check if the next movement contains a dot if it does then
        //                the point variable will increase.
};
#endif // PACMAN_H_INCLUDED
