#include "rechercherfournisseur.h"
#include "ui_rechercherfournisseur.h"
#include"stock.h"

rechercherfournisseur::rechercherfournisseur(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::rechercherfournisseur)
{
    ui->setupUi(this);
}

rechercherfournisseur::~rechercherfournisseur()
{
    delete ui;
}

void rechercherfournisseur::on_FrechercherPB_clicked()
{
    QString Societe =ui->FrechercherLE->text();
    QSqlQueryModel *model =tmpCp.rechercherfournisseur(Societe);
    QString societeRech = model->data(model->index(0,0)).toString();

    if(Societe==societeRech)
       {
           ui->FrechercherView->show();
           ui->FrechercherView->setModel(model);
       }
        else
       {
           QMessageBox::critical(0, qApp->tr("Recherche"),
               qApp->tr("fournisseur non trouvé"), QMessageBox::Ok);

       }
}
