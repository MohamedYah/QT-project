#include "clientaj.h"
#include "ui_clientaj.h"
#include <QPixmap>
#include "QDate"
#include"afficherclient.h"
#include <QPalette>
#include <QDesktopWidget>
#include <QtGui>

clientaj::clientaj(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::clientaj)
{
    ui->setupUi(this);

    QPalette p = palette();

    //Load image to QPixmap, Give full path of image
   QPixmap pixmap1("C:/Users/ASUS/Desktop/projet/coevercoaching.jpg"); //For emulator C: is ..\epoc32\winscw\c so image must be at that location

   //resize image if it is larger than screen size.
   QDesktopWidget* desktopWidget = QApplication::desktop();
   QRect rect = desktopWidget->availableGeometry();

   QSize size(rect.width() , rect.height());
   //resize as per your requirement..
   QPixmap pixmap(pixmap1.scaled(640,480));

   p.setBrush(QPalette::Background,  pixmap);
   setPalette(p);

}

clientaj::~clientaj()
{
    delete ui;
}

void clientaj::on_ajouter_clicked()
{
    /*QString CIN = ui->Lcin->text();
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

   //ui->clientView->setModel(tmpCp.afficherPersonneclient());
   //ui->personneView_2->setModel(tmpCp.afficherPersonne());*/
}
