//*************************************************************************************************
//FileName:pacMan.cpp
//Date: 4/40/15
//Author: Karina Pizano, Jose Sanchez, Noemi Cuin, Salvador
//Description:
//
//*************************************************************************************************
#include "PacMan.h"
#include "Board.h"
#include <iostream>
#include <cctype>
using namespace std;

PacMan::PacMan()
{
    pacman = 'c';
    rowX = 0;
    colY = 0;
    pellets = 0;


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

//****************************************************************************************************************************
void PacMan::moveUp()
{
    if(colY - 1 >= 0 && colY - 1 != '#')
    {
        colY--;
    }
}
void PacMan::moveDown()
{
    if(colY + 1 <= 22 && colY != '#')
    {
        colY++;
    }
}

void PacMan::moveLeft()
{
    if(rowX + 1 != 31 && rowX != '#')
    {
        rowX++;
    }
}
void PacMan::moveRight()
{
    if(rowX - 1 >= 0 && rowX - 1 != '#')
    {
        rowX--;
    }
}
bool PacMan::isAttacked()
{
    if(rowX == ghost.getXPosition() && colY == ghost.getYPosition())
    {
        Board::life--;  //////////////////////////////////////////////////////////////////
        return true;
    }
    return false;

}

bool PacMan::hasWon()
{
    if(Board::life > 0 && pellets == 238)
        return true;
    else
        return false;

}
bool PacMan::hasLostGame()
{
   if(Board::life == 0 && pellets != 238)
        return true;
   else
        return false;

}
void PacMan::isDot(Board b)
{
    if(b.getPosition(rowX, colY) == '.')
    {
        pellets++;
        b.setPosition(rowX, colY);
        //After grabbing the DOT we will put the current position into an empty char.
        //Function comes from BOARD.
    }
}
