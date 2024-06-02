/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.7.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QGridLayout *gridLayout_3;
    QGridLayout *params;
    QPushButton *expandButton;
    QPushButton *colorsButton;
    QPushButton *closeButton;
    QGridLayout *gridLayout;
    QPushButton *expButton;
    QPushButton *Button1;
    QPushButton *divideButton;
    QPushButton *minusButton;
    QPushButton *Button9;
    QPushButton *Button4;
    QPushButton *ClearButton;
    QPushButton *Button3;
    QPushButton *Button2;
    QPushButton *timesButton;
    QPushButton *equalButton;
    QPushButton *virgButton;
    QPushButton *Button8;
    QLineEdit *display;
    QPushButton *Button6;
    QPushButton *Button7;
    QPushButton *Button5;
    QPushButton *plusButton;
    QPushButton *negButton;
    QPushButton *Button0;
    QMenuBar *menubar;
    QStatusBar *statusbar;
    QToolBar *toolBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(356, 462);
        MainWindow->setStyleSheet(QString::fromUtf8("QMainWindow {\n"
"    background-color: rgb(0, 0, 0); /* Bleu clair */\n"
"}\n"
"QPushButton {\n"
"    background-color: rgb(178, 113, 255); /* Couleur de fond bleue */\n"
"    color: white; /* Couleur du texte blanche */\n"
"	font: 13pt \"Helvetica\";\n"
"    border: none;\n"
"    padding: 10px;\n"
"    text-align: center;\n"
"    text-decoration: none;\n"
"    display: inline-block;\n"
"    font-size: 16px;\n"
"    margin: 4px 2px;\n"
"    transition-duration: 0.4s;\n"
"    cursor: pointer;\n"
"	border-radius: 5px;\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"    background-color: white; /* Couleur de fond blanche au survol */\n"
"    color: black; /* Couleur du texte noire au survol */\n"
"	border: 1px solid black;\n"
"}\n"
"\n"
"QLineEdit {\n"
"    background-color: black; /* Couleur de fond blanche */\n"
"    color: white; /* Couleur du texte noire */\n"
"    border: 1px solid white; /* Contour noir de 2 pixels */\n"
"    padding: 5px;\n"
"    font-size: 16px;\n"
"    selection-background-color: #4CAF50; /* Cou"
                        "leur de fond de la s\303\251lection\n"
" */\n"
"	border-radius: 5px;\n"
"    selection-color: blue; /* Couleur du texte de la s\303\251lection */\n"
"    caret-color: red; /* Couleur du curseur clignotant */\n"
"}\n"
""));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        gridLayout_3 = new QGridLayout(centralwidget);
        gridLayout_3->setObjectName("gridLayout_3");
        params = new QGridLayout();
        params->setObjectName("params");
        expandButton = new QPushButton(centralwidget);
        expandButton->setObjectName("expandButton");
        expandButton->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: rgb(82, 187, 51); /* Couleur de fond bleue */\n"
"    color: white; /* Couleur du texte blanche */\n"
"}"));

        params->addWidget(expandButton, 0, 0, 1, 1);

        colorsButton = new QPushButton(centralwidget);
        colorsButton->setObjectName("colorsButton");
        colorsButton->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: rgb(234, 220, 74); /* Couleur de fond bleue */\n"
"    color: white; /* Couleur du texte blanche */\n"
"}"));

        params->addWidget(colorsButton, 0, 1, 1, 1);

        closeButton = new QPushButton(centralwidget);
        closeButton->setObjectName("closeButton");
        closeButton->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: rgb(255, 90, 43); /* Couleur de fond bleue */\n"
"    color: white; /* Couleur du texte blanche */\n"
"}"));

        params->addWidget(closeButton, 0, 2, 1, 1);


        gridLayout_3->addLayout(params, 0, 0, 1, 1);

        gridLayout = new QGridLayout();
        gridLayout->setObjectName("gridLayout");
        expButton = new QPushButton(centralwidget);
        expButton->setObjectName("expButton");

        gridLayout->addWidget(expButton, 1, 1, 1, 1);

        Button1 = new QPushButton(centralwidget);
        Button1->setObjectName("Button1");

        gridLayout->addWidget(Button1, 4, 0, 1, 1);

        divideButton = new QPushButton(centralwidget);
        divideButton->setObjectName("divideButton");

        gridLayout->addWidget(divideButton, 4, 3, 1, 1);

        minusButton = new QPushButton(centralwidget);
        minusButton->setObjectName("minusButton");

        gridLayout->addWidget(minusButton, 2, 3, 1, 1);

        Button9 = new QPushButton(centralwidget);
        Button9->setObjectName("Button9");

        gridLayout->addWidget(Button9, 2, 2, 1, 1);

        Button4 = new QPushButton(centralwidget);
        Button4->setObjectName("Button4");

        gridLayout->addWidget(Button4, 3, 0, 1, 1);

        ClearButton = new QPushButton(centralwidget);
        ClearButton->setObjectName("ClearButton");

        gridLayout->addWidget(ClearButton, 1, 0, 1, 1);

        Button3 = new QPushButton(centralwidget);
        Button3->setObjectName("Button3");

        gridLayout->addWidget(Button3, 4, 2, 1, 1);

        Button2 = new QPushButton(centralwidget);
        Button2->setObjectName("Button2");

        gridLayout->addWidget(Button2, 4, 1, 1, 1);

        timesButton = new QPushButton(centralwidget);
        timesButton->setObjectName("timesButton");

        gridLayout->addWidget(timesButton, 3, 3, 1, 1);

        equalButton = new QPushButton(centralwidget);
        equalButton->setObjectName("equalButton");

        gridLayout->addWidget(equalButton, 5, 3, 1, 1);

        virgButton = new QPushButton(centralwidget);
        virgButton->setObjectName("virgButton");

        gridLayout->addWidget(virgButton, 5, 2, 1, 1);

        Button8 = new QPushButton(centralwidget);
        Button8->setObjectName("Button8");

        gridLayout->addWidget(Button8, 2, 1, 1, 1);

        display = new QLineEdit(centralwidget);
        display->setObjectName("display");
        QFont font;
        font.setFamilies({QString::fromUtf8(".AppleSystemUIFont")});
        font.setKerning(true);
        display->setFont(font);
        display->setLayoutDirection(Qt::RightToLeft);
        display->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        display->setReadOnly(true);

        gridLayout->addWidget(display, 0, 0, 1, 4);

        Button6 = new QPushButton(centralwidget);
        Button6->setObjectName("Button6");

        gridLayout->addWidget(Button6, 3, 2, 1, 1);

        Button7 = new QPushButton(centralwidget);
        Button7->setObjectName("Button7");

        gridLayout->addWidget(Button7, 2, 0, 1, 1);

        Button5 = new QPushButton(centralwidget);
        Button5->setObjectName("Button5");

        gridLayout->addWidget(Button5, 3, 1, 1, 1);

        plusButton = new QPushButton(centralwidget);
        plusButton->setObjectName("plusButton");

        gridLayout->addWidget(plusButton, 1, 3, 1, 1);

        negButton = new QPushButton(centralwidget);
        negButton->setObjectName("negButton");

        gridLayout->addWidget(negButton, 1, 2, 1, 1);

        Button0 = new QPushButton(centralwidget);
        Button0->setObjectName("Button0");

        gridLayout->addWidget(Button0, 5, 0, 1, 2);


        gridLayout_3->addLayout(gridLayout, 1, 0, 1, 1);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 356, 24));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);
        toolBar = new QToolBar(MainWindow);
        toolBar->setObjectName("toolBar");
        MainWindow->addToolBar(Qt::ToolBarArea::TopToolBarArea, toolBar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        expandButton->setText(QCoreApplication::translate("MainWindow", "Expand", nullptr));
        colorsButton->setText(QCoreApplication::translate("MainWindow", "Colors", nullptr));
        closeButton->setText(QCoreApplication::translate("MainWindow", "Close", nullptr));
        expButton->setText(QCoreApplication::translate("MainWindow", "exp", nullptr));
        Button1->setText(QCoreApplication::translate("MainWindow", "1", nullptr));
        divideButton->setText(QCoreApplication::translate("MainWindow", "/", nullptr));
        minusButton->setText(QCoreApplication::translate("MainWindow", "-", nullptr));
        Button9->setText(QCoreApplication::translate("MainWindow", "9", nullptr));
        Button4->setText(QCoreApplication::translate("MainWindow", "4", nullptr));
        ClearButton->setText(QCoreApplication::translate("MainWindow", "AC", nullptr));
        Button3->setText(QCoreApplication::translate("MainWindow", "3", nullptr));
        Button2->setText(QCoreApplication::translate("MainWindow", "2", nullptr));
        timesButton->setText(QCoreApplication::translate("MainWindow", "x", nullptr));
        equalButton->setText(QCoreApplication::translate("MainWindow", "=", nullptr));
        virgButton->setText(QCoreApplication::translate("MainWindow", ".", nullptr));
        Button8->setText(QCoreApplication::translate("MainWindow", "8", nullptr));
        display->setText(QCoreApplication::translate("MainWindow", "0", nullptr));
        Button6->setText(QCoreApplication::translate("MainWindow", "6", nullptr));
        Button7->setText(QCoreApplication::translate("MainWindow", "7", nullptr));
        Button5->setText(QCoreApplication::translate("MainWindow", "5", nullptr));
        plusButton->setText(QCoreApplication::translate("MainWindow", "+", nullptr));
        negButton->setText(QCoreApplication::translate("MainWindow", "+/-", nullptr));
        Button0->setText(QCoreApplication::translate("MainWindow", "0", nullptr));
        toolBar->setWindowTitle(QCoreApplication::translate("MainWindow", "toolBar", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
