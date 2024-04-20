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

    //Display the blocks
    Block_Display();
}


//Block_Display function definition
void Game::Block_Display()
{
    int num=0;

    //to form 8 rows each containing 15 blocks
    for (int i = 0; i < 8; i++)
    {
        for (int j=0; j<15;j++)
        {
            Block * block= new Block();

            //since the y value is the same for the blocks in the same row
            // and each block has a width of 30.
            block->setPos(j*32,num);
            scene->addItem(block);
        }

        //since the height of each block is 30
        //and we want the block in the next row to be exactly under it.
        num+=30;
    }
}




