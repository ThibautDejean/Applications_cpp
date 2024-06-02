#include "logic.h"

Logic::Logic(QLineEdit* display)
    : display(display), currentVal(0), result(0) {}

void Logic::onDigitPressed(QPushButton* button) {
    QString buttonText = button->text();
    double buttonValue = buttonText.toDouble();
    QString newLabel;

    if ((display->text().toDouble() == 0) && (display->text().length() == 1)) {
        newLabel = QString::number(buttonValue, 'g', 15);
    } else {
        newLabel = display->text() + buttonText;
    }
    display->setText(newLabel);
}

void Logic::onOperatorPressed(QPushButton* button) {
    pendingOperator = button->text();
    currentVal = display->text().toDouble();
    display->setText(pendingOperator);
}

void Logic::onDirectOperatorPressed(QPushButton* button) {
    directOperator = button->text();
    double displayVal = display->text().toDouble();
    if (directOperator == "exp") {
        result = exp(displayVal);
    } else if (directOperator == "+/-"){
        result = - displayVal;
    } else if (directOperator == "cos"){
        result = cos(displayVal);
    } else if (directOperator == "sin"){
        result = sin(displayVal);
    } else if (directOperator == "tan"){
        result = tan(displayVal);
    } else if (directOperator == "ln"){
        result = log(displayVal);
    } else if (directOperator == "cos-1"){
        result = acos(displayVal);
    } else if (directOperator == "sin-1"){
        result = asin(displayVal);
    } else if (directOperator == "tan-1"){
        result = atan(displayVal);
    } else if (directOperator == "log10"){
        result = log10(displayVal);
    }
    display->setText(QString::number(result));
}


void Logic::onVirgPressed(QPushButton* button) {
    QString currentText = display->text();
    if (!currentText.contains('.')) { // Ajouter un point seulement s'il n'y en a pas déjà
        display->setText(currentText + ".");
    }
}


void Logic::onEqualPressed() {
    double displayVal = display->text().toDouble();
    if (pendingOperator == "+") {
        result = currentVal + displayVal;
    } else if (pendingOperator == "-") {
        result = currentVal - displayVal;
    } else if (pendingOperator == "x") {
        result = currentVal * displayVal;
    } else if (pendingOperator == "/") {
        if (displayVal != 0) {
            result = currentVal / displayVal;
        } else {
            display->setText("Error");
            return;
        }
    } else if (pendingOperator == "+/-") {
        result = -displayVal;
    } else if (pendingOperator == "exp") {
        result = exp(displayVal);
    } else {
        result = displayVal;
    }

    display->setText(QString::number(result));
}

void Logic::onClearPressed() {
    display->setText("0");
    currentVal = 0.0;
    result = 0.0;
    pendingOperator = "";
}
