#include "tetromino.h"

Tetromino::Tetromino(char c)
{
    color = c;
    switch (color)
    {
        case CHAR_I:
        tetromino = {{
                    {EMPTY, EMPTY, CHAR_I, EMPTY },
                    {EMPTY, EMPTY, CHAR_I, EMPTY },
                    {EMPTY, EMPTY, CHAR_I, EMPTY },
                    {EMPTY, EMPTY, CHAR_I, EMPTY },
                          }};
        break;
        default:
        tetromino = {{
                      {EMPTY, EMPTY, EMPTY, EMPTY },
                      {EMPTY, EMPTY, EMPTY, EMPTY },
                      {EMPTY, EMPTY, EMPTY, EMPTY },
                      {EMPTY, EMPTY, EMPTY, EMPTY },
                      }};
            break;
//#define char_T 'T';
//#define char_Z 'Z';
//#define char_S 'S';
//#define char_O 'O';
//#define char_J 'J';
//#define char_L 'L';
    }
}

char Tetromino::getChar()
{
    return color;
}
array<array<char, 4>, 4> Tetromino::getTetromino()
{
    return tetromino;
}

void Tetromino::setX(int x)
{
    t_X = x;
}
void Tetromino::setY(int y)
{
    t_Y = y;
}
int Tetromino::getX()
{
    return t_X;
}
int Tetromino::getY()
{
    return t_Y;
}
