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
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_enter_clicked();

    void on_pushButton_3_clear_clicked();

    void on_pushButton_2_display_clicked();

    void on_pushButton_send_clicked();

private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
