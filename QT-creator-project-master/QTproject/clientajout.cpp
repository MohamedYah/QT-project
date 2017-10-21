#include "clientajout.h"
#include "ui_clientajout.h"
#include"clientele.h"


clientajout::clientajout(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::clientajout)
{
    ui->setupUi(this);
}

clientajout::~clientajout()
{
    delete ui;
}

void clientajout::on_ajouter_clicked()
{
    QString CIN = ui->Lcin->text();
    QString Nom= ui->Lnom->text();
    QString Prenom = ui->Lprenom->text();
    QString Num_Tel = ui->Lnum_tel->text();
    int Age =ui->Lage->text().toInt();
    QString Date_N=ui->dateN->text();
    QString  Date_D=ui->dateD->text();
    QString Date_F=ui->dateA->text();
    int Number =ui->L_maillot->text().toInt();
    QString Adresse=ui->L_adresse->text();
    int ID=ui->ID_A->text().toInt();
    QString Taille =ui->L_taille->text();
    QString Poids =ui->L_poids->text();
    int ID_client=ui->ID_A->text().toInt();
    QString courriel=ui->L_courriel->text();
    Personne *PE = new Personne(Prenom,Nom,Num_Tel,CIN,Adresse,ID,courriel);
    Clientele *CL=new Clientele(Prenom,Nom,Num_Tel,CIN,Adresse,ID,courriel,ID_client,Age,Date_N,Date_D,Date_F,Taille,Poids,Number);

    if (PE->AjoutPersonne(PE))
    {QMessageBox::information(0, qApp->tr("Ajout"),
            qApp->tr("Un nouveau compte a été ajouté"), QMessageBox::Cancel);}
    else{
        QMessageBox::critical(0, qApp->tr("Ajout"),
            qApp->tr("Probléme d'ajout"), QMessageBox::Cancel);}
    if (CL->AjoutClientele(CL))
    {QMessageBox::information(0, qApp->tr("Ajout"),
            qApp->tr("Un nouveau compte a été ajouté"), QMessageBox::Cancel);}
    else{
        QMessageBox::critical(0, qApp->tr("Ajout"),
            qApp->tr("Probléme d'ajout"), QMessageBox::Cancel);}
    //ui->personneView->setModel(tmpcp.AfficherClientele());
    //ui->personneView_S->setModel(tmpcp.AfficherClientele());

}

//void Dialog::on_Lnom_cursorPositionChanged(int arg1, int arg2)
//{

//}



