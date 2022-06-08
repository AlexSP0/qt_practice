#include "mainwindow.h"
#include "./ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    generator = new WidgetGenerator();
    ui->setupUi(this);
    connect(ui->pushButtonAddElement, &QPushButton::clicked, this, &MainWindow::addRandomElement);
    connect(ui->pushButtonClear, &QPushButton::clicked, this, &MainWindow::clearLayout);
}

void MainWindow::addRandomElement() {
    qWarning("addRandomElement()");

    auto widgetPtr = generator->getRandomWidget();
    widgets.append(widgetPtr);
    ui->verticalLayout->addWidget(widgetPtr);

}

void MainWindow::clearLayout() {
    qWarning("clearLayout()");
    while (QLayoutItem *item = ui->verticalLayout->takeAt(0)) {
        QWidget *w = item->widget();
        delete w;
        delete item;
    }

    ui->verticalLayout->update();
}

MainWindow::~MainWindow()
{
    delete ui;
    delete generator;
}

