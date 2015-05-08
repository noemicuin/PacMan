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
    rowY = 0;
    life = 0;
    points = 0;
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
void PacMan::setLife(int life)
{
    this->life = life;
}
void PacMan::setPoints(int points)
{
    this->points = points;
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
        rowX++
    }
}
void PacMan::moveRight()
{
    if(rowX - 1 >= 0 && rowX - 1 != '#')
    {
        rowX--;
    }
}
bool PacMan::isAttacked(Ghost ghost)
{
    if(rowX - 1 != '#' && rowX - 1 == ghost.getX())
        isAttacked = true;
        lifes--;
        if(lifes <= 0)
        {
            hasLost(true);
        }
    else if(rowX + 1 != '#' && rowX - 1 == ghost.getX())//GET THE GHOST POSITION
        isAttacked = true;
    else if(colY + 1 != '#' && colY + 1 == ghost.getX())
        isAttacked = true;
    else if(colY - 1 != '#' && colY - 1 == ghost.getx())
        isAttacked = true;
    else
        isAttacked = false;

}
bool PacMan::hasLost()
{
    if(life == 0)
        hasLost() == true;
    cout << "YOU LOST" << endl;

}
bool PacMan::isDot(Board b)
{
    if(b.getPosition(rowX, rowY) == '.')
    {
        points++;
    }

}
