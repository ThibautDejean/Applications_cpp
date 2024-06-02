#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "logic.h"
#include "colorchanger.h"

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void onExpandButtonClicked();
    void onColorsButtonClicked();
    void onCloseButtonClicked();


private:
    Ui::MainWindow *ui;
    Logic* logic;
    ColorChanger* colorChanger;
    bool isExpanded;
    bool isWhite;
};

#endif // MAINWINDOW_H
