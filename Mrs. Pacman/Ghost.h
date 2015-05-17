#ifndef GHOST_H_INCLUDED
#define GHOST_H_INCLUDED

//*********************************
//Class Name:
//
//Description:
//
//*********************************
//

#include "Board.h"
#include "PacMan.h"
class PacMan;
class Board;
class Ghost
{
    private:
        int x_coordinate;
        int y_coordinate; // Keeps track of where the ghost is at.
        int startingx;
        int startingy;// Used when we reset the game, puts back ghost into their original places.
        int previous_x;
        int previous_y;// Keeps track of the previous location that the ghost were at.
        bool directions[4];//Keeps the directions that pacman can go (no barriers etc.)
        char symbol, symbolOnGrid;//Represent the symbols of ghost, and represents the symbol on the board.

    public:

        Ghost();
        Ghost(int x, int y);
        void differentRoutes(Board& grid);//Gives us the different routs that the ghost can take.
        void setGhost(Board& grid);
        void CalculatePath(PacMan& pacman, Board& grid);//Calculates the path that is the fastes to attacking pac man.

        int getXCoordinate() const {return x_coordinate;}
        int getYCoordinate() const {return y_coordinate;}

        void reset(Board& grid);//When pac man gets caught the game restarts.

};
#endif // GHOST_H_INCLUDED
