#include "area.h"

Area::Area(QWidget *parent) : QWidget(parent)
{
    pair = qMakePair(-1,-1);

    penLeft = new QPen(QBrush(QColor(Qt::GlobalColor(Qt::black))),3);
    penRight = new QPen(QBrush(QColor(Qt::GlobalColor(Qt::white))),3);
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
