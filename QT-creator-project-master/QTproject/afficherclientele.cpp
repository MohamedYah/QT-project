#include "afficherclientele.h"
#include "ui_afficherclientele.h"
#include"menuprincipale.h"
afficherclientele::afficherclientele(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::afficherclientele)
{
    ui->setupUi(this);
}

afficherclientele::~afficherclientele()
{
    delete ui;
}

void afficherclientele::on_afficherclientPB_clicked()
{
   ui->personneView->setModel(tmpcp.AfficherClientele());
   ui->personneView->show();
   ui->transfertView->hide();
}

void afficherclientele::on_affichertransfertPB_clicked()
{
    ui->transfertView->setModel(tmCp.AfficherTransfert());
    ui->transfertView->show();
    ui->personneView->hide();
}

void afficherclientele::on_pecedentPB_clicked()
{
    menuprincipale * dlg = new  menuprincipale ();
    dlg->show();
    this->hide();
}
