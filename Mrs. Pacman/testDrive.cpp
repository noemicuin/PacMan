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
    Ghost ghost, redGhost(2, 1);

    grid.setLayout1();
    while (1)
    {
        pacman.setPacmanLocation(grid);
        ghost.setGhost(grid);

        redGhost.setGhost(grid);

        redGhost.differentRoutes(grid);

        ghost.differentRoutes(grid);

        redGhost.CalculatePath(pacman, grid);
        ghost.CalculatePath(pacman, grid);
        for(int i = 0; i < 22; i++)
        {
            for(int j = 0; j < 31; j++)
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