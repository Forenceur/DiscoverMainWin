#include "mainwin.h"

MainWin::MainWin(QWidget *parent) : QMainWindow(parent)
{
    QMenu *menuFile=this->menuBar()->addMenu("&File");
    QMenu *menuSubRecentFile=menuFile->addMenu("&Recent File");

    QAction *actionRecent1=new QAction("fake file 1");
    QAction *actionRecent2=new QAction("fake file 2");
    QAction *actionRecent3=new QAction("fake file 3");

    menuSubRecentFile->addAction(actionRecent1);
    menuSubRecentFile->addAction(actionRecent2);
    menuSubRecentFile->addAction(actionRecent3);

    QAction *actionQuit=new QAction("&Quit",this);
    actionQuit->setIcon(QIcon("/home/eddy/Qt/Docs/Qt-5.12.0/qtdoc/images/ico_out.png"));
    actionQuit->setShortcut(QKeySequence("Ctrl+Q"));
    menuFile->addAction(actionQuit);

    QToolBar *toolBarQuit=this->addToolBar("Quit");
    toolBarQuit->addAction(actionQuit);

    QMdiArea *centralArea=new QMdiArea;

    QTextEdit *textSub1=new QTextEdit;
    QTextEdit *textSub2=new QTextEdit;

    QMdiSubWindow *subWin1=centralArea->addSubWindow(textSub1);
    QMdiSubWindow *subWin2=centralArea->addSubWindow(textSub2);

    subWin1->setWindowTitle("sub1");
    subWin2->setWindowTitle("sub2");

    this->setCentralWidget(centralArea);

    QObject::connect(actionQuit,SIGNAL(triggered()),qApp,SLOT(quit()));
}
