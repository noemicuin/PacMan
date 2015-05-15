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
        int y_coordinate;
        int startingx;
        int startingy;
        int previous_x;
        int previous_y;
        bool directions[4];
        bool previousDirection[4];
        char symbol, symbolOnGrid;

    public:

        static bool isInDanger;
        Ghost();
        Ghost(int x, int y);
        void setPosition(int x, int y);
        void differentRoutes(Board& grid);
        void setGhost(Board& grid);
        void CalculatePath(PacMan& pacman, Board& grid);

        int getXCoordinate() const {return x_coordinate;}
        int getYCoordinate() const {return y_coordinate;}

        void reset(Board& grid);

};
#endif // GHOST_H_INCLUDED
