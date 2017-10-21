#include "ajouterclient.h"
#include "ui_ajouterclient.h"
#include <QPalette>
#include <QDesktopWidget>
#include <QtGui>
#include"menuprincipale.h"
#include"clientaj.h"

ajouterclient::ajouterclient(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::ajouterclient)
{
    ui->setupUi(this);


    //QPixmap pix("C:/Users/MohamedAnes/Desktop/QTT/gestion de la clientele/clientele/coevercoaching.jpg");
    //pix.scaled ( width, height, Qt::IgnoreAspectRatio, Qt::FastTransformation )
    // ui->Lpicture->setPixmap(pix);
    //Using QPalette you can set background image as follows.
         QPalette p = palette();

         //Load image to QPixmap, Give full path of image
        QPixmap pixmap1("C:/Users/MohamedAnes/Desktop/projet/coevercoaching.jpg"); //For emulator C: is ..\epoc32\winscw\c so image must be at that location

        //resize image if it is larger than screen size.
        QDesktopWidget* desktopWidget = QApplication::desktop();
        QRect rect = desktopWidget->availableGeometry();

        QSize size(rect.width() , rect.height());
        //resize as per your requirement..
        QPixmap pixmap(pixmap1.scaled(640,480));

        p.setBrush(QPalette::Background,  pixmap);
        setPalette(p);








}

ajouterclient::~ajouterclient()
{
    delete ui;
}

void ajouterclient::on_AJCprecedentPB_clicked()
{
    this->hide();
    menuprincipale * dlg = new  menuprincipale ();
    dlg->show();
}

void ajouterclient::on_AJclientPB_clicked()
{
    this->hide();
    clientaj * dlg = new  clientaj ();
    dlg->show();
}
