#include "menuprincipale.h"
#include "ui_menuprincipale.h"
#include <QPalette>
#include <QDesktopWidget>
#include <QtGui>
#include"mainwindow.h"

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
