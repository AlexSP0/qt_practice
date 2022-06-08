#ifndef WIDGETGENERATOR_H
#define WIDGETGENERATOR_H

#include <QListView>
#include <QListWidget>
#include <QTreeView>
#include <QWidget>


class WidgetGenerator {
public:
    enum elements {
        PushButton = 0,
        ToolButton = 1,
        RadioButton = 2,
        CheckBox = 3,
        TreeView = 4,
        ListWidget = 5,
        Label = 6
    };

    QWidget* getRandomWidget();

private:
    int getRandomNumber();
    QListView* createListView();
    QTreeView* createTreeView();
    QListWidget* createQListWidget();
};

#endif // WIDGETGENERATOR_H
