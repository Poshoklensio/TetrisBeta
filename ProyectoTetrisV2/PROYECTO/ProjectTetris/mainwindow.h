#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <board.h>
#include <QGraphicsRectItem>
#include <QGraphicsView>
#include <QGraphicsRectItem>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QGraphicsView
{
    Q_OBJECT
public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
    QGraphicsScene *scene;
    void start();
    void drawBlock(int x, int y, QColor color);
    void drawBoard();
private:
    Ui::MainWindow *ui;
    Board *board;
    int topMargin;
    int leftMargin;

};
#endif // MAINWINDOW_H
