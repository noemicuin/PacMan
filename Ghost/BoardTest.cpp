#include "BoardTest.h"
GameBoard::GameBoard()
{
    isDotVisible = false;
    symbol = ' ';
}

void GameBoard::setDotVisible(bool isDotVisible)
{
    this->isDotVisible = isDotVisible;
}

void GameBoard::setSymbol(char symbol)
{
    this->symbol = symbol;
}
