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
    if(colY - 1 >= 0)
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
    if(colY + 1 <= HOW BiG IS THE BOARD)
}

void PacMan::moveLeft()
void PacMan::moveRight()
bool PacMan::isInsideParameters()
bool PacMan::isAttacked()
void PacMan::eatEnemy()
bool PacMan::hasWon()
bool PacMan::hasLost()
void PacMan::isADot()
bool PacMan::isDot()
