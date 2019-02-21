#ifndef ADMINSCREEN_H
#define ADMINSCREEN_H

#include <QDialog>

namespace Ui {
class adminScreen;
}

class adminScreen : public QDialog
{
    Q_OBJECT

public:
    explicit adminScreen(QWidget *parent = nullptr);
    ~adminScreen();

private:
    Ui::adminScreen *ui;
};

#endif // ADMINSCREEN_H
