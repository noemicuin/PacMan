//********************************
//Filename:
//Author: Jose Sanchez-Garcia
//Last_modified:
//Description:
//*******************************

#include <iostream>
#include "Ghost.h"
#include "Board.h"

using namespace std;

bool Ghost::isInDanger = false;

Ghost::Ghost()
{
    //position will be determined by the dimensions of the map
    x_coordinate = 13; //will change
    y_coordinate = 13; //will change
    canLeaveRoom = false;
    isInDanger = false;

}

void Ghost::setPosition(int x_coordinate, int y_coordinate)
{
    this->x_coordinate = x_coordinate;
    this->y_coordinate = y_coordinate;
}

bool Ghost::MoveDown()
{
    if( grid.getPosition(x_coordinate, y_coordinate + 1) != '#' && y_coordinate < 30)
    {
        y_coordinate++;
        return true;
    }
    return false;
}

bool Ghost::MoveUp()
{
    if( grid.getPosition(x_coordinate, y_coordinate - 1) != '#' && y_coordinate > 0)
    {
        y_coordinate--;
        return true;
    }
    return false;
}

bool Ghost::MoveLeft()
{
    if(grid.getPosition(x_coordinate - 1, y_coordinate) != '#' && x_coordinate > 0)
    {
        x_coordinate--;
        return true;
    }
    return false;
}

bool Ghost::MoveRight()
{
    if(grid.getPosition(x_coordinate + 1, y_coordinate) != '#' && x_coordinate < 31)
    {
        x_coordinate++;
        return true;
    }
    return false;
}

void Ghost::CalculatePath()
{

}



