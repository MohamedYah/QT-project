#ifndef AFFICHERCLIENT_H
#define AFFICHERCLIENT_H
#include "clientaj.h"
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
    personneclient tmpCp;

};

#endif // AFFICHERCLIENT_H
