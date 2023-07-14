#ifndef BOARD_H
#define BOARD_H
#include "tetromino.h"
#define rows 22
#define columns 10
#define cellSize 25
#include <QPainter>

class Board
{
private:
    array<array<char,columns>,rows> board;
    Tetromino *currentTetromino;
    Tetromino *nextTetromino;
public:
    Board();
    void setCurrentTetromino(Tetromino *t);
    void setNextTetromino(Tetromino *t);
    Tetromino* getCurrentTetromino();
    Tetromino* getNextTetromino();
    char getCell(int x, int y);
    QColor getColor(char c);
    array<array<char,columns>,rows> getBoard();

};

#endif // BOARD_H
