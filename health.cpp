#include "health.h"
#include <QFont>
#include "Score.h"
#include "Game.h"
#include <QMessageBox>
extern Game * game;

Health::Health(QGraphicsTextItem *parent): QGraphicsTextItem(parent){
    health = 3;
    setPlainText(QString("Health: ") + QString::number(health));
    setDefaultTextColor(Qt::red);
    setFont(QFont("times", 16));
}

void Health::decrease(){
    if (health < 1){

        QMessageBox * msg = new QMessageBox;
        msg->setText(QString("Game Over! Final Score: ") + QString::number(game->score->getScore()));
        msg->setWindowTitle(QString("Game Over!"));
        msg->exec();

    }
    else{
        health--;
        setPlainText(QString("Health: ") + QString::number(health));
    }
}

int Health::gethealth(){
    return health;
}
