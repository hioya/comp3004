#ifndef LOGIN_H
#define LOGIN_H
#define "string"

#include <QDockWidget>

namespace Ui {
class login;
}

class login : public QDockWidget
{
    Q_OBJECT

public:
    explicit login(QWidget *parent = 0);
    login();
    ~login();
    string getPassword();
    string getUsername();
    bool validation(string u, string p);

private slots:
    void on_loginAsPSUser_clicked();

private:
    Ui::login *ui;
    string username;
    string password;
};

#endif // LOGIN_H
