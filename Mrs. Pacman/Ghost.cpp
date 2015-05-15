//********************************
//Filename:
//Author: Jose Sanchez-Garcia
//Last_modified:
//Description:
//*******************************

#include <iostream>
#include <cmath>
#include "Ghost.h"
using namespace std;

bool Ghost::isInDanger = false;

Ghost::Ghost()
{
    //position will be determined by the dimensions of the map
    x_coordinate = 10; //will change
    y_coordinate = 10; //will change
    symbol = 'G';
    symbolOnGrid = ' ';
    previous_x = 0;
    previous_y = 0;
    for(int i = 0; i < 4; i++)
       directions[i] = false;
}
Ghost::Ghost(int x, int y)
{
   this->x_coordinate = x;
   this->y_coordinate = y;
   symbol = 'G';
   previous_x = 0;
   previous_y = 0;
   for(int i = 0; i < 4; i++)
   {
       directions[i] = false;
   }
}
void Ghost::setPosition(int x_coordinate, int y_coordinate)
{
    this->x_coordinate = x_coordinate;
    this->y_coordinate = y_coordinate;
}

void Ghost::differentRoutes(Board& grid)
{
    if(grid.getLayout1(x_coordinate, y_coordinate - 1) != '#' && (x_coordinate != previous_x || y_coordinate - 1 != previous_y) )
        directions[0] = true;
    else
        directions[0] = false;

    if(grid.getLayout1(x_coordinate, y_coordinate + 1) != '#' && (x_coordinate != previous_x || y_coordinate + 1 != previous_y) )
        directions[1] = true;
    else
        directions[1] = false;

    if(grid.getLayout1(x_coordinate + 1, y_coordinate) != '#' && (x_coordinate + 1 != previous_x || y_coordinate != previous_y))
        directions[2] = true;
    else
        directions[2] = false;

    if(grid.getLayout1(x_coordinate - 1, y_coordinate) != '#' && (x_coordinate - 1 != previous_x || y_coordinate != previous_y))
        directions[3] = true;
    else
        directions[3] = false;


}

void Ghost::CalculatePath(PacMan& pacman, Board& grid)
{
    double shortest_length, temp_length;
    shortest_length = 50;
    int temp_x_coordinate = x_coordinate;   //used to calculate the distance within the grid
    int temp_y_coordinate = y_coordinate;   //used to calculate the distance between pacman and ghost
    previous_x = x_coordinate;
    previous_y = y_coordinate;  //this get the past coordinate before it is changed in the for loop
    int best_x_coordinate = 0;  //set to default values
    int best_y_coordinate = 0;

    for(int i = 0; i < 4; i++)
    {
        if(directions[i] == true)
        {
            if(i == 0)
            {
                temp_y_coordinate--;
                temp_length = sqrt( pow((pacman.getColY() - temp_y_coordinate), 2) + pow((pacman.getRowX() - temp_x_coordinate), 2));
            }
            else if(i == 1)
            {
                temp_y_coordinate++;
                temp_length = sqrt( pow((pacman.getColY() - temp_y_coordinate), 2) + pow((pacman.getRowX() - temp_x_coordinate), 2));
            }
            else if(i == 2)
            {
                temp_x_coordinate++;
                temp_length = sqrt( pow((pacman.getColY() - temp_y_coordinate), 2) + pow( (pacman.getRowX() - temp_x_coordinate), 2));
            }
            else
            {
                temp_x_coordinate--;
                temp_length = sqrt( pow((pacman.getColY() - temp_y_coordinate), 2) + pow( (pacman.getRowX() - temp_x_coordinate), 2));
            }

            if(temp_length < shortest_length)
            {
                shortest_length = temp_length;
                if( i == 0)
                {
                    best_x_coordinate = x_coordinate;
                    best_y_coordinate = y_coordinate - 1;
                }
                else if(i == 1)
                {
                    best_x_coordinate = x_coordinate;
                    best_y_coordinate = y_coordinate + 1;
                }
                else if(i == 2)
                {
                    best_x_coordinate = x_coordinate + 1;
                    best_y_coordinate = y_coordinate;
                }
                else
                {
                    best_x_coordinate = x_coordinate - 1;
                    best_y_coordinate = y_coordinate;
                }

            }

        }
        temp_x_coordinate = x_coordinate;
        temp_y_coordinate = y_coordinate;
    }
    x_coordinate = best_x_coordinate;
    y_coordinate = best_y_coordinate;
    symbolOnGrid = grid.getLayout1(x_coordinate, y_coordinate);
    if(symbolOnGrid == pacman.getPacman())
        symbolOnGrid = '.';


}

void Ghost::setGhost(Board& grid)
{
    grid.setPosition(x_coordinate, y_coordinate, symbol);
    grid.setPosition(previous_x, previous_y, symbolOnGrid);

}



