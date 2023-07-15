#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
{
    topMargin = 3*cellSize;
    leftMargin = cellSize;

    setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
    setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
    setFixedSize(300,650);

    // create scene
    scene = new QGraphicsScene();
    scene->setSceneRect(0,0,300,650);
    setScene(scene);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::start()
{

    //crear board
    board = new Board();


    // board->getBoard().at(10).at(10) = 'J';
    // drawBoard();


    drawBoard();
    // show view`
    show();
}

void MainWindow::drawBlock(int x, int y, QColor color)
{
    QGraphicsRectItem *block = new QGraphicsRectItem(x, y, cellSize, cellSize);
    block->setBrush(color);
    scene->addItem(block);
}

void MainWindow::drawBoard()
{
    QGraphicsRectItem *tablero = new QGraphicsRectItem(leftMargin,topMargin, cellSize*columns, cellSize*rows);
    tablero->setBrush(Qt::black);
    scene->addItem(tablero);

        board->board.at(19).at(9) = 'J';
        board->board.at(19).at(8) = 'J';
        board->board.at(19).at(7) = 'J';
        board->board.at(19).at(6) = 'J';

    for (int i=0; i<rows; i++)
    {
        for (int j=0; j<columns; j++)
        {
            if (board->getCell(j,i) != EMPTY)
            //{
                drawBlock(leftMargin+j*cellSize,topMargin+i*cellSize,board->getColor(board->getCell(j, i)));
            //}

        }
    }
}
