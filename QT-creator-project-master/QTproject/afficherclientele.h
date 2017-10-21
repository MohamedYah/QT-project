#ifndef AFFICHERCLIENTELE_H
#define AFFICHERCLIENTELE_H

#include <QDialog>
#include"clientele.h"
#include"transfert.h"


namespace Ui {
class afficherclientele;
}

class afficherclientele : public QDialog
{
    Q_OBJECT
    
public:
    explicit afficherclientele(QWidget *parent = 0);
    ~afficherclientele();
    
private slots:
    void on_afficherclientPB_clicked();

    void on_affichertransfertPB_clicked();

    void on_pecedentPB_clicked();

private:
    Ui::afficherclientele *ui;
    Clientele tmpcp;
    Transfert tmCp;
};

#endif // AFFICHERCLIENTELE_H
