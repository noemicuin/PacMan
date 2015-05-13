#ifndef BOARDTEST_H_INCLUDED
#define BOARDTEST_H_INCLUDED


class GameBoard
{
    private:
        char symbol;
        bool isDotVisible;
    public:

        GameBoard();
        void setSymbol(char symbol);
        void setDotVisible(bool isDotVisible);

        char getSymbol() const {return symbol;}
        bool getDotVisible() const {return isDotVisible;}
};

#endif // BOARDTEST_H_INCLUDED
