#include "mainwindow.h"
#include "./ui_mainwindow.h"
#include <QMessageBox>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    keyF11 = new QShortcut(this);
    keyF11->setKey(Qt::Key_F11);

    keyCtrlD = new QShortcut(this);
    keyCtrlD->setKey(Qt::CTRL + Qt::Key_D);

    connect(keyF11, SIGNAL(activated()), this, SLOT(slotShortcutF11()));
    connect(keyCtrlD, SIGNAL(activated()), this, SLOT(slotShortcutCtrlD()));
}

void MainWindow::slotShortcutF11() {
    if(this->isFullScreen()) {
        this->showNormal();
    } else {
        this->showFullScreen();
    }
}

void MainWindow::slotShortcutCtrlD() {
    QMessageBox::information(this, "HOTKEY", "CONGRATULATIONS! It works!", QMessageBox::Ok);
}

MainWindow::~MainWindow()
{
    delete ui;
    delete keyCtrlD;
    delete keyF11;
}

