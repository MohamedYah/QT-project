#include "fournisseuraj.h"
#include "ui_fournisseuraj.h"
#include"stock.h"
#include"personne.h"


fournisseuraj::fournisseuraj(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::fournisseuraj)
{
    ui->setupUi(this);
}

fournisseuraj::~fournisseuraj()
{
    delete ui;
}

void fournisseuraj::on_pushButton_clicked()
{
    QString CIN = ui->cinF->text();
    QString Nom= ui->nomF->text();
    QString Prenom = ui->prenomF->text();
    QString Num_Tel = ui->num_telF->text();
    QString Societe=ui->societeF->text();
    QString Adresse=ui->adresseF->text();
    int ID=ui->IDF->text().toInt();
    QString courriel=ui->courrielLE->text();




    //stockfournisseur *SF = new stockfournisseur (Nom,Prenom,Societe,Num_Tel,Societe);
    Personne *PE = new Personne( Prenom,Nom,Num_Tel,CIN,Adresse,ID, courriel);
    //stockfournisseur *SF=new stockfournisseur(Prenom,Nom,Num_Tel,CIN,Adresse,ID,Societe,IDf);
    stockfournisseur *SF=new stockfournisseur(Prenom,Nom,Num_Tel,CIN,Adresse,ID,courriel,Societe,ID);

    if (SF->ajoutpersonnefournisseur(SF)&&(PE->AjoutPersonne(PE)))
        QMessageBox::information(0, qApp->tr("Ajout"),
            qApp->tr("Un nouveau fournisseur a été ajouté"), QMessageBox::Cancel);

    /*if (PE->AjoutPersonne(PE))
        QMessageBox::information(0, qApp->tr("Ajout"),
            qApp->tr("Un nouveau fournisseur a été ajouté"), QMessageBox::Cancel);*/

    else
        QMessageBox::critical(0, qApp->tr("Ajout"),
            qApp->tr("Probléme d'ajout"), QMessageBox::Cancel);
}
