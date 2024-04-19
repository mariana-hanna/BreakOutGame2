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
    QPixmap pixmap1("C:\\Users\\sarah\\Downloads\\paddle.jpg");
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

    // To show the blocks
    Block_Display();
}

void Game::Row_of_Blocks(int num)
{
    for (int i = 0; i < 5; i++)
    {
        Block* block = new Block();
        block->setPos(num,i*32);
        scene->addItem(block);
    }
}

void Game::Block_Display()
{
    for (int i = 0; i < 15; i++)
    {
        Row_of_Blocks(i*32);
    }
}
