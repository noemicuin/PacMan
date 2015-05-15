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
    colY = 3;
    rowX = 20;
    pellets = 0;
}

PacMan::PacMan(int x, int y)
{
    this->colY = y;
    this->rowX = x;
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

bool PacMan::hasWon(Board& grid)
{
    if(grid.life > 0)
        return true;
    else
        return false;

}
bool PacMan::hasLostGame(Board& grid)
{
   if(grid.life == 0)
        return true;
   else
        return false;

}

void PacMan::setPacmanLocation(Board& grid)
{
    grid.setPosition(rowX, colY, pacman);
}
