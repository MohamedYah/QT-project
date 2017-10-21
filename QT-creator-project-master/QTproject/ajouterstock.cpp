#include "ajouterstock.h"
#include "ui_ajouterstock.h"
#include <QPalette>
#include <QDesktopWidget>
#include <QtGui>
#include"menuprincipale.h"
ajouterstock::ajouterstock(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::ajouterstock)
{
    ui->setupUi(this);


    //QPixmap pix("C:/Users/MohamedAnes/Desktop/QTT/gestion de la clientele/clientele/coevercoaching.jpg");
    //pix.scaled ( width, height, Qt::IgnoreAspectRatio, Qt::FastTransformation )
    // ui->Lpicture->setPixmap(pix);
    //Using QPalette you can set background image as follows.
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

ajouterstock::~ajouterstock()
{
    delete ui;
}


void ajouterstock::on_precedentaPB_clicked()
{
    this->hide();
    menuprincipale * dlg = new  menuprincipale ();
    dlg->show();
}
