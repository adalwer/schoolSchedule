#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <iostream>
MainWindow::MainWindow () {
    set_initial_values ();
    createUI ();

}


void MainWindow::set_initial_values () {
    lesson_height = 50;
    lesson_width = 150;
    this->setGeometry(0, 0, 5*lesson_width, 8*lesson_height);
    this->setMinimumSize(5*lesson_width, 8*lesson_height);
    this->setMaximumSize(5*lesson_width, 8*lesson_height);

}

void MainWindow::createUI () {
    signalMapper = new QSignalMapper (this);
    connect (signalMapper, SIGNAL (mapped (int)), this, SLOT (fun(int)));
    for (int i = 0; i < 5; i ++) {
        for (int j = 0; j < 8; j ++) {
            lesson [i][j] = new QPushButton ("lekcja", this);
           // signalMapper = new SignalMapper (this);
            lesson [i][j]->setGeometry (i*lesson_width, j*lesson_height, lesson_width, lesson_height);
            connect (lesson [i][j], SIGNAL(clicked()), signalMapper, SLOT (map()));
            signalMapper->setMapping(lesson [i][j], i);
        }
    }
}

void MainWindow::fun(int buttonId) {
    for (int i = 0; i < 8; i ++) {
        if (buttonId == i) {
            std::cout << i << std::endl;
        }
    }
}
