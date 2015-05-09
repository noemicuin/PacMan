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

class Ghost
{
    private:
        Board grid;
        int x_coordinate;
        int y_coordinate;
        bool canLeaveRoom;

    public:

        static bool isInDanger;
        Ghost();
        void setPosition(int x, int y);
        //
        //preconditions: the objects has some set values in from the constructor
        //Summary: This function will be changing the position of a ghost object in the game
        //postconditions: The ghost objects x and y coordinates will have changed
        //
        bool canLeaveBox() const {return canLeaveRoom;}

        bool MoveLeft();

        bool MoveRight();

        bool MoveUp();

        bool MoveDown();

        int getXPosition() const {return x_coordinate;}
        int getYPosition() const {return y_coordinate;}

        //
        //Precondition: This will check to make sure the ghost can move in a given direction
        //Summary: This function will return a bool value as to whether it can move in a direction
        //PostCondition:

        void CalculatePath(PacMan p);

};
#endif // GHOST_H_INCLUDED
