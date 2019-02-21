#include "adminscreen.h"
#include "ui_adminscreen.h"

adminScreen::adminScreen(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::adminScreen)
{
    ui->setupUi(this);
}

adminScreen::~adminScreen()
{
    delete ui;
}
