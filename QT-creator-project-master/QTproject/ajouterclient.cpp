#include "clientaj.h"
#include "ui_clientaj.h"
#include <QPixmap>
#include "QDate"
#include"personneclient.h"
#include "ui_afficherclient.h"
#include "afficherclient.h"
#include <QPalette>
#include <QDesktopWidget>
#include <QtGui>
#include"menuprincipale.h"

clientaj::clientaj(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::clientaj)
{
    ui->setupUi(this);
}

clientaj::~clientaj()
{
    delete ui;
}

void clientaj::on_ajouter_clicked()
{
    QString CIN = ui->Lcin->text();
    QString Nom= ui->Lnom->text();
    QString Prenom = ui->Lprenom->text();
    QString Num_Tel = ui->Lnum_tel->text();
    int Age =ui->Lage->text().toInt();
    QString Date_de_naissance=ui->dateN->text();
    QString  Date_du_contrat_du=ui->dateD->text();
    QString Date_du_contrat_au=ui->dateA->text();
    int Number =ui->maillot->text().toInt();
    personneclient *PE = new personneclient(Prenom,Nom,Num_Tel,CIN,Age,Date_de_naissance,Date_du_contrat_du,Date_du_contrat_au,Number);


    if (PE->ajoutpersonneclient(PE))
        QMessageBox::information(0, qApp->tr("Ajout"),
            qApp->tr("Un nouveau compte a été ajouté"), QMessageBox::Cancel);
    else
        QMessageBox::critical(0, qApp->tr("Ajout"),
            qApp->tr("Probléme d'ajout"), QMessageBox::Cancel);
   // ui->clientView->setModel(tmpCp.afficherPersonneclient());
   //ui->clientView->setModel(tmpCp.afficherPersonneclient());
   //ui->personneView_2->setModel(tmpCp.afficherPersonne());
}
