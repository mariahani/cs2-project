#include<QTextStream>
#include<QString>
#include<QWidget>
#include<QGraphicsScene>
#include<QGraphicsRectItem>
#include<QBrush>
#include<QGraphicsView>
#include"Game.h"
#include<QtAssert>

Game::Game(QWidget* parent) : QGraphicsView(parent) {
    setFixedSize(1000, 1000);

    scene = new QGraphicsScene;
    scene->setSceneRect(0, 0, 1000, 1000);
    setScene(scene);
    setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
    setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);

    QFile file(":/textFile/gameTextFile.txt");
    if (!file.open(QFile::ReadOnly | QFile::Text)) {
        return;
    }

    QTextStream inputFile(&file);
    QString text = inputFile.readAll();
    file.close();

    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            int x = text[i * 10 + j].digitValue();
            arrayOfMap[i][j] = x;
        }
    }

    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            QGraphicsRectItem* item = new QGraphicsRectItem(j * 100, i * 100, 100, 100);
            switch (arrayOfMap[i][j]) {
            case 0: {
                QBrush greenBrush(Qt::green);
                item->setBrush(greenBrush);
                break;
            }
            case 1: {
                QBrush yellowBrush(Qt::yellow);
                item->setBrush(yellowBrush);
                break;
            }
            case 2: {
                QBrush grayBrush(Qt::gray);
                item->setBrush(grayBrush);
                break;
            }
            case 3: {
                QBrush redBrush(Qt::red);
                item->setBrush(redBrush);
                break;
            }
            default:
                break;
            }
            scene->addItem(item);
        }
    }
}




