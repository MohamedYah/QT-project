#ifndef FACTUREFORNISSEUR_H
#define FACTUREFORNISSEUR_H

#include <QDialog>

namespace Ui {
class facturefornisseur;
}

class facturefornisseur : public QDialog
{
    Q_OBJECT
    
public:
    explicit facturefornisseur(QWidget *parent = 0);
    ~facturefornisseur();
    
private slots:
    void on_AjoutePB_clicked();

private:
    Ui::facturefornisseur *ui;
};

#endif // FACTUREFORNISSEUR_H
