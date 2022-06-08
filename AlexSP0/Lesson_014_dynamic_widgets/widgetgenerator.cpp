#include <QCheckBox>
#include <QLabel>
#include <QListView>
#include <QListWidget>
#include <QPushButton>
#include <QRandomGenerator>
#include <QStringListModel>
#include <QTextBrowser>
#include <QToolButton>
#include <QTreeView>
#include <QWidget>
#include <qradiobutton.h>
#include "widgetgenerator.h"

QWidget* WidgetGenerator::getRandomWidget() {
    int widget = getRandomNumber();
    switch (widget) {
        case PushButton:
            return (QWidget*) new QPushButton("This is button!");
        case ToolButton:
            return (QWidget*) new QToolButton();
        case RadioButton:
            return (QWidget*) new QRadioButton("This is radiobutton!");
        case CheckBox:
            return (QWidget*) new QCheckBox("This is checkbox!");
        case TreeView:
            return (QWidget*) createTreeView();
        case ListWidget:
            return (QWidget*) createQListWidget();
        case Label:
            return (QWidget*) new QLabel("This is label!");
    }
    return nullptr;
}


QTreeView* WidgetGenerator::createTreeView() {
    QStringListModel model;
    QStringList list;
    list<<"This is first item of TreeView"<<"This is secon item of TreeView";
    model.setStringList(list);
    QTreeView *treeView = new QTreeView();
    treeView->setModel(&model);
    return treeView;
}

QListWidget* WidgetGenerator::createQListWidget() {
    QListWidget *listView = new QListWidget();
    listView->addItem("This is QListWidget!");
    return listView;
}

int WidgetGenerator::getRandomNumber() {
    QRandomGenerator *rg = QRandomGenerator::global();
    return rg->bounded(0,6);
}
