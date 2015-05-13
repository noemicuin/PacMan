/*  Filename: Run.cpp
    Author: Noemi Cuin
    Description: main file for the classes, Pacman,
        Board, and Ghosts.
    Date: 5*13*15
    Compiler: CB 13.12
    Version: 1
*/


#include <iostream>
#include <windows.h>
#include "Board.h"
//#include <PacMan.h>
//#include <Ghost.h>

using namespace std;

char Map[22][31] = {
	"##############################",
	"#.............##.............#",
	"#O####.######.##.######.####O#",
	"#.####.######.##.######.####.#",
	"#............................#",
	"#.####.#.############.#.####.#",
	"#..... #......##......#......#",
	"######.###### ## ######.######",
	"######.#              #.######",
	"######.# #####  ##### #.######",
	".......  #          #  .......",
	"######.# ############ #.######",
	"######.#       C      #.######",
	"######.# ############ #.######",
	"#.............##.............#",
	"#.####.###### ## ######.####.#",
	"#O...#..................#...O#",
	"####.#.#.############.#.#.####",
    "#......#......##......#......#",
	"#.##########.####.##########.#",
	"#............................#",
	"##############################"
	};


int Gamespeed = 100;

bool stopgame = false;
int points = 0; //used to keep track of points accumulated
char choice;
Board game;


int main()
{
    while(stopgame == false)
    {
        system("cls"); //clears the screen
        for(int y=0; y<22; y++) //loop for the board
        {
            cout << Map[y] << endl;
        }
        for(int y=0; y<22; y++)
        {
            for(int x=0; x<31; x++)
            {
                switch(Map[y][x])
                {
                    case 'C':
                    {
                        if(GetAsyncKeyState(VK_UP) != 0)
                        {
                            int y2 = (y-1);
                            switch(Map[y2][x])
                            {
                                case '.':
                                {
                                    Map[y][x] = ' ';
                                    y -= 1;
                                    Map[y2][x] = 'C';
                                    points +=1;
                                    game.setScore(points);

                                }break;
                                case ' ':
                                {
                                    Map[y][x] = ' ';
                                    y -= 1;
                                    Map[y2][x] = 'C';
                                    game.setScore(points);

                                }break;
                                case 'O':
                                {
                                    Map[y][x] = ' ';
                                    y -= 1;
                                    Map[y2][x] = 'C';
                                    points += 5;
                                    game.setScore(points);
                                }break;

                            }
                        }
                        if(GetAsyncKeyState(VK_DOWN)!= 0)
                        {
                            int y2= (y + 1);
                            switch(Map[y2][x])
                            {
                                case '.':
                                {
                                    Map[y][x] = ' ';
                                    y += 1;
                                    Map[y2][x] = 'C';
                                    points +=1;
                                    game.setScore(points);

                                }break;
                                case ' ':
                                {
                                    Map[y][x] = ' ';
                                    y += 1;
                                    Map[y2][x] = 'C';
                                    game.setScore(points);

                                }break;
                                case 'O':
                                {
                                    Map[y][x] = ' ';
                                    y += 1;
                                    Map[y2][x] = 'C';
                                    points +=5;
                                    game.setScore(points);

                                }break;
                           }
                        }

                        if(GetAsyncKeyState(VK_RIGHT)!= 0)
                        {
                            int x2 = (x + 1);
                            switch(Map[y][x2])
                            {
                                case '.':
                                {
                                    Map[y][x] = ' ';
                                    x += 1;
                                    Map[y][x2] = 'C';
                                    points +=1;
                                    game.setScore(points);

                                }break;
                                case ' ':
                                {
                                    Map[y][x] = ' ';
                                    x += 1;
                                    Map[y][x2] = 'C';
                                    game.setScore(points);

                                }break;
                                case 'O':
                                {
                                    Map[y][x] = ' ';
                                    x += 1;
                                    Map[y][x2] = 'C';
                                    points += 5;
                                    game.setScore(points);

                                }break;
                            }
                        }

                        if(GetAsyncKeyState(VK_LEFT)!= 0)
                        {
                            int x2 = (x-1);
                            switch(Map[y][x2])
                            {
                                case '.':
                                {
                                    Map[y][x] = ' ';
                                    x -= 1;
                                    Map[y][x2] = 'C';
                                    points +=1;
                                    game.setScore(points);

                                }break;
                                case ' ':
                                {
                                    Map[y][x] = ' ';
                                    x -=1;
                                    Map[y][x2] ='C';
                                    game.setScore(points);

                                }break;
                                case 'O':
                                {
                                    Map[y][x] = ' ';
                                    x -=1;
                                    Map[y][x2] ='C';
                                    points += 5;
                                    game.setScore(points);

                                }break;
                            }
                        }
                    }break;
                }


            }


        }

        game.setScore(points);
        game.DisplayCounters();
        Sleep(Gamespeed);

    if(points >= 255)
    {
        cout << "///GAME OVER\\\" "<< endl;
        cout << "Enter 'Q' to terminate the program. " << endl;
        cin >> choice;
        if(toupper(choice) == 'Q')
        {
            stopgame = true;
        }
    }

    }





    return 0;
}

