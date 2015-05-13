// ********************************************************
// FileName:
//
// Summary:
//
//
// Author: Salvador Ramirez
// Last Modified
//
//
// *******************************************************

#include "BoardTest.h"
#include <iostream>


using namespace std;

int main()
{
    GameBoard board[22][31];
    


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
	"#..#########..##..##########.#",
	"#............................#",
	"##############################"
	};

	for(int i = 0; i < 22; i++)
    {
        for(int j = 0; j < 31; j++)
        {
             board[i][j].setSymbol(tempLayout1[i][j]);
             if(board[i][j].getSymbol() == '.' || board[i][j].getSymbol() == 'O')// pink comment
                board[i][j].setDotVisible(true);
             else
                board[i][j].setDotVisible(false);

            if(board[i][j].getDotVisible() == true)
                cout << ' ';
            else
                cout << board[i][j].getSymbol();
        }
        cout << endl;
    }



    /*
    Board board;
    board.getLayout1();

    board.setLayout1();
    board.placeGhost(13, 13);

    for(int i = 0; i < 22; i++)
    {
            for(int j = 0; j < 31 ; j++)
        {
            cout << board.getPosition(i,j);
        }
        cout << endl;
    }
    //board.setScore(0);
    //board.getScore();
    board.DisplayCounters();
    */


}
