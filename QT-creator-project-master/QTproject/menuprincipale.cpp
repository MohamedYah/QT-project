#include "menuprincipale.h"
#include "ui_menuprincipale.h"
#include <QPalette>
#include <QDesktopWidget>
#include <QtGui>
#include"mainwindow.h"
#include"afficherstock.h"
#include"ajouterstock.h"
#include"modifierstock.h"
#include"rechercherstock.h"
#include"supprimerstock.h"

#include"afficherclient.h"
#include"ajouterclient.h"
#include"supprimerclient.h"
#include"modifierclient.h"
#include"rechercherclient.h"

#include"afficherfinance.h"
#include"ajouterfinance.h"
#include"supprimerfinance.h"
#include"modifierfinance.h"
#include"rechercherfinance.h"

menuprincipale::menuprincipale(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::menuprincipale)
{
    ui->setupUi(this);

    ui->afficherstockPB->setVisible(false);ui->ajouterstockPB->setVisible(false);
    ui->rechercherstockPB->setVisible(false);ui->supprimerstockPB->setVisible(false);
    ui->modifierstockPB->setVisible(false);

    ui->afficherclientPB->setVisible(false);ui->ajouterclientPB->setVisible(false);
    ui->rechercherclientPB->setVisible(false);ui->supprimerclientPB->setVisible(false);
    ui->modifierclientPB->setVisible(false);

    ui->afficherfinancePB->setVisible(false);ui->ajouterfinancePB->setVisible(false);
    ui->rechercherfinancePB->setVisible(false);ui->supprimerfinancePB->setVisible(false);
    ui->modifierfinancePB->setVisible(false);

    //QPixmap pix("C:/Users/MohamedAnes/Desktop/QTT/gestion de la clientele/clientele/coevercoaching.jpg");
    //pix.scaled ( width, height, Qt::IgnoreAspectRatio, Qt::FastTransformation )
    // ui->Lpicture->setPixmap(pix);
    //Using QPalette you can set background image as follows.
         QPalette p = palette();

         //Load image to QPixmap, Give full path of image
        QPixmap pixmap1("C:/Users/ASUS/Desktop/projet/image.jpg"); //For emulator C: is ..\epoc32\winscw\c so image must be at that location

        //resize image if it is larger than screen size.
        QDesktopWidget* desktopWidget = QApplication::desktop();
        QRect rect = desktopWidget->availableGeometry();

        QSize size(rect.width() , rect.height());
        //resize as per your requirement..
        QPixmap pixmap(pixmap1.scaled(640,480));

        p.setBrush(QPalette::Background,  pixmap);
        setPalette(p);

}

menuprincipale::~menuprincipale()
{
    delete ui;
}

void menuprincipale::on_precedentPB_clicked()
{
    this->hide();
    MainWindow * dlg = new MainWindow();
    dlg->show();
}

void menuprincipale::on_quitterPB_clicked()
{
    this->close();
}

void menuprincipale::on_stockPB_clicked()
{
    ui->afficherstockPB->setVisible(true);ui->ajouterstockPB->setVisible(true);
    ui->rechercherstockPB->setVisible(true);ui->supprimerstockPB->setVisible(true);
    ui->modifierstockPB->setVisible(true);

    ui->afficherclientPB->setVisible(false);ui->ajouterclientPB->setVisible(false);
    ui->rechercherclientPB->setVisible(false);ui->supprimerclientPB->setVisible(false);
    ui->modifierclientPB->setVisible(false);

    ui->afficherfinancePB->setVisible(false);ui->ajouterfinancePB->setVisible(false);
    ui->rechercherfinancePB->setVisible(false);ui->supprimerfinancePB->setVisible(false);
    ui->modifierfinancePB->setVisible(false);

}

void menuprincipale::on_clientPB_clicked()
{

    ui->afficherstockPB->setVisible(false);ui->ajouterstockPB->setVisible(false);
    ui->rechercherstockPB->setVisible(false);ui->supprimerstockPB->setVisible(false);
    ui->modifierstockPB->setVisible(false);

    ui->afficherfinancePB->setVisible(false);ui->ajouterfinancePB->setVisible(false);
    ui->rechercherfinancePB->setVisible(false);ui->supprimerfinancePB->setVisible(false);
    ui->modifierfinancePB->setVisible(false);

    ui->afficherclientPB->setVisible(true);ui->ajouterclientPB->setVisible(true);
    ui->rechercherclientPB->setVisible(true);ui->supprimerclientPB->setVisible(true);
    ui->modifierclientPB->setVisible(true);

}

void menuprincipale::on_financePB_clicked()
{
    ui->afficherfinancePB->setVisible(true);ui->ajouterfinancePB->setVisible(true);
    ui->rechercherfinancePB->setVisible(true);ui->supprimerfinancePB->setVisible(true);
    ui->modifierfinancePB->setVisible(true);

    ui->afficherstockPB->setVisible(false);ui->ajouterstockPB->setVisible(false);
    ui->rechercherstockPB->setVisible(false);ui->supprimerstockPB->setVisible(false);
    ui->modifierstockPB->setVisible(false);

    ui->afficherclientPB->setVisible(false);ui->ajouterclientPB->setVisible(false);
    ui->rechercherclientPB->setVisible(false);ui->supprimerclientPB->setVisible(false);
    ui->modifierclientPB->setVisible(false);

}

void menuprincipale::on_afficherstockPB_clicked()
{
    this->hide();
    AfficherStock * dlg = new  AfficherStock();
    dlg->show();
}


void menuprincipale::on_ajouterstockPB_clicked()
{

    this->hide();
    ajouterstock * dlg = new  ajouterstock ();
    dlg->show();
}




void menuprincipale::on_rechercherstockPB_clicked()
{
    this->hide();
    rechercherstock * dlg = new  rechercherstock ();
    dlg->show();
}

void menuprincipale::on_supprimerstockPB_clicked()
{
    this->hide();
   supprimerstock * dlg = new  supprimerstock ();
    dlg->show();
}

void menuprincipale::on_modifierstockPB_clicked()
{
    this->hide();
    modifierstock * dlg = new  modifierstock ();
    dlg->show();
}



void menuprincipale::on_afficherclientPB_clicked()
{
    this->hide();
    afficherclient * dlg = new  afficherclient();
    dlg->show();
}

void menuprincipale::on_ajouterclientPB_clicked()
{
    this->hide();
    ajouterclient * dlg = new  ajouterclient ();
    dlg->show();
}

void menuprincipale::on_rechercherclientPB_clicked()
{
    this->hide();
    rechercherclient * dlg = new  rechercherclient ();
    dlg->show();
}

void menuprincipale::on_supprimerclientPB_clicked()
{
    this->hide();
    supprimerclient* dlg = new  supprimerclient ();
    dlg->show();
}

void menuprincipale::on_modifierclientPB_clicked()
{
    this->hide();
    modifierclient * dlg = new  modifierclient ();
    dlg->show();
}

void menuprincipale::on_afficherfinancePB_clicked()
{
    this->hide();
    afficherfinance * dlg = new   afficherfinance ();
    dlg->show();
}

void menuprincipale::on_ajouterfinancePB_clicked()
{
    this->hide();
    ajouterfinance * dlg = new  ajouterfinance();
    dlg->show();
}

void menuprincipale::on_rechercherfinancePB_clicked()
{
    this->hide();
    rechercherfinance * dlg = new   rechercherfinance ();
    dlg->show();
}

void menuprincipale::on_supprimerfinancePB_clicked()
{
    this->hide();
    supprimerfinance * dlg = new   supprimerfinance ();
    dlg->show();
}

void menuprincipale::on_modifierfinancePB_clicked()
{
    this->hide();
    modifierfinance * dlg = new   modifierfinance  ();
    dlg->show();
}
