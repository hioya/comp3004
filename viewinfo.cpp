#include "viewinfo.h"
#include "ui_viewinfo.h"

viewInfo::viewInfo(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::viewInfo)
{
    ui->setupUi(this);
}

viewInfo::~viewInfo()
{
    delete ui;
}
