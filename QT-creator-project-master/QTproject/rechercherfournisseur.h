#ifndef RECHERCHERFOURNISSEUR_H
#define RECHERCHERFOURNISSEUR_H

#include <QDialog>
#include"stock.h"

namespace Ui {
class rechercherfournisseur;
}

class rechercherfournisseur : public QDialog
{
    Q_OBJECT
    
public:
    explicit rechercherfournisseur(QWidget *parent = 0);
    ~rechercherfournisseur();
    
private slots:
    void on_FrechercherPB_clicked();

private:
    Ui::rechercherfournisseur *ui;
    stockfournisseur tmpCp;
};

#endif // RECHERCHERFOURNISSEUR_H
