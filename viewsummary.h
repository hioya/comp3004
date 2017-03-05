#ifndef VIEWSUMMARY_H
#define VIEWSUMMARY_H

#include <QDialog>

namespace Ui {
class viewSummary;
}

class viewSummary : public QDialog
{
    Q_OBJECT

public:
    explicit viewSummary(QWidget *parent = 0);
    ~viewSummary();

private:
    Ui::viewSummary *ui;
};

#endif // VIEWSUMMARY_H
