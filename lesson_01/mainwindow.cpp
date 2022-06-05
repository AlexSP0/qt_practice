#include "mainwindow.h"
#include "./ui_mainwindow.h"

#include <QRegExpValidator>

#include <QDebug>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

        QString macByteRange= "[0-9|a-f|A-F][0-9|a-f|A-F]";
        QString sep = "[-|:]";

        QRegExp ipRegex (macByteRange + sep + macByteRange + sep + macByteRange + sep
                         + macByteRange + sep + macByteRange + sep + macByteRange);

        QRegExpValidator *ipValidator = new QRegExpValidator(ipRegex, this);

        ui->lineEdit->setValidator(ipValidator);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_lineEdit_textChanged(const QString &arg1)
{
    ui->lineEdit->setText(ui->lineEdit->text().replace('-',':'));
}

