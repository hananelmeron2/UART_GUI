#include "uart_m.h"
#include "ui_uart_m.h"
#include <QMessageBox>
#include <QPixmap>

uart_m::uart_m(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::uart_m)
{
    ui->setupUi(this);
    //image display
    //QPixmap pix("/home/hananel/Pictures/im.png");
    //ui->label_2->setPixmap(pix);
}

uart_m::~uart_m()
{
    delete ui;
}


// here the UART protocol need to get the meassge from the user (we allready checked the message)
// the open() function is allready in used, each time the process complete the user go back to the
// main window and the string is initialize.
// the get() and send() functions will send the message between two peer's bit by bit in 8 bit's for each message
// see : https://en.wikipedia.org/wiki/Universal_asynchronous_receiver-transmitter


void uart_m::on_pushButton_clicked()
{

     QMessageBox::information(this, "UART protocol", "message sent successfuly through UART protocol");

}

// output to the user - the message was sent by the UART protocol

void uart_m::on_pushButton_2_clicked()
{
    QMessageBox::information(this, "UART protocol", "message sent successfuly through UART protocol");
}
