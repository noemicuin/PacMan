#include <iostream>
#include <windows.h>

using namespace std;

char Map[22][31] = {
	"##############################",
	"#@............##.............#",
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
	"######.#              #.######",
	"######.# ############ #.######",
	"#.............##.............#",
	"#.####.###### ## ######.####.#",
	"#O...#..................#...O#",
	"####.#.#.############.#.#.####",
    "#......#......##......#......#",
	"#..#########..##..##########.#",
	"#............................#",
	"##############################"
	};


int Gamespeed = 100;
int Level = 0;
bool stopgame = false;

int main()
{
    while(stopgame == false)
    {
        system("cls");
        for(int y=0; y<22; y++)
        {
            cout << Map[y] << endl;
        }
        for(int y=0; y<22; y++)
        {
            for(int x=0; x<31; x++)
            {
                switch(Map[y][x])
                {
                    case '@':
                    {
                        if(GetAsyncKeyState(VK_UP) != 0)
                        {
                            int y2 = (y-1);
                            switch(Map[y2][x])
                            {
                                case '.':
                                {
                                    Map[y][x] = '.';
                                    y -= 1;
                                    Map[y2][x] = '@';
                                }break;
                                case ' ':
                                {
                                    Map[y][x] = ' ';
                                    y -= 1;
                                    Map[y2][x] = '@';
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
                                    Map[y][x] = '.';
                                    y += 1;
                                    Map[y2][x] = '@';
                                }
                                case ' ':
                                {
                                    Map[y][x] = ' ';
                                    y += 1;
                                    Map[y2][x] = '@';
                                }
                           }
                        }

                        if(GetAsyncKeyState(VK_RIGHT)!= 0)
                        {
                            int x2 = (x + 1);
                            switch(Map[y][x2])
                            {
                                case '.':
                                {
                                    Map[y][x] = '.';
                                    x += 1;
                                    Map[y][x2] = '@';
                                }
                                case ' ':
                                {
                                    Map[y][x] = ' ';
                                    x += 1;
                                    Map[y][x2] = '@';
                                }
                            }
                        }

                        if(GetAsyncKeyState(VK_LEFT)!= 0)
                        {
                            int x2 = (x-1);
                            switch(Map[y][x2])
                            {
                                case '.':
                                {
                                    Map[y][x] = '.';
                                    x -=1;
                                    Map[y][x2] = '@';
                                }
                                case ' ':
                                {
                                    Map[y][x] = ' ';
                                    x -=1;
                                    Map[y][x2] = '@';
                                }
                            }
                        }
                    }break;
                }
            }
        }
        Sleep(Gamespeed);
    }

    return 0;
}
