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


Ghost::Ghost()
{
    //sets variable to their default values
    x_coordinate = 10;
    y_coordinate = 10;
    symbol = 'G';
    symbolOnGrid = ' ';
    previous_x = 0;
    previous_y = 0;

    startingx = x_coordinate;
    startingy = y_coordinate;

    for(int i = 0; i < 4; i++)
       directions[i] = false;
}

Ghost::Ghost(int x, int y)
{
   //new x and y positions will be set for the Ghosts

   this->x_coordinate = x;
   this->y_coordinate = y;
   symbol = 'G';

   previous_x = 0;
   previous_y = 0;

   startingx = x_coordinate;
   startingy = y_coordinate;

   for(int i = 0; i < 4; i++)
       directions[i] = false;
}

void Ghost::differentRoutes(Board& grid)
{
    //Checks the different routs that it can take. Making sure that there is nothing in the way and that it is not in the previous one.
    if(grid.getLayout1(x_coordinate, y_coordinate - 1) != '#' && (x_coordinate != previous_x || y_coordinate - 1 != previous_y) )
        directions[0] = true;//Returns true if it is a possible route.
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
    int temp_x_coordinate = x_coordinate;   //used to calculate the distance between pacman and ghost
    int temp_y_coordinate = y_coordinate;   //used to calculate the distance between pacman and ghost
    previous_x = x_coordinate;
    previous_y = y_coordinate;  //this get the past coordinate before it is changed in the for loop
    int best_x_coordinate = 0;  //set the default values
    int best_y_coordinate = 0;  //set the default values

    for(int i = 0; i < 4; i++)
    {
        if(directions[i] == true)//Grabs all the directions that the ghost can take.
        {
            if(i == 0)
            {
                //The route that the ghost can take, we then calculate how long it would take to get him there using the distance formula.
                //And using both the pac mans position and the ghost position.
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

            if(temp_length < shortest_length)//Makes sure we get the most efficient/fastes route to pacman.
            {
                shortest_length = temp_length;
                if( i == 0)
                {
                    //If it  a shorter route it will update the new route that it will take.
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

    x_coordinate = best_x_coordinate;   //sets the best x_coordinate for the ghost object
    y_coordinate = best_y_coordinate;   //sets the best y_coordinate for the ghost object

    symbolOnGrid = grid.getLayout1(x_coordinate, y_coordinate); //Gives you back the character that is infront of it.
    if(symbolOnGrid == pacman.getPacman() || symbolOnGrid == symbol)//Makes sure that it doesnt get the ghost character or pac man char.
        symbolOnGrid = ' ';
}

void Ghost::setGhost(Board& grid)
{
    grid.setPosition(x_coordinate, y_coordinate, symbol);   //places the ghost character on the ghost current position
    grid.setPosition(previous_x, previous_y, symbolOnGrid); //places the original symbol back on the map
}
void Ghost::reset(Board& grid)
{
    grid.setPosition(x_coordinate, y_coordinate, ' ');  //sets the ghost current position back to an empty space
    grid.setPosition(startingx, startingy, symbol);
    x_coordinate = startingx;   //changes the ghost current position to that of the default locations
    y_coordinate = startingy;
}
