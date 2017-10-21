#include "afficherclient.h".
#include "ui_afficherfinance.h"
#include <QPalette>
#include <QDesktopWidget>
#include <QtGui>
#include"menuprincipale.h"
#include"menuprincipale.h"

afficherclient::afficherclient(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::afficherfinance)
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
    ui->personneView->hide();
     ui->transfertView->hide();

}

afficherclient::~afficherclient()
{
    delete ui;
}

void afficherclient::on_pecedentPB_clicked()
{
    menuprincipale * dlg = new  menuprincipale ();
    dlg->show();
    this->hide();
}

void afficherclient::on_afficherclientPB_clicked()
{
     ui->personneView->setModel(tmpcp.AfficherClientele());
    ui->personneView->show();
    ui->transfertView->hide();

}

void afficherfinance::on_affichertransfertPB_clicked()
{
    ui->transfertView->setModel(tmCp.AfficherTransfert());
    ui->transfertView->show();
    ui->personneView->hide();
}
