#include "factureclientele.h"
#include "ui_factureclientele.h"
#include"finance.h"
#include"fclientele.h"

factureclientele::factureclientele(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::factureclientele)
{
    ui->setupUi(this);
}

factureclientele::~factureclientele()
{
    delete ui;
}

void factureclientele::on_AjoutePB_clicked()
{
    QString Tpaiement = ui->typepaiementLE->text();
    QString Nom= ui->nomclinetLE->text();
    QString Adresse = ui->adresseLE->text();
    QString Num_Tel = ui->numtelLE->text();
    QString info=ui->infoLE->text();
    QString paiement=ui->netapayerLE->text();
    int ID=ui->IDclientLE->text().toInt();
    QString courriel=ui->courriel->text();
    QString datedu=ui->datedu->text();
    QString dateau=ui->dateau->text();



    facture * f =new facture(Nom,Adresse,Num_Tel,courriel,ID,info,paiement,Tpaiement);
    Fclientele *fc= new Fclientele(Nom,Adresse,Num_Tel,courriel,ID,info,paiement,Tpaiement,datedu,dateau,ID);

    if (f->AjoutFacture(f)&&(fc->AjoutFclientele(fc)))
        QMessageBox::information(0, qApp->tr("Ajout"),
            qApp->tr("Un nouveau fournisseur a été ajouté"), QMessageBox::Cancel);

     else
        QMessageBox::critical(0, qApp->tr("Ajout"),
            qApp->tr("Probléme d'ajout"), QMessageBox::Cancel);

}
