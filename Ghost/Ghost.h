#ifndef GHOST_H_INCLUDED
#define GHOST_H_INCLUDED

//*********************************
//Class Name:
//
//Description:
//
//*********************************
//

class Ghost
{
    private:

        int x_coordinate;
        int y_coordinate;
        bool canLeaveRoom;
    public:

        Ghost();
        void setPosition(int x, int y);
        //
        //preconditions: the objects has some set values in from the constructor
        //Summary: This function will be changing the position of a ghost object in the game
        //postconditions: The ghost objects x and y coordinates will have changed
        //
        bool canLeaveBox() const {return canLeaveroom;}

        void MoveLeft();

        void MoveRight();

        void MoveUp();

        void MoveDown();

        bool HitWall();
        //
        //Precondition: This will check to make sure the ghost can move in a given direction
        //Summary: This function will return a bool value as to whether it can move in a direction

};
#endif // GHOST_H_INCLUDED
