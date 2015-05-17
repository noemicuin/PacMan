// ********************************************************
// FileName: Board.cpp
//
// Summary: This file includes the implementation for the Board class (defined
// in Board.h).
//
// Author: Salvador Ramirez
// Last Modified
//
//
// *******************************************************
#include "Board.h"
using namespace std;

Board::Board()
{
    score = 0;
}

void Board::setPosition(int x, int y, char symbol)
{
    Layout1[x][y] = symbol;
}

int Board::getScore()
{
    return score;
}

void Board::setScore(int score)
{
    this->score += score;
}


char Board::getLayout1(int x, int y)
{
    return Layout1[x][y];
}

void Board::MakeLayout1() // Pacman
{
    char tempLayout1[22][31] = {
	"##############################",
	"#.............##.............#",
	"#O####.######.##.######.####O#",
	"#.####.######.##.######.####.#",
	"#............................#",
	"#.####.#.############.#.####.#",
	"#..... #......##......#......#",
	"###.##.###### ## ######.##.###",
	"###.##.#              #.##.###",
	"###.##.# #####  ##### #.##.###",
	"###....                ....###",
	"###.##.# #####  ##### #.##.###",
	"###.##.#              #.##.###",
	"###.##.# ############ #.##.###",
	"#.............##.............#",
	"#.####.###### ## ######.####.#",
	"#O...#..................#...O#",
	"####.#.#.############.#.#.####",
    "#......#......##......#......#",
	"#.###########.##.###########.#",
	"#............................#",
	"##############################"
	};
	for(int i = 0; i < 22; i++)
    {
        for(int j = 0; j < 31; j++)
                Layout1[i][j] = tempLayout1[i][j];

    }
}
void Board::DisplayCounters()
{
    cout << "Score: " << score << endl;
}