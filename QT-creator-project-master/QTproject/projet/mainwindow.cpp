#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QPalette>
#include <QDesktopWidget>
#include <QtGui>
#include"menuprincipale.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);



    //QPixmap pix("C:/Users/MohamedAnes/Desktop/QTT/gestion de la clientele/clientele/coevercoaching.jpg");
    //pix.scaled ( width, height, Qt::IgnoreAspectRatio, Qt::FastTransformation )
    // ui->Lpicture->setPixmap(pix);
    //Using QPalette you can set background image as follows.
         QPalette p = palette();

         //Load image to QPixmap, Give full path of image
        QPixmap pixmap1("C:/Users/MohamedAnes/Desktop/projet/projet/coevercoaching.jpg"); //For emulator C: is ..\epoc32\winscw\c so image must be at that location

        //resize image if it is larger than screen size.
        QDesktopWidget* desktopWidget = QApplication::desktop();
        QRect rect = desktopWidget->availableGeometry();

        QSize size(rect.width() , rect.height());
        //resize as per your requirement..
        QPixmap pixmap(pixmap1.scaled(640,480));

        p.setBrush(QPalette::Background,  pixmap);
        setPalette(p);
         ui->Lusername_2->setText("<font color=#FFFFCC>"+ui->Lusername_2->text()+"</font>" );
         ui->Lpassword_2->setText("<font color=#FFFFCC>"+ui->Lpassword_2->text()+"</font>" );
         QPalette tmp3( ui->groupBox->palette() );
         tmp3.setColor( QPalette::Base, QColor( 255, 255, 255) );
         tmp3.setColor( QPalette::Background, QColor( 11, 96, 176) );
         tmp3.setColor( QPalette::Foreground, QColor( 255, 255, 255) );
         tmp3.setColor( QPalette::Text, QColor(50 , 255, 50) );
         tmp3.setColor( QPalette::ButtonText, QColor( 255, 255, 255) );
         tmp3.setColor( QPalette::Button, QColor( 255, 100, 255) );
         tmp3.setColor(	QPalette::AlternateBase, QColor( 255, 255, 255) );

         ui->groupBox->setPalette(tmp3);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_quitterPB_clicked()
{
    this->close();
}

void MainWindow::on_APassword_clicked()
{
    if(ui->APassword->isChecked()){ui->Lpassword->setEchoMode(QLineEdit::Normal);}

    else ui->Lpassword->setEchoMode(QLineEdit::Password);
}




void MainWindow::on_login_clicked()
{

        QString username ,password;

        username=ui->Lusername->text();
            password=ui->Lpassword->text();

            createConnection();
        QSqlQuery qry;
        QString str = "SELECT * FROM identifier WHERE login =  '"+username+"'  and password =  '"+password+"'";
          qDebug()<<str;

             if(qry.exec(str))
            {   int count=0;
                while(qry.next())
                {
                    count++;
                }


                  if(count==1)
                 {
                    ui->A->setText("Welcome Connected");
                    this->hide();
                    menuprincipale * dlg = new menuprincipale();
                    dlg->show();
                 }

                  if(count>1)

                  {
                  ui->A->setText("Duplicate login or password");
                  }

                 if(count==0)
                  {
                    ui->A->setText("Wrong login or password");
                  }

        }

            else
                ui->A->setText("Wrong login or password");
    }


