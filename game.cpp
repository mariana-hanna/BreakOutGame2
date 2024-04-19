#include "Game.h"
#include "Ball.h"
#include "Paddle.h"
#include "Block.h"
#include <QPixmap>

Game::Game(QWidget *parent): QGraphicsView(parent){
    // initialize scene
    scene = new QGraphicsScene(0,0,375,650);
    setScene(scene);


}

void Game::start(){
    // create a ball
    Ball* ball = new Ball();
    ball->setPos(200,500);
    scene->addItem(ball);

    // create a paddle ;)
    Paddle* paddle = new Paddle();
    QPixmap pixmap1("C:/Users/Abdalrahman/OneDrive/Documents/breakk/paddle.png");
    pixmap1 = pixmap1.scaledToWidth(50);
    pixmap1 = pixmap1.scaledToHeight(50);
    paddle->setPixmap(pixmap1);
    paddle->setPos(150,550);
    scene->addItem(paddle);
    paddle->setFlags(QGraphicsItem::ItemIsFocusable);
    paddle->setFocus();

    // adding score
    score = new Score();
    score->setPos(50,600);
    scene->addItem(score);

    // adding health
    health = new Health();
    health->setPos(200,600);
    scene->addItem(health);

    // create the blocks grid
    creatBlockGrid();
}

void Game::createBlockCol(double x){
    for (size_t i = 0, n = 5; i < n; ++i){
        Block* block = new Block();
        block->setPos(x,i*52); // 2 space b/w blocks (50 height of block)
        scene->addItem(block);
    }
}

void Game::creatBlockGrid(){
    for (size_t i = 0, n = 7; i < n; ++i){
        createBlockCol(i*52);
    }
}
