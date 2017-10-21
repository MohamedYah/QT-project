#ifndef AFFICHERFOURNISSEUR_H
#define AFFICHERFOURNISSEUR_H

#include <QDialog>
#include "stock.h"

namespace Ui {
class afficherfournisseur;
}

class afficherfournisseur : public QDialog
{
    Q_OBJECT
    
public:
    explicit afficherfournisseur(QWidget *parent = 0);
    ~afficherfournisseur();
    
private slots:
    void on_FournisseurPB_clicked();

private:
    Ui::afficherfournisseur *ui;
     stockfournisseur tmpCp;
};

#endif // AFFICHERFOURNISSEUR_H
