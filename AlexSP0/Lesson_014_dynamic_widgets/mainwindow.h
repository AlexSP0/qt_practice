#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

#include "widgetgenerator.h"


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
    void addRandomElement();
    void clearLayout();

private:
    Ui::MainWindow *ui;
    QList<QWidget*> widgets;
    WidgetGenerator *generator;
};
#endif // MAINWINDOW_H
