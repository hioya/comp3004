#ifndef PSMENU_H
#define PSMENU_H

#include <QMainWindow>

namespace Ui {
class psMenu;
}

class psMenu : public QMainWindow
{
    Q_OBJECT

public:
    explicit psMenu(QWidget *parent = 0);
    ~psMenu();

private:
    Ui::psMenu *ui;
};

#endif // PSMENU_H
