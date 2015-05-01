//*************************************************************************************************
//FileName:pacMan.cpp
//Date: 4/40/15
//Author: Karina Pizano, Jose Sanchez, Noemi Cuin, Salvador
//Description:
//
//*************************************************************************************************
#include "PacMan.h"
#include <iostream>
#include <cctype>
using namespace std;

PacMan::PacMan()
{
    pacman = 'x';
    rowX = 0;
    rowY = 0;
    life = 0;
    points = 0;
}
void PacMan::setPacman(char pacman)
{
    this->pacman = pacman;
}
/*void PacMan::setCurrTile(char curr_tile)
{
    this->curr_tile = curr_tile;
}*/
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
void PacMan::moveUp()
{
    if(colY - 1 >= 0 && colY - 1 != '#')
    {
        colY--;
    }
    else
    {
        cout << "Out of Bounds" << endl;
    }
}
void PacMan::moveDown()
{
    if(colY + 1 <= HOW BiG IS THE BOARD && colY != '#')
}

void PacMan::moveLeft()
{
    if(rowX + 1 != THE END OF THE ROW && rowX != '#')
    {
        rowX++
    }
    else
    {
        cout << "Out of Bounds" << endl;
    }
}
void PacMan::moveRight()
{
    if(rowX - 1 >= 0)
    {
        rowX--;
    }
    else
    {
        cout << ""
    }
}
bool PacMan::isAttacked()
{
    if(rowX - 1 != '#' && rowX - 1 == GHOST);
        isAttacked = true;
    else
        isAttacked = false;

}
void PacMan::eatEnemy()
{

}
bool PacMan::hasLost()
{
    if(life == 0)
        hasLost() == false;

}
bool PacMan::isDot()
{

}
