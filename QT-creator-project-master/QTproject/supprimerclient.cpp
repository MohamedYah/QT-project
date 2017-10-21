#include "supprimerclient.h"
#include "ui_supprimerclient.h"
#include <QPalette>
#include <QDesktopWidget>
#include <QtGui>
#include"menuprincipale.h"


supprimerclient::supprimerclient(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::supprimerclient)
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

supprimerclient::~supprimerclient()
{
    delete ui;
}

void supprimerclient::on_SCprecedentPB_clicked()
{
    this->hide();
    menuprincipale * dlg = new  menuprincipale ();
    dlg->show();
}

void supprimerclient::on_supprimer_2_clicked()
{
    int Number =ui->Lnumbers_2->text().toInt();
    QSqlQueryModel *model =tmpCp.rechercherPersonneclient(Number);
    int NumberRech = model->data(model->index(0,8)).toInt();
    if(Number == NumberRech)
    {
        QString str = " Vous voulez vraiment supprimer \n la personne  ayant le nombre :"+ ui->Lnumbers_2->text();
        int ret = QMessageBox::question(this, tr("ATB"),str,QMessageBox::Ok|QMessageBox::Cancel);

        switch (ret) {
          case QMessageBox::Ok:
              if (tmpCp.supprimerPersonneclient(Number))
                  QMessageBox ::information(0, qApp->tr("Suppression"),
                      qApp->tr("La personne a été supprimé"), QMessageBox::Ok);

             /* ui->personneView->setModel(tmpCp.afficherPersonne());
              ui->personneView_2->setModel(tmpCp.afficherPersonne());*/

              break;
          case QMessageBox::Cancel:

              break;
          default:
              // should never be reached
              break;
        }



    }
     else
    {

        QMessageBox::critical(0, qApp->tr("Suppression"),
            qApp->tr("personne non trouvé"), QMessageBox::Cancel);

    }

}
