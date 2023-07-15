#include "board.h"

Board::Board()
{
    for (int i=0; i<rows; i++)
        board.at(i).fill(EMPTY);
}

void Board::setCurrentTetromino(Tetromino *t)
{
    currentTetromino = t;
}

void Board::setNextTetromino(Tetromino *t)
{
    nextTetromino = t;
}

Tetromino* Board::getCurrentTetromino()
{
    return currentTetromino;
}
Tetromino* Board::getNextTetromino()
{
    return nextTetromino;
}

char Board::getCell(int x, int y)
{
    char color = board.at(y).at(x);
    if (x >= currentTetromino->getX() && x < currentTetromino->getX()+4 &&
        y >= currentTetromino->getY() && y < currentTetromino->getX()+4)
    {
        color = currentTetromino->getTetromino().at(y-currentTetromino->getY()).at(x-currentTetromino->getX());
        if (color == EMPTY )
        {
            color = board.at(y).at(x);
        }
    }
    return color;
}

QColor Board::getColor(char c)
{
    switch (c)
    {
    case 'O': return Qt::yellow;
    case 'I': return Qt::cyan;
    case 'S': return Qt::red;
    case 'Z': return Qt::green;
    case 'L': return QColor(255,165,0);
    case 'J': return QColor(255,192,203);
    case 'T': return Qt::magenta;
    default: return Qt::blue;
    }
}

array<array<char, 10>, 22> Board::getBoard()
{
    return board;
}
