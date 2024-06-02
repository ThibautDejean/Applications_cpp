#ifndef COLORCHANGER_H
#define COLORCHANGER_H

#include <QObject>
#include <QWidget>
#include <QGridLayout>
#include <QPushButton>

class ColorChanger : public QObject
{
    Q_OBJECT

public:
    explicit ColorChanger(QObject *parent = nullptr);

    void changeWidgetColor(QWidget *widget, const QString &backgroundColor, const QString &textColor, const QString &borderColor);
    void changeGridLayoutButtonColors(QGridLayout *layout, const QString &backgroundColor, const QString &textColor, const QString &borderColor);
    void changeWindowBackgroundColor(QWidget *window, const QString &backgroundColor);


signals:

public slots:
};

#endif // COLORCHANGER_H
