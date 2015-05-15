//*************************************************************************************************
//FileName:pacMan.cpp
//Date: 4/40/15
//Author: Karina Pizano, Jose Sanchez, Noemi Cuin, Salvador
//Description:
//
//*************************************************************************************************

#include <iostream>
#include <cctype>
#include "PacMan.h"
using namespace std;

PacMan::PacMan()
{
    pacman = 'c';
    colY = 1;
    rowX = 2;
    lives = 3;
    startingx = rowX;
    startingy = colY;
}

PacMan::PacMan(int x, int y)
{
    this->colY = y;
    this->rowX = x;
    startingx = rowX;
    startingy = colY;
    pacman = 'c';
}
//Setters *******************************************************************************************************************
void PacMan::setPacman(char pacman)
{
    this->pacman = pacman;
}

void PacMan::setRowX(int rowX)
{
    this->rowX = rowX;
}

void PacMan::setColY(int colY)
{
    this->colY = colY;
}

bool PacMan::hasWon()
{
    if(lives > 0)
        return true;
    else
        return false;
}

bool PacMan::hasLostGame()
{
   if(lives == 0)
        return true;
   else
        return false;
}

void PacMan::setPacmanLocation(Board& grid)
{
    grid.setPosition(rowX, colY, pacman);
}

bool PacMan::isAttacked(Ghost& ghost)
{
    if(colY == ghost.getYCoordinate() && rowX == ghost.getXCoordinate())
    {
        lives--;
        return true;
    }
    return false;
}

void PacMan::reset( Board& grid)
{
    grid.setPosition(rowX, colY, ' ');
    grid.setPosition(startingx, startingy, pacman);
}

void PacMan::isDot(Board& board)
{
    if(board.getLayout1(rowX, colY) == '.')
        board.setScore(1);
    else if(board.getLayout1(rowX, colY) == 'O')
        board.setScore(5);

}