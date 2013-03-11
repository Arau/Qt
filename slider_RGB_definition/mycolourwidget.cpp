#include "mycolourwidget.h"

MyColourWidget::MyColourWidget(QWidget* parent)
    :QWidget(parent)
{
    this->setStyleSheet( "background-color: #000" );
    red = 0;
    green = 0;
    blue = 0;
}


void MyColourWidget::changeColor() {

    this->setVisible(true);


    QString back = "background-color: rgb(";
    QString coma = ",";
    QString end = ")";

    char  red[21], green[21], blue[21];

    sprintf(red,  "%d", this->red);
    sprintf(green,"%d", this->green);
    sprintf(blue, "%d", this->blue);

    back += red;   back += coma;
    back += green; back += coma;
    back += blue;  back += end;


    this->setStyleSheet(back);
}

void MyColourWidget::paintEvent(QPaintEvent *event) {
    QWidget::paintEvent(event);
    QStyleOption opt;
    opt.init(this);
    QPainter p(this);
    style()->drawPrimitive(QStyle::PE_Widget, &opt,&p, this);
}

void MyColourWidget::saveRed(int value)  {  this->red   = value;}
void MyColourWidget::saveGreen(int value){  this->green = value;}
void MyColourWidget::saveBlue(int value) {  this->blue  = value;}
