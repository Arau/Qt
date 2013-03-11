#include <iostream>
using namespace std;
#include <QStyleOption>
#include <QString>
#include <stdio.h>

#include <QWidget>
#include <QLabel>


class MyLabel: public QLabel
{

    Q_OBJECT

private:
    QString text;
    int truncate;

public:
    MyLabel(QWidget* parent);

public slots:
    void updateText(QString text);
    void truncateText(int num_chars);
};
