#include "viewsummary.h"
#include "ui_viewsummary.h"

viewSummary::viewSummary(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::viewSummary)
{
    ui->setupUi(this);
}

viewSummary::~viewSummary()
{
    delete ui;
}
