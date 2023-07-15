#ifndef TETROMINO_H
#define TETROMINO_H
#define CHAR_I 'I'
#define CHAR_T 'T'
#define CHAR_Z 'Z'
#define CHAR_S 'S'
#define CHAR_O 'O'
#define CHAR_J 'J'
#define CHAR_L 'L'
#define EMPTY '.'

#include <array>
using namespace std;

class Tetromino
{
private:
    int t_X;
    int t_Y;
    char color;
    array<array<char,4>,4> tetromino;
public:
    Tetromino(char c);
    array<array<char,4>,4> getTetromino();
    char getChar();
    void setX(int x);
    void setY(int y);
    int getX();
    int getY();
};

#endif // TETROMINO_H
