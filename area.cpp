#include "area.h"

Area::Area(QWidget *parent) : QWidget(parent)
{
    pair = qMakePair(-1,-1);
    mode = emode::BRUSH;

    penLeft = new QPen(QBrush(QColor(Qt::GlobalColor(Qt::black))),3);
    penRight = new QPen(QBrush(QColor(Qt::GlobalColor(Qt::white))),3);
    currentPen = new QPen(*penLeft);
    lbl = new QLabel(this);
    pix = new QPixmap;

    *pix = QPixmap::fromImage(QImage(800,600,QImage::Format_ARGB32));

    //-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*
    setAutoFillBackground(true);
    setPalette(QPalette(QPalette::Background, Qt::white));
    setMinimumSize(800,600);

    lbl->setFrameStyle(QFrame::Box);
    lbl->setMinimumSize(this->minimumSize());

    QVBoxLayout layout(this);
    lbl->setPixmap(*pix);
    layout.addWidget(lbl);
}

void Area::mouseMoveEvent(QMouseEvent *event)
{
    if(mode != emode::BRUSH) return;
    if((pair.first != event->x() || pair.second != event->y()) && (pair.first != -1 && pair.second != -1))
    {
        QPainter paint(pix);
        paint.setPen(*currentPen);
        paint.drawLine(event->x(), event->y(), pair.first, pair.second);
    }
    pair= qMakePair(event->x(),event->y());
    QPainter paint(pix);
    paint.setPen(*currentPen);
    paint.drawPoint(event->x(),event->y());
    lbl->setPixmap(*pix);
}

void Area::mousePressEvent(QMouseEvent *event)
{
    if(mode != emode::FILL)
    {
        posX1 = event->x();
        posY1 = event->y();
    }
    if(event->button() == Qt::MouseButton(Qt::LeftButton))
        *currentPen = *penLeft;
    else
        *currentPen = *penRight;
}

void Area::mouseReleaseEvent(QMouseEvent *event)
{
    if(mode != emode::BRUSH)
    {
        posX2 = event->x();
        posY2 = event->y();
        QPainter paint(pix);
        paint.setPen(*currentPen);
        switch (mode) {
        case LINE:
            paint.drawLine(posX1,posY1,posX2,posY2);
            break;
        case RECTANGLE:
            paint.drawRect(posX1,posY1,posX2-posX1,posY2-posY1);
            break;
        case CIRCLE:
            paint.drawEllipse(posX1,posY1,posX2-posX1,posY2-posY1);
            break;
        case FILL:
            weMakeFillWithBlackjackAndHookers(event->x(),event->y(), pix->toImage().pixelColor(event->x(),event->y()));
            this->repaint();
            break;
        default:
            break;
        }
        lbl->setPixmap(*pix);
    }
    mode = emode::BRUSH;
    pair = qMakePair(-1,-1);
}

void Area::weMakeFillWithBlackjackAndHookers(int x, int y, QColor color)
{
    if(color == currentPen->color() || color != pix->toImage().pixelColor(x,y)) return;
    QPen pen(currentPen->brush(),1);
    QPainter paint(pix);
    paint.setPen(pen);
    paint.drawPoint(x,y);
    paint.end();
    if(x > 0) weMakeFillWithBlackjackAndHookers(x-1,y,color);
    if(x < pix->height() - 1) weMakeFillWithBlackjackAndHookers(x+1,y,color);
    if(y > 0) weMakeFillWithBlackjackAndHookers(x,y-1,color);
    if(y < pix->width() - 1) weMakeFillWithBlackjackAndHookers(x,y+1,color);
}
