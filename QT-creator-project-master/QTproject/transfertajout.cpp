#include "transfertajout.h"
#include "ui_transfertajout.h"
#include "transfert.h"
transfertajout::transfertajout(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::transfertajout)
{
    ui->setupUi(this);
}

transfertajout::~transfertajout()
{
    delete ui;
}

void transfertajout::on_Ajouter_clicked()
{
    //ID_client_t=ui->T_ID->text();

int ID_client_t= ui->T_ID->text().toInt();
QString Date_T= ui->L_Date_F->text();
QString Type = ui->type->text();
QString Position = ui->Lposition->text();
QString Equipe =ui->Lequipe->text();

// int ID_client=ui->ID_A->text().toInt();

//int ID_client=ui->ID_A->text().toInt();
//Personne *PE = new Personne(Prenom,Nom,Num_Tel,CIN,Adresse,ID);
Transfert *TR=new Transfert(ID_client_t,Type,Position,Date_T,Equipe);

if (TR->AjoutTransfert(TR))
{QMessageBox::information(0, qApp->tr("Ajout"),
    qApp->tr("Un nouveau transfert a été ajouté"), QMessageBox::Cancel);
//ui->transfertView->setModel(tmpp.AfficherTransfert());
//ui->Supprimer_tView->setModel(tmpp.AfficherTransfert());
}
    else{
QMessageBox::critical(0, qApp->tr("Ajout"),
    qApp->tr("Probléme d'ajout"), QMessageBox::Cancel);}

}
