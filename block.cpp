#include "Block.h"
#include <QBrush>

//block class inhertits from the QGraphicsRectItem class
Block::Block(QGraphicsItem *parent): QGraphicsRectItem(parent){

    //draw the blocks
    setRect(0,0,30,30);

    //creating the brush
    QBrush brush;
    setBrush(brush);
    brush.setStyle(Qt::SolidPattern);
    brush.setColor(Qt::red);

}
