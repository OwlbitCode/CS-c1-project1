#ifndef CUSTOMERSCREEN_H
#define CUSTOMERSCREEN_H

#include <QDialog>

namespace Ui {
class CustomerScreen;
}

class CustomerScreen : public QDialog
{
    Q_OBJECT

public:
    explicit CustomerScreen(QWidget *parent = nullptr);
    ~CustomerScreen();

private:
    Ui::CustomerScreen *ui;
};

#endif // CUSTOMERSCREEN_H
