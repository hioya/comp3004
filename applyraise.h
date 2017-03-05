#ifndef APPLYRAISE_H
#define APPLYRAISE_H

#include <QDialog>

namespace Ui {
class applyRaise;
}

class applyRaise : public QDialog
{
    Q_OBJECT

public:
    explicit applyRaise(QWidget *parent = 0);
    ~applyRaise();

private:
    Ui::applyRaise *ui;
};

#endif // APPLYRAISE_H
