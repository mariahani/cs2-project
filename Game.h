#ifndef GAME_H
#define GAME_H
#include<QFile>
#include<QTextStream>
#include<QGraphicsScene>
#include<QWidget>
#include<QGraphicsView>


class Game: public QGraphicsView {
private:

    int arrayOfMap[10][10];

public:
    Game(QWidget *parent =0 );
    QGraphicsScene *scene;
    void startGame();
    void gameOver();
    void nextLevel();

};
#endif // GAME_H
