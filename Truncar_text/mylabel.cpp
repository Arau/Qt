#include "mylabel.h"

MyLabel::MyLabel(QWidget* parent)
    :QLabel(parent)
{
}

void MyLabel::updateText(QString text)   {
    this->text = text;
    truncateText(this->truncate);
}

void MyLabel::truncateText(int num_chars) {
        if (num_chars != this->truncate)
            this->truncate = num_chars;

        QString out = this->text;
        out.truncate(num_chars);
        this->setText(out);
}
