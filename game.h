#ifndef GAME_H
#define GAME_H

#include <QGraphicsView>
#include <QGraphicsScene>
#include "score.h"
#include "health.h"

class Game: public QGraphicsView{
public:
    Game(QWidget* parent=NULL);
    Score * score;

    Health * health;

    void start();
    void createBlockCol(double x);
    void creatBlockGrid();

    QGraphicsScene* scene;

};

#endif // GAME_H
