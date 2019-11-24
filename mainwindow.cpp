#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QMessageBox>
#include <uart_m.h>


MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}
int val=0;  // for message mistakes checks

// destructor to avoid memory leak.

MainWindow::~MainWindow()
{
    delete ui;
}

//the input string from user, will sent to the UART section.

void MainWindow::on_pushButton_clicked()
{
    //input string

    QString enter_string = ui->lineEdit_string->text();

    //check if the string not empty
    if(enter_string == 0)
    {
        QMessageBox::warning(this, "error", "illegal input");
        val=0;
    }

    else
    {
          QMessageBox::information(this, "message", "message sent to the UART string ");
          val=1;

    }
}

//diplay the message to the user.

void MainWindow::on_pushButton_2_display_clicked()
{
    QString enter_string = ui->lineEdit_string->text();

    if(enter_string != 0)
    {
        QMessageBox::information(this, "message display", "your massage is : " + enter_string);
    }

}


//check if the string was send to the UART section and create new window of the UART section

void MainWindow::on_pushButton_send_clicked()
{
       QString enter_string = ui->lineEdit_string->text();

       if(enter_string == 0 || val != 1)
       {

               QMessageBox::warning(this, "error", "message was not sent to the UART protocol");

       }

       else
       {
           uart_m uart;
           uart.setModal(true);
           uart.exec();
       }



}















