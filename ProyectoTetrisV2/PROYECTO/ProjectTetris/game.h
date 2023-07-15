#ifndef GAME_H
#define GAME_H


class Game : public QGraphicsView
{
private:
    Board *board;
    int topMargin;
    int leftMargin;
public:
    Game(QWidget *parent=0);
    QGraphicsScene *scene;
    void start();
    void drawBlock(int x, int y, QColor color);
    void drawBoard();
};
#endif // GAME_H
