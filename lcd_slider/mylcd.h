#ifndef MYLCD_H
#define MYLCD_H

#include <QLCDNumber>
#include <QPalette>

class MyLCD : public QLCDNumber
{
    Q_OBJECT
public:
    MyLCD(QWidget *parent = 0);
    
    
public slots:
    void setGreenZero();
    void setSliderValue(int number);

    
};

#endif // MYLCD_H
