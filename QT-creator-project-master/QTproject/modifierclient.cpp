#include "modifierclient.h"
#include "ui_modifierclient.h"
#include <QPalette>
#include <QDesktopWidget>
#include <QtGui>
#include"menuprincipale.h"

modifierclient::modifierclient(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::modifierclient)
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

modifierclient::~modifierclient()
{
    delete ui;
}

void modifierclient::on_MCprecedentPB_clicked()
{
    this->hide();
    menuprincipale * dlg = new  menuprincipale ();
    dlg->show();
}

void modifierclient::on_Modifier_clicked()
{
    //int Number =ui->maillot_M->text().toInt();
    //QSqlQueryModel *model =tmpCp.rechercherPersonneclient(Number);
    //int NumberRech = model->data(model->index(0,8)).toInt();
    //if(Number == NumberRech)

        QString CIN = ui->Lcin_M->text();
        QString Nom= ui->Lnom_M->text();
        QString Prenom = ui->Lprenom_M->text();
        QString Num_Tel = ui->Lnum_tel_M->text();
        int Age =ui->Lage_M->text().toInt();
        QString Date_de_naissance=ui->dateN_M->text();
        QString  Date_du_contrat_du=ui->dateD_M->text();
        QString Date_du_contrat_au=ui->dateA_M->text();
        int Number =ui->maillot_M->text().toInt();
        personneclient *PE = new personneclient(Prenom,Nom,Num_Tel,CIN,Age,Date_de_naissance,Date_du_contrat_du,Date_du_contrat_au,Number);
        if(PE->modifierclient(PE))
{
        QMessageBox::information(this, qApp->tr("Succès!"),
                                          qApp->tr("Votre personne a été modifié ."), QMessageBox::Ok);
        }
        else if(!PE->modifierclient(PE))
        {
          // Error Handling, check query.lastError(), probably return
            QMessageBox::critical(this, qApp->tr("Cannot open database"),
                qApp->tr("Vérifier vos champs s'il vous plait.\n"

                        "Click Cancel to exit."), QMessageBox::Cancel);
        }
    if (ui->Lnom_M->text().isEmpty())
    {
        QMessageBox::critical(this, qApp->tr("Erreur !"),
                                  qApp->tr("Choisir un nom s'il vous plait ."), QMessageBox::Cancel);

     }

       else if (ui->Lprenom_M->text().isEmpty())
        {
            QMessageBox::critical(this, qApp->tr("Erreur !"),
                                      qApp->tr("Choisir le prenom s'il vous plait ."), QMessageBox::Cancel);

         }

        else if (ui->Lnum_tel_M->text().isEmpty())
        {
             QMessageBox::critical(this, qApp->tr("Erreur !"),
                                      qApp->tr("Choisir un num de tel s'il vous plait ."), QMessageBox::Cancel);

         }
    else if (ui->Lage_M->text().isEmpty())
    {
         QMessageBox::critical(this, qApp->tr("Erreur !"),
                                  qApp->tr("Choisir un age s'il vous plait ."), QMessageBox::Cancel);

     }
    else if (ui->Lcin_M->text().isEmpty())
    {
         QMessageBox::critical(this, qApp->tr("Erreur !"),
                                  qApp->tr("Choisir un cin s'il vous plait ."), QMessageBox::Cancel);

     }

        else if (ui->dateN_M->text().isEmpty())
        {
             QMessageBox::critical(this, qApp->tr("Erreur !"),
                                      qApp->tr("Choisir une date de naissance s'il vous plait ."), QMessageBox::Cancel);

         }

            else if (ui->dateD_M->text().isEmpty())
        {
             QMessageBox::critical(this, qApp->tr("Erreur !"),
                                      qApp->tr("Choisir une date du debut de contrat s'il vous plait ."), QMessageBox::Cancel);

        }
    else if (ui->dateA_M->text().isEmpty())
{
     QMessageBox::critical(this, qApp->tr("Erreur !"),
                              qApp->tr("Choisir une date de fin de contrat s'il vous plait ."), QMessageBox::Cancel);

}
    else if (ui->maillot_M->text().isEmpty())
{
     QMessageBox::critical(this, qApp->tr("Erreur !"),
                              qApp->tr("Choisir un num de maillot s'il vous plait ."), QMessageBox::Cancel);

}
}




