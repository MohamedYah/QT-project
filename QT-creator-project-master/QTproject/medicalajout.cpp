#include "medicalajout.h"
#include "ui_medicalajout.h"
#include "stock.h"

medicalajout::medicalajout(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::medicalajout)
{
    ui->setupUi(this);
    ui->IDML->setVisible(false);ui->IDM->setVisible(false);
    ui->delaiduDE->setVisible(false);ui->delaiduL->setVisible(false);
    ui->delaiauDE->setVisible(false);ui->delaiauL->setVisible(false);


}

medicalajout::~medicalajout()
{
    delete ui;
}

void medicalajout::on_ajoutermMPB_clicked()
{
    int Qstock = ui->quantiteM->text().toInt();
    int Qreserve = ui->reserveM->text().toInt();
    QString Marque= ui->marqueM->text();
    QString Typee= ui->typeeM->text();
    QString Description= ui->descriptionM->text();
    QString Reference= ui->referenceM->text();
    int ID=ui->IDM->text().toInt();
    QString delai_du=ui->delaiduDE->text();
    QString delai_au=ui->delaiauDE->text();
    int IDtechnique=ui->IDF->text().toInt();
    QString taille=ui->TailleLE->text();
    QString couleur=ui->couleurLE->text();
    stock *S = new stock(Qstock,Qreserve,Marque,Typee,Description,Reference,ID);
    stockmedical *SM =new stockmedical(Qstock,Qreserve,Marque,Typee,Description,Reference,ID,delai_du,delai_au,ID);

    if (ui->IDM->text()!=""){
    if ((S->ajouterstock(S))&&(SM->ajouterstockmedical(SM)))
        QMessageBox::information(0, qApp->tr("Ajout"),
            qApp->tr("Un nouveau stock medical a été ajouté"), QMessageBox::Cancel);
    else
        QMessageBox::critical(0, qApp->tr("Ajout"),
            qApp->tr("Probléme d'ajout"), QMessageBox::Cancel);

    }
    else if((ui->IDF->text()!="")){
    stock *S = new stock(Qstock,Qreserve,Marque,Typee,Description,Reference,IDtechnique);
    stocktechnique *ST = new stocktechnique(Qstock,Qreserve,Marque,Typee,Description,Reference,IDtechnique,taille,couleur,IDtechnique);
    if ((ST->ajoutstocktechnique(ST))&&(S->ajouterstock(S)))
        QMessageBox::information(0, qApp->tr("Ajout"),
            qApp->tr("Un nouveau stock technique a été ajouté"), QMessageBox::Cancel);
    else
        QMessageBox::critical(0, qApp->tr("Ajout"),
            qApp->tr("Probléme d'ajout"), QMessageBox::Cancel);
}

    else
        QMessageBox::critical(0, qApp->tr("Ajout"),
            qApp->tr("Probléme d'ajout"), QMessageBox::Cancel);
}

void medicalajout::on_stockmedicalPB_clicked()
{
    ui->TailleL->setVisible(false);
    ui->TailleLE->setVisible(false);
    ui->couleurL->setVisible(false);
    ui->couleurLE->setVisible(false);
    ui->IDML->setVisible(true);ui->IDM->setVisible(true);
    ui->IDF->setVisible(false);ui->IDFL->setVisible(false);
    ui->delaiduDE->setVisible(true);ui->delaiduL->setVisible(true);
    ui->delaiauDE->setVisible(true);ui->delaiauL->setVisible(true);
}

void medicalajout::on_stocktechniquePB_clicked()
{
    ui->TailleL->setVisible(true);
    ui->TailleLE->setVisible(true);
    ui->couleurL->setVisible(true);
    ui->couleurLE->setVisible(true);
    ui->IDML->setVisible(false);ui->IDM->setVisible(false);
    ui->IDF->setVisible(true);ui->IDFL->setVisible(true);
    ui->delaiduDE->setVisible(false);ui->delaiduL->setVisible(false);
    ui->delaiauDE->setVisible(false);ui->delaiauL->setVisible(false);
    ui->delaiduDE->setVisible(false);ui->delaiduL->setVisible(false);
    ui->delaiauDE->setVisible(false);ui->delaiauL->setVisible(false);
}
