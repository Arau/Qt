#include "mylcd.h"

MyLCD::MyLCD(QWidget *parent)
    :QLCDNumber(parent)
{
   this->setStyleSheet("background-color: white"); 	
}	

void MyLCD::setGreenZero() {
    QPalette *palette = new QPalette;
    palette->setColor(QPalette::WindowText, QColor(0, 250, 0));
    this->setPalette(*palette);
    this->display(0);
}

void MyLCD::setSliderValue(int number){
    QPalette *palette = new QPalette;
    if (number == 0) {
        palette->setColor(QPalette::WindowText, QColor(0, 250, 0));
    }
    else if (number%2 != 0) {
        // Draw red number
        palette->setColor(QPalette::WindowText, QColor(250, 0, 0));
    }
    else {
        // Draw blue number
        palette->setColor(QPalette::WindowText, QColor(0, 0, 250));
    }
    this->setPalette(*palette);
    this->display(number);
}
