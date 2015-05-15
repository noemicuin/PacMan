// ********************************************************
// FileName: Board.cpp
//
// Summary: This file includes the implementation for the Board class (defined
// in Board.h).
//
// Author: Salvador Ramirez
// Last Modified
// *******************************************************
#include "Board.h"
using namespace std;

Board::Board()
{
    score = 0;
    life = 0;
}

void Board::setPosition(int x, int y, char symbol)
{
    Layout1[x][y] = symbol;
}
string Board::getPosition(int x)
{
    return Layout1[x];
}

int Board::getScore()
{
    return score;
}

int Board::getLife()
{
    return life;
}

void Board::setScore(int score)
{
    this->score = score;
}

void Board::setLife(int life)
{
    this->life = life;
}

char Board::getLayout1(int x, int y)
{
    return Layout1[x][y];
}


void Board::setLayout1()
{
    char tempLayout1[22][31] = {
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
	"######.#              #.######",
	"######.# ############ #.######",
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
        {
            Layout1[i][j] = tempLayout1[i][j];

        }
    }

}

void Board::DisplayCounters()
{
    cout << "Score: " << score << endl;
    cout << "Lives: " << life << endl;
}
