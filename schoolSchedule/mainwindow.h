#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QPushButton>
#include <QSignalMapper>
#include <QWidget>
#include <hash.h>

class MainWindow : public QMainWindow
{
    Q_OBJECT
public:
    MainWindow ();

private:
    int lesson_width, lesson_height;


    Hash *H;
    QWidget *timeTable;
    QPushButton *lesson [5][8];
    QSignalMapper *signalMapper;

    void set_initial_values ();
    void createUI ();
private slots:
    void fun (int buttonId);

};

#endif // MAINWINDOW_H
