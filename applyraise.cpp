#include "applyraise.h"
#include "ui_applyraise.h"

applyRaise::applyRaise(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::applyRaise)
{
    ui->setupUi(this);
}

applyRaise::~applyRaise()
{
    delete ui;
}
