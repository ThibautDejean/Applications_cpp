#include "colorchanger.h"

ColorChanger::ColorChanger(QObject *parent) : QObject(parent)
{
}

void ColorChanger::changeWidgetColor(QWidget *widget, const QString &backgroundColor, const QString &textColor, const QString &borderColor)
{
    QString styleSheet = QString("background-color: %1; color: %2; bordercolor: %3").arg(backgroundColor, textColor, borderColor);
    widget->setStyleSheet(styleSheet);
}

void ColorChanger::changeGridLayoutButtonColors(QGridLayout *layout, const QString &backgroundColor, const QString &textColor, const QString &borderColor)
{
    QString buttonStyleSheet = QString("QPushButton { background-color: %1; color: %2; borderColor :%3}").arg(backgroundColor, textColor, borderColor);

    for (int i = 0; i < layout->count(); ++i) {
        QLayoutItem *item = layout->itemAt(i);
        if (QWidget *widget = item->widget()) {
            if (QPushButton *button = qobject_cast<QPushButton *>(widget)) {
                button->setStyleSheet(buttonStyleSheet);
            }
        }
    }
}


