#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QSettings>

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
   void saveLine();
   void loadLine();

private:
    Ui::MainWindow *ui;
    QSettings *fileSettings;
    const QString company = "Example software LTD";
    const QString productName = "lesson_003";
};
#endif // MAINWINDOW_H
