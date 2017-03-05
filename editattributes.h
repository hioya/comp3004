#ifndef EDITATTRIBUTES_H
#define EDITATTRIBUTES_H

#include <QDialog>

namespace Ui {
class editAttributes;
}

class editAttributes : public QDialog
{
    Q_OBJECT

public:
    explicit editAttributes(QWidget *parent = 0);
    ~editAttributes();

private:
    Ui::editAttributes *ui;
};

#endif // EDITATTRIBUTES_H
