#include "editattributes.h"
#include "ui_editattributes.h"

editAttributes::editAttributes(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::editAttributes)
{
    ui->setupUi(this);
}

editAttributes::~editAttributes()
{
    delete ui;
}
