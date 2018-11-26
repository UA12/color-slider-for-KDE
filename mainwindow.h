#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
private slots:
void on_horizontalSlider_valueChanged(int index);
void on_horizontalSlider_2_valueChanged(int index1);
void on_horizontalSlider_3_valueChanged(int index2);

private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
