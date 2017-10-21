#ifndef AFFICHERFINANCE_H
#define AFFICHERFINANCE_H

#include <QDialog>
#include"clientele.h"
#include"transfert.h"


namespace Ui {
class afficherclient;
}

class afficherclient: public QDialog
{
    Q_OBJECT
    
public:
    explicit afficherclient(QWidget *parent = 0);
    ~afficherclient();
    
private slots:
    void on_pecedentPB_clicked();

    void on_afficherclientPB_clicked();

    void on_affichertransfertPB_clicked();

private:
    Ui::afficherclient *ui;
    Clientele tmpcp;
    Transfert tmCp;
};

#endif // AFFICHERFINANCE_H
