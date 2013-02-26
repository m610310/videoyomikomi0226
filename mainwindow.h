#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

#include <opencv2/opencv.hpp>

#include <iostream>
#include <vector>

#include <QTimer>
#include <QString>
#include <QFileDialog>



namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT
    
public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();
    
private slots:
    void on_pushButton_clicked();

private:
    Ui::MainWindow *ui;

    QString file_name;
};

#endif // MAINWINDOW_H
