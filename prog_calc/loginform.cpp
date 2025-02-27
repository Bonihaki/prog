#include "loginform.h"
#include "ui_loginform.h"

LoginForm::LoginForm(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::LoginForm)
{
    ui->setupUi(this);

    // Подключаем сигналы к кнопкам
    connect(ui->loginButton, &QPushButton::clicked, this, &LoginForm::onLoginButtonClicked);
    connect(ui->cancelButton, &QPushButton::clicked, this, &LoginForm::onCancelButtonClicked);
}

LoginForm::~LoginForm()
{
    delete ui;
}

void LoginForm::onLoginButtonClicked()
{
    bool loginSuccess = true;

    if (loginSuccess) {
        emit loginAccepted(); // Отправляем сигнал успешного входа
        //accept(); // Закрываем окно
        hide();
    } else {

    }
}

void LoginForm::onCancelButtonClicked()
{
    emit loginRejected(); // Отправляем сигнал отклонения входа
    reject(); // Закрываем окно
}




