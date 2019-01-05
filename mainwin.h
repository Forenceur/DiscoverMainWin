#ifndef MAINWIN_H
#define MAINWIN_H

#include <QMainWindow>
#include <QWidget>
#include <QLayout>
#include <QFormLayout>
#include <QLineEdit>
#include <QMdiArea>
#include <QTextEdit>
#include <QMdiSubWindow>
#include <QAction>
#include <QMenuBar>
#include <QApplication>
#include <QToolBar>

class MainWin : public QMainWindow
{
    Q_OBJECT
public:
    explicit MainWin(QWidget *parent = nullptr);

signals:

public slots:
};

#endif // MAINWIN_H
