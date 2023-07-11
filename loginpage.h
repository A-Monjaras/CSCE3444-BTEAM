#ifndef LOGINPAGE_H
#define LOGINPAGE_H

#include <QMainWindow>
#include "DatabaseManager.h"
#include "seconddialog.h"
#include "parkingdialog.h"
QT_BEGIN_NAMESPACE
namespace Ui { class LoginPage; }
QT_END_NAMESPACE

class LoginPage : public QMainWindow
{
    Q_OBJECT

public:
    LoginPage(QWidget *parent = nullptr);
    ~LoginPage();

private slots:
    void on_loginbutton_clicked();

private:
    Ui::LoginPage *ui;
    secondDialog *secDialog;
    ParkingDialog *park;
    DatabaseManager* dbManager;
};
#endif // LOGINPAGE_H
