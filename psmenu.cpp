#include "psmenu.h"
#include "ui_psmenu.h"

psMenu::psMenu(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::psMenu)
{
    ui->setupUi(this);
}

psMenu::~psMenu()
{
    delete ui;
}
