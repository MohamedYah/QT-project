#include "dialog.h"
#include "ui_Ajout.h"
#include "personne.h"
#include "clientele.h"
Dialog::Dialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Dialog)
{
    ui->setupUi(this);
}

Dialog::~Dialog()
{
    delete ui;
}

void Dialog::on_ajouter_clicked()
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
    Personne *PE = new Personne(Prenom,Nom,Num_Tel,CIN,Adresse,ID);
    Clientele *CL=new Clientele(Prenom,Nom,Num_Tel,CIN,Adresse,ID,ID_client,Age,Date_N,Date_D,Date_F,Taille,Poids,Number);

    if (PE->AjoutPersonne(PE))
    {QMessageBox::information(0, qApp->tr("Ajout"),
            qApp->tr("Un nouveau compte a �t� ajout�"), QMessageBox::Cancel);}
    else{
        QMessageBox::critical(0, qApp->tr("Ajout"),
            qApp->tr("Probl�me d'ajout"), QMessageBox::Cancel);}
    if (CL->AjoutClientele(CL))
    {QMessageBox::information(0, qApp->tr("Ajout"),
            qApp->tr("Un nouveau compte a �t� ajout�"), QMessageBox::Cancel);}
    else{
        QMessageBox::critical(0, qApp->tr("Ajout"),
            qApp->tr("Probl�me d'ajout"), QMessageBox::Cancel);}
}
