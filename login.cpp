#include "login.h"
#include "ui_login.h"

login::login(QWidget *parent) :
    QDockWidget(parent),
    ui(new Ui::login)
{
    ui->setupUi(this);
}

login::login()
{

}

login::~login()
{
    delete ui;
}

void login::on_loginAsPSUser_clicked()
{

}
