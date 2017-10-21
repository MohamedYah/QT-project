#ifndef AFFICHERCLIENT_H
#define AFFICHERCLIENT_H
//#include"personneclient.h"

#include <QDialog>

namespace Ui {
class afficherclient;
}

class afficherclient : public QDialog
{
    Q_OBJECT

public:
    explicit afficherclient(QWidget *parent = 0);
    ~afficherclient();

private slots:
    void on_ACprecedentPB_clicked();


private:
    Ui::afficherclient *ui;

};

#endif // AFFICHERCLIENT_H
