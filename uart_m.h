#ifndef UART_M_H
#define UART_M_H

#include <QDialog>

namespace Ui {
class uart_m;
}

class uart_m : public QDialog
{
    Q_OBJECT

public:
    explicit uart_m(QWidget *parent = 0);
    ~uart_m();

private slots:
    void on_groupBox_clicked();

    void on_progressBar_destroyed();

    void on_progressBar_1_destroyed();

    void on_pushButton_clicked();

    void on_label_2_linkActivated(const QString &link);

    void on_pushButton_2_clicked();

private:
    Ui::uart_m *ui;
};

#endif // UART_M_H
