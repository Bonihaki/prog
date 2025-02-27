#include "logindialog.h"
#include "ui_logindialog.h"

LoginDialog::LoginDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::LoginDialog)
{
    ui->setupUi(this);

    // Здесь можно настроить элементы интерфейса, если это требуется
}

LoginDialog::~LoginDialog()
{
    delete ui;
}
