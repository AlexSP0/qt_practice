#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QShortcut>

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
    void slotShortcutF11();
    void slotShortcutCtrlD();

private:
    Ui::MainWindow *ui;
    QShortcut *keyF11;
    QShortcut *keyCtrlD;

};
#endif // MAINWINDOW_H
