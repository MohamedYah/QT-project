#include "facturefornisseur.h"
#include "ui_facturefornisseur.h"
#include"ffournisseur.h"
#include"finance.h"

facturefornisseur::facturefornisseur(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::facturefornisseur)
{
    ui->setupUi(this);
}

facturefornisseur::~facturefornisseur()
{
    delete ui;
}

void facturefornisseur::on_AjoutePB_clicked()
{
    QString Tpaiement = ui->typepaiementLE->text();
    QString Nom= ui->nomclinetLE->text();
    QString Adresse = ui->adresseLE->text();
    QString Num_Tel = ui->numtelLE->text();
    QString info=ui->infoLE->text();
    QString paiement=ui->netapayerLE->text();
    int ID=ui->IDclientLE->text().toInt();
    QString courriel=ui->courriel->text();
    QString stock=ui->stockLE->text();
    QString societe=ui->societe->text();
    QString type=ui->typeLE->text();
    QString produit=ui->produitLE->text();




    facture * f =new facture(Nom,Adresse,Num_Tel,courriel,ID,info,paiement,Tpaiement);
    Ffournisseur *ff =new Ffournisseur(Nom,Adresse,Num_Tel,courriel,ID,info,paiement,Tpaiement,ID,stock,societe,type,produit);

    if (f->AjoutFacture(f)&&(ff->AjoutFfournisseur(ff)))
        QMessageBox::information(0, qApp->tr("Ajout"),
            qApp->tr("Un nouveau fournisseur a été ajouté"), QMessageBox::Cancel);



    else
        QMessageBox::critical(0, qApp->tr("Ajout"),
            qApp->tr("Probléme d'ajout"), QMessageBox::Cancel);

}
