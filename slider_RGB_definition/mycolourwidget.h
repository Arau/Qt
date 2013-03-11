#ifndef MYCOLOURWIDGET_H
#define MYCOLOURWIDGET_H


#include <iostream>
using namespace std;

#include <QWidget>
#include <QStyleOption>
#include <QPainter>
#include <QString>
#include <stdio.h>

class MyColourWidget: public QWidget
{

    Q_OBJECT

private:
    int red, green, blue;

public:
    MyColourWidget(QWidget* parent);
    void paintEvent(QPaintEvent *event);

public slots:
    void changeColor();
    void saveRed(int value);
    void saveGreen(int value);
    void saveBlue(int value);
};

#endif // MYCOLOURWIDGET_H
