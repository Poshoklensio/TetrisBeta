#ifndef BOARD_H
#define BOARD_H

#include "tetromino.h"
#define rows 22
#define columns 10
#define cellSize 25
#include <QColor>

class Board
{
private:
    Tetromino *currentTetromino;
    Tetromino *nextTetromino;
public:
    Board();
    array<array<char,columns>,rows> board;
    void setCurrentTetromino(Tetromino *t);
    void setNextTetromino(Tetromino *t);
    Tetromino* getCurrentTetromino();
    Tetromino* getNextTetromino();
    char getCell(int x, int y);
    QColor getColor(char c);
    array<array<char,columns>,rows> getBoard();

};
#endif // BOARD_H
