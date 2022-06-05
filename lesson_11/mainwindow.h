#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QXmlStreamWriter>
#include <QFileDialog>
#include <QMessageBox>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void onGenerateButtonClicked();
    void onDialogButtonClicked();
    void onReadButtonClicked();
    void onDialogReadButtonClicked();

private:
    Ui::MainWindow *ui;
};
#endif // MAINWINDOW_H
