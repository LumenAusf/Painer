#ifndef AREA_H
#define AREA_H

#include <QtWidgets>

class Area : public QWidget
{
    Q_OBJECT
    QLabel * lbl;                                       //Здесь выводится QPixmap
    QPixmap * pix;                                      //Непосредственно QPixmap для рисования
    QPen * penLeft, * penRight, * currentPen;           //Кисти
    QPair<int,int> pair;                                //Пара для непрерывного рисования
    enum emode {BRUSH, RECTANGLE, CIRCLE, LINE, FILL};  //Режим рисования
    emode mode;                                         //Текущий режим
    int posX1, posX2, posY1, posY2;                     //Переменные для отрисовки фигур

public:
    explicit Area(QWidget *parent = 0);
    void mouseMoveEvent(QMouseEvent *event);
    void mousePressEvent(QMouseEvent *event);
    void mouseReleaseEvent(QMouseEvent *event);
    void weMakeFillWithBlackjackAndHookers(int x, int y, QColor color = Qt::white);

signals:

public slots:
};

#endif // AREA_H
