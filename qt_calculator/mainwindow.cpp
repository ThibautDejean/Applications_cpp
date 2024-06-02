#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->display->setText("0");
    logic = new Logic(ui->display);

    //sthis->setStyleSheet("QMainWindow { background-color: #FFFFFF; }"); // Gris clair

    // Digits Buttons
    connect(ui->Button0, &QPushButton::clicked, this, [this]() { logic->onDigitPressed(ui->Button0); });
    connect(ui->Button1, &QPushButton::clicked, this, [this]() { logic->onDigitPressed(ui->Button1); });
    connect(ui->Button2, &QPushButton::clicked, this, [this]() { logic->onDigitPressed(ui->Button2); });
    connect(ui->Button3, &QPushButton::clicked, this, [this]() { logic->onDigitPressed(ui->Button3); });
    connect(ui->Button4, &QPushButton::clicked, this, [this]() { logic->onDigitPressed(ui->Button4); });
    connect(ui->Button5, &QPushButton::clicked, this, [this]() { logic->onDigitPressed(ui->Button5); });
    connect(ui->Button6, &QPushButton::clicked, this, [this]() { logic->onDigitPressed(ui->Button6); });
    connect(ui->Button7, &QPushButton::clicked, this, [this]() { logic->onDigitPressed(ui->Button7); });
    connect(ui->Button8, &QPushButton::clicked, this, [this]() { logic->onDigitPressed(ui->Button8); });
    connect(ui->Button9, &QPushButton::clicked, this, [this]() { logic->onDigitPressed(ui->Button9); });

    // Comma Button
    connect(ui->virgButton, &QPushButton::clicked, this, [this]() { logic->onVirgPressed(ui->virgButton); });

    // Operators Buttons
    connect(ui->plusButton, &QPushButton::clicked, this, [this]() { logic->onOperatorPressed(ui->plusButton); });
    connect(ui->minusButton, &QPushButton::clicked, this, [this]() { logic->onOperatorPressed(ui->minusButton); });
    connect(ui->timesButton, &QPushButton::clicked, this, [this]() { logic->onOperatorPressed(ui->timesButton); });
    connect(ui->divideButton, &QPushButton::clicked, this, [this]() { logic->onOperatorPressed(ui->divideButton); });

    // Direct Operators Buttons
    connect(ui->negButton, &QPushButton::clicked, this, [this]() { logic->onDirectOperatorPressed(ui->negButton); });
    connect(ui->expButton, &QPushButton::clicked, this, [this]() { logic->onDirectOperatorPressed(ui->expButton); });

    // Equal Button
    connect(ui->equalButton, &QPushButton::clicked, this, [this]() { logic->onEqualPressed(); });

    // Clear Button
    connect(ui->ClearButton, &QPushButton::clicked, this, [this]() { logic->onClearPressed(); });

    // Top Buttons
    connect(ui->expandButton, &QPushButton::clicked, this, &MainWindow::onExpandButtonClicked);
    connect(ui->colorsButton, &QPushButton::clicked, this, &MainWindow::onColorsButtonClicked);
    connect(ui->closeButton, &QPushButton::clicked, this, &MainWindow::onCloseButtonClicked);
}

MainWindow::~MainWindow()
{
    delete ui;
    delete logic;
    delete colorChanger;
}

void MainWindow::onExpandButtonClicked() {
    if (isExpanded) {
        // Réduire la fenêtre
        this->resize(356, 462);
        ui->expandButton->setText("Expand");

        // Supprimer les nouveaux boutons
        for (int row = 1; row <= 4; ++row) {
            for (int col = 4; col <= 5; ++col) {
                QWidget *widget = ui->gridLayout->itemAtPosition(row, col)->widget();
                if (widget) {
                    ui->gridLayout->removeWidget(widget);
                    delete widget;
                }
            }
        }
    } else {
        // Agrandir la fenêtre
        this->resize(702, 462);
        ui->expandButton->setText("Shrink");

        // Ajouter de nouveaux boutons
        QPushButton *cosButton = new QPushButton("cos", this);
        QPushButton *sinButton = new QPushButton("sin", this);
        QPushButton *tanButton = new QPushButton("tan", this);
        QPushButton *lnButton = new QPushButton("ln", this);
        QPushButton *acosButton = new QPushButton("cos-1", this);
        QPushButton *asinButton = new QPushButton("sin-1", this);
        QPushButton *atanButton = new QPushButton("tan-1", this);
        QPushButton *logButton = new QPushButton("log10", this);

        ui->gridLayout->addWidget(cosButton, 1, 4);
        ui->gridLayout->addWidget(sinButton, 2, 4);
        ui->gridLayout->addWidget(tanButton, 3, 4);
        ui->gridLayout->addWidget(lnButton, 4, 4);
        ui->gridLayout->addWidget(acosButton, 1, 5);
        ui->gridLayout->addWidget(asinButton, 2, 5);
        ui->gridLayout->addWidget(atanButton, 3, 5);
        ui->gridLayout->addWidget(logButton, 4, 5);

        // Appliquer le style basé sur isWhite
        QString buttonBackgroundColor = isWhite ? "#FFFFFF" : "#B271FF";
        QString buttonTextColor = isWhite ? "#000000" : "#FFFFFF";
        QString buttonBorderColor = isWhite ? "#000000" : "#FFFFFF";

        cosButton->setStyleSheet(QString("background-color: %1; color: %2; border: 2px solid %3;").arg(buttonBackgroundColor, buttonTextColor, buttonBorderColor));
        sinButton->setStyleSheet(QString("background-color: %1; color: %2; border: 2px solid %3;").arg(buttonBackgroundColor, buttonTextColor, buttonBorderColor));
        tanButton->setStyleSheet(QString("background-color: %1; color: %2; border: 2px solid %3;").arg(buttonBackgroundColor, buttonTextColor, buttonBorderColor));
        lnButton->setStyleSheet(QString("background-color: %1; color: %2; border: 2px solid %3;").arg(buttonBackgroundColor, buttonTextColor, buttonBorderColor));
        acosButton->setStyleSheet(QString("background-color: %1; color: %2; border: 2px solid %3;").arg(buttonBackgroundColor, buttonTextColor, buttonBorderColor));
        asinButton->setStyleSheet(QString("background-color: %1; color: %2; border: 2px solid %3;").arg(buttonBackgroundColor, buttonTextColor, buttonBorderColor));
        atanButton->setStyleSheet(QString("background-color: %1; color: %2; border: 2px solid %3;").arg(buttonBackgroundColor, buttonTextColor, buttonBorderColor));
        logButton->setStyleSheet(QString("background-color: %1; color: %2; border: 2px solid %3;").arg(buttonBackgroundColor, buttonTextColor, buttonBorderColor));

        // Connecter les nouveaux boutons
        connect(cosButton, &QPushButton::clicked, this, [this, cosButton]() {
            logic->onDirectOperatorPressed(cosButton);
        });
        connect(sinButton, &QPushButton::clicked, this, [this, sinButton]() {
            logic->onDirectOperatorPressed(sinButton);
        });
        connect(tanButton, &QPushButton::clicked, this, [this, tanButton]() {
            logic->onDirectOperatorPressed(tanButton);
        });
        connect(lnButton, &QPushButton::clicked, this, [this, lnButton]() {
            logic->onDirectOperatorPressed(lnButton);
        });
        connect(acosButton, &QPushButton::clicked, this, [this, acosButton]() {
            logic->onDirectOperatorPressed(acosButton);
        });
        connect(asinButton, &QPushButton::clicked, this, [this, asinButton]() {
            logic->onDirectOperatorPressed(asinButton);
        });
        connect(atanButton, &QPushButton::clicked, this, [this, atanButton]() {
            logic->onDirectOperatorPressed(atanButton);
        });
        connect(logButton, &QPushButton::clicked, this, [this, logButton]() {
            logic->onDirectOperatorPressed(logButton);
        });
    }
    isExpanded = !isExpanded;
}



void MainWindow::onCloseButtonClicked() {
    close();
}

void MainWindow::onColorsButtonClicked() {
    if (isWhite) {
        colorChanger->changeWidgetColor(ui->display, "#000000", "#FFFFFF", "#FFFFFF");
        colorChanger->changeGridLayoutButtonColors(ui->gridLayout, "#B271FF", "#FFFFFF", "#FFFFFF");
    } else {
        colorChanger->changeWidgetColor(ui->display, "#FFFFFF", "#000000", "2px solid #FFFFFF"); // Display bar
        colorChanger->changeGridLayoutButtonColors(ui->gridLayout, "#FFFFFF", "#000000", "#000000"); // Number Buttons Colors
    }
    isWhite = !isWhite;

    // Mettre à jour les nouveaux boutons s'ils existent
    QList<QPushButton*> buttons = this->findChildren<QPushButton*>();
    QString buttonBackgroundColor = isWhite ? "#FFFFFF" : "#B271FF";
    QString buttonTextColor = isWhite ? "#000000" : "#FFFFFF";
    QString buttonBorderColor = isWhite ? "#000000" : "#FFFFFF";

    for (QPushButton* button : buttons) {
        if (button->text() == "cos" || button->text() == "sin" || button->text() == "tan" ||
            button->text() == "ln" || button->text() == "cos-1" || button->text() == "sin-1" ||
            button->text() == "tan-1" || button->text() == "log10") {
            button->setStyleSheet(QString("background-color: %1; color: %2;")
                                      .arg(buttonBackgroundColor, buttonTextColor));
        }
    }
}




