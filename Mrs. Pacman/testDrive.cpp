//********************************
//Filename: testDrive.cpp
//Author: Noemi Cuin, Jose Sanchez-Garcia
//Last_modified: 5*15*15
//Description the implementation file for all of the classes
//*******************************

#include <iostream>
#include <windows.h>
#include "PacMan.h"
#include "Board.h"
#include "Ghost.h"
using namespace std;

int main()
{
    Board grid; //creation of the object grid from the class Board

    PacMan pacman(10, 10); //Pacman constructor places pacman on the board at a certain location
    Ghost ghost(20, 1), redGhost(10, 15), blueGhost(20, 28); //creation of 3 Ghost objects to place them on certain locations

    grid.MakeLayout1(); //calls the layout of the game board
    pacman.setPacmanLocation(grid); //sets pacman on the grid
    while(pacman.hasLostGame() == false && grid.getScore() < 255) //while pacman has reached all of the possible points and while he still has lives
    {                                                           //left, the game will continue to run
        //sets ghost on the grid
        ghost.setGhost(grid);

        redGhost.setGhost(grid);

        blueGhost.setGhost(grid);

        //will place the ghost on a different location so that they can follow pacman
        redGhost.differentRoutes(grid);

        ghost.differentRoutes(grid);

        blueGhost.differentRoutes(grid);


        //Calculate Path is used to chase Pacman so that the game is nerve wrecking
        redGhost.CalculatePath(pacman, grid);

        ghost.CalculatePath(pacman, grid);

        blueGhost.CalculatePath(pacman, grid);


        // if PacMan and a ghost are in the same location, then PacMan has lost a live and there is one less live for PacMan to use
        if(pacman.isAttacked(ghost) == true || pacman.isAttacked(redGhost) == true || pacman.isAttacked(blueGhost) == true)
        {
            pacman.reset(grid);
            ghost.reset(grid);
            redGhost.reset(grid);
            blueGhost.reset(grid);
            Sleep(1000);
        }



        //this is the for loop within a for loop that continues the game play.
        //each for loop represents an x or y coordinate on the board

        for(int i = 0; i < 22; i++)
        {
            for(int j = 0; j < 30; j++)
            {
                cout << grid.getLayout1(i, j);

                //when up arrow key is pressed, PacMan will move up
                if(GetAsyncKeyState(VK_UP) != 0)
                {
                    pacman.moveLeft(grid);
                     break;
                }

                //when down arrow key is pressed, PacMan will move down
                if (GetAsyncKeyState(VK_DOWN) != 0)
                {
                    pacman.moveRight(grid);
                    break;
                }

                //when right arrow key is pressed, PacMan will move right
                if(GetAsyncKeyState(VK_RIGHT) != 0)
                {
                    pacman.moveDown(grid);
                    break;
                }

                //when Left arrow key is pressed, PacMan will move left
                if(GetAsyncKeyState(VK_LEFT) != 0)
                {
                    pacman.moveUp(grid);
                    break;
                }


            }
            cout << endl;
        }

        //PacMan's score will be outputed during gameplay
        cout << grid.getScore() << endl;
        cout << pacman.getLives() << endl;
        Sleep(1000); //works on speed of PacMan
        system("cls"); //this clears the screen so that the game board is always updated
    }
        return 0;
}