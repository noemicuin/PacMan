//********************************
//Filename:
//Author: Jose Sanchez-Garcia
//Last_modified:
//Description:
//*******************************

#include <iostream>
#include "Ghost.h"

using namespace std;

Ghost::Ghost()
{
    //position will be determined by the dimensions of the map

}

void Ghost::setPosition(int x_coordinate, int y_coordinate)
{
    this->x_coordinate = x_coordinate;
    this->y_coordinate = y_coordinate;
}


