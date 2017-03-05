#include "login.h"
#include "ui_login.h"

login::login(QWidget *parent) :
    QDockWidget(parent),
    ui(new Ui::login)
{
    ui->setupUi(this);
}

login::~login()
{
    delete ui;
}
