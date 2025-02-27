#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "logindialog.h"
#include "calculatorform.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    LoginDialog *login = new LoginDialog(this);
    CalculatorForm *calcwindow = new CalculatorForm(this);

    connect(login, &LoginDialog::loginAccepted, this, [=]() {
        calcwindow->show();
        login->deleteLater();
    });

    login->show();
}

MainWindow::~MainWindow()
{
    delete ui;
}
