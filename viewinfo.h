#ifndef VIEWINFO_H
#define VIEWINFO_H

#include <QDialog>

namespace Ui {
class viewInfo;
}

class viewInfo : public QDialog
{
    Q_OBJECT

public:
    explicit viewInfo(QWidget *parent = 0);
    ~viewInfo();

private:
    Ui::viewInfo *ui;
};

#endif // VIEWINFO_H
