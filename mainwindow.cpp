#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_clicked()
{
    file_name = QFileDialog::getOpenFileName(this,
                                             tr("file"),"",
                                             tr("mp4(*.mp4);;AllFiles(*)"));

    ui -> lineEdit -> setText(file_name);

}

