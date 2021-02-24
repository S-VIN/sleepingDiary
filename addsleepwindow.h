#ifndef ADDSLEEPWINDOW_H
#define ADDSLEEPWINDOW_H

#include <QWidget>

namespace Ui {
class AddSleepWindow;
}

class AddSleepWindow : public QWidget
{
    Q_OBJECT

public:
    explicit AddSleepWindow(QWidget *parent = nullptr);
    ~AddSleepWindow();

signals:
    void sleepWindow();
private slots:
    void on_pushButton_clicked();

private:
    Ui::AddSleepWindow *ui;
};

#endif // ADDSLEEPWINDOW_H
