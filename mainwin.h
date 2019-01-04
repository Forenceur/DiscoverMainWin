#ifndef MAINWIN_H
#define MAINWIN_H

#include <QMainWindow>
#include <QWidget>

class MainWin : public QMainWindow
{
    Q_OBJECT
public:
    explicit MainWin(QWidget *parent = nullptr);

signals:

public slots:
};

#endif // MAINWIN_H