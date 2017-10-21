#include "afficherfournisseur.h"
#include "ui_afficherfournisseur.h"

afficherfournisseur::afficherfournisseur(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::afficherfournisseur)
{
    ui->setupUi(this);
     ui->fornisseurView->hide();

}

afficherfournisseur::~afficherfournisseur()
{
    delete ui;
}

void afficherfournisseur::on_FournisseurPB_clicked()
{
    ui->fornisseurView->show();
     ui->fornisseurView->setModel(tmpCp.afficherfournisseur());
}
