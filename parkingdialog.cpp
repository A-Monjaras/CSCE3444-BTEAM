#include "parkingdialog.h"
#include "ui_parkingdialog.h"
#include <QPixmap>

ParkingDialog::ParkingDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::ParkingDialog)
{
    ui->setupUi(this);
    QPixmap logo(":/img/unts-genericnewsimage_unt.png");
    ui->UNTlogo->setPixmap(logo);
}

ParkingDialog::~ParkingDialog()
{
    delete ui;
}

void ParkingDialog::on_backButton_clicked()
{

}

