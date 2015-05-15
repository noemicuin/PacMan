//********************************
//Filename:
//Author: Jose Sanchez-Garcia
//Last_modified:
//Description:
//*******************************

#include <iostream>
#include <windows.h>
#include "PacMan.h"
#include "Board.h"
#include "Ghost.h"
using namespace std;

int main()
{
    Board grid;

    PacMan pacman;
    Ghost ghost(20, 1), redGhost(10, 15), blueGhost(20, 28);

    grid.MakeLayout1();
    while(pacman.hasLostGame() == false && grid.getScore() < 255)
    {
        pacman.setPacmanLocation(grid);

        ghost.setGhost(grid);

        redGhost.setGhost(grid);

        blueGhost.setGhost(grid);

        redGhost.differentRoutes(grid);

        ghost.differentRoutes(grid);

        blueGhost.differentRoutes(grid);

        redGhost.CalculatePath(pacman, grid);

        ghost.CalculatePath(pacman, grid);

        blueGhost.CalculatePath(pacman, grid);

        if(pacman.isAttacked(ghost) == true || pacman.isAttacked(redGhost) == true || pacman.isAttacked(blueGhost) == true)
        {
            pacman.reset(grid);
            ghost.reset(grid);
            redGhost.reset(grid);
            blueGhost.reset(grid);
        }

        for(int i = 0; i < 22; i++)
        {
            for(int j = 0; j < 30; j++)
            {

                cout << grid.getLayout1(i, j);
            }

            cout << endl;
        }
        //system("pause");
        Sleep(1000);
        system("cls");
    }
        return 0;
}