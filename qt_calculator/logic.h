#ifndef LOGIC_H
#define LOGIC_H

#include <QString>
#include <QPushButton>
#include <QLineEdit>

class Logic {
public:
    Logic(QLineEdit* display);

    void onDigitPressed(QPushButton* button);
    void onOperatorPressed(QPushButton* button);
    void onDirectOperatorPressed(QPushButton* button);
    void onVirgPressed(QPushButton* button);
    void onEqualPressed();
    void onClearPressed();


private:
    QLineEdit* display;
    double currentVal;
    double result;
    QString pendingOperator;
    QString directOperator;
};

#endif // LOGIC_H
