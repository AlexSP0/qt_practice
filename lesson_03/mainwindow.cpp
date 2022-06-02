#include "mainwindow.h"
#include "./ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    fileSettings = new QSettings (company, productName);
    connect(ui->saveButton, &QPushButton::clicked, this, &MainWindow::saveLine);
    connect(ui->loadButton, &QPushButton::clicked, this, &MainWindow::loadLine);
    loadLine();
}

void MainWindow::saveLine() {
    fileSettings->setValue("line", ui->lineEdit->text());
}

void MainWindow::loadLine() {
    ui->lineEdit->setText(fileSettings->value("line").toString());
}

MainWindow::~MainWindow()
{
    delete ui;
    delete fileSettings;
}

