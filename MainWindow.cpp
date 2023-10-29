#include "MainWindow.h"
#include "./ui_MainWindow.h"
#include "Screenshot.h"
#include "WindowCapture.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui_MainWindow)
{
    ui->setupUi(this);
    Screenshot screen_shot;
    WindowCapture win_capture;

    screen_shot.save();
    win_capture.save();
}

MainWindow::~MainWindow()
{
}

