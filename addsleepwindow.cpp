#include "addsleepwindow.h"
#include "ui_addsleepwindow.h"

AddSleepWindow::AddSleepWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::AddSleepWindow)
{
    ui->setupUi(this);
}

AddSleepWindow::~AddSleepWindow()
{
    delete ui;
}

void AddSleepWindow::on_pushButton_clicked()
{
    this->close();      // Закрываем окно
    emit sleepWindow();
}
