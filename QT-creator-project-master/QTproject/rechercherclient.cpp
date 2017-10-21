#include "rechercherclient.h"
#include "ui_rechercherclient.h"
#include <QPalette>
#include <QDesktopWidget>
#include <QtGui>
#include"menuprincipale.h"

rechercherclient::rechercherclient(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::rechercherclient)
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

rechercherclient::~rechercherclient()
{
    delete ui;
}

void rechercherclient::on_RCprecedentPB_clicked()
{
    this->hide();
    menuprincipale * dlg = new  menuprincipale ();
    dlg->show();
}

void rechercherclient::on_recherche_clicked()
{
    int Number =ui->numberr->text().toInt();
    QSqlQueryModel *model=tmpCp.rechercherPersonneclient(Number);
    int NumberRech = model->data(model->index(0,8)).toInt();
    if( Number ==  NumberRech)
    {
        ui->rechview->show();
        ui->rechview->setModel(model);
}
}
