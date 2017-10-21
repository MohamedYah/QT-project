#include "personneclient.h"
#include"QDebug"
#include "connection.h"
#include"modifierclient.h"
#include"modifierclient.cpp"
#include "modifierclient.h"
#include "ui_modifierclient.h"
#include <QPalette>
#include <QDesktopWidget>
#include <QtGui>
/*personneclient::personneclient()
{
}*/

personneclient::personneclient (QString Prenom,QString Nom,QString Num_Tel,QString CIN,int Age,QString Date_de_naissance,QString Date_du_contrat_du,QString Date_du_contrat_au,int Number)
{
    this->Prenom=Prenom;
    this->Nom=Nom;
    this->Num_Tel=Num_Tel;
    this->CIN=CIN;
    this->Age=Age;
    this->Date_de_naissance=Date_de_naissance;
    this->Date_du_contrat_au=Date_du_contrat_au;
    this->Date_du_contrat_du=Date_du_contrat_du;
    this->Number=Number;
}

bool personneclient:: ajoutpersonneclient(personneclient *PE)
{
createConnection();
QSqlQuery query;
QString res= QString::number(PE->getAge());
QString str= "insert into Personne values('"+PE->getNom()+"','"+PE->getPrenom()+"','"+PE->getNum_Tel()+"','"+PE->getCIN()+"',"+QString::number(PE->getAge())+",'"+PE->getDate_du_contrat_du()+"','"+PE->getDate_du_contrat_au()+"','"+PE->getDate_de_naissance()+"',"+QString::number(PE->getNumber())+")";
qDebug()<<str;
if (query.exec(str))
    return true;
else
    return false;


}

QSqlQueryModel * personneclient::afficherPersonneclient()
{
    QSqlQueryModel * model= new QSqlQueryModel();
    createConnection();
    model->setQuery("select * from client");
    model->setHeaderData(0, Qt::Horizontal, QObject::tr("NOM"));
    model->setHeaderData(1, Qt::Horizontal, QObject::tr("PRENOM"));
    model->setHeaderData(2, Qt::Horizontal, QObject::tr("NUM_TEL"));
    return model;
}

QSqlQueryModel * personneclient::rechercherPersonneclient(int Number)
{
     QSqlQueryModel * model= new QSqlQueryModel();
    createConnection();
    QString str="select * from client where  Number ="+QString::number(Number);
    model->setQuery(str);
    return model;
}

bool personneclient::supprimerPersonneclient(int Number)
{
    QSqlQuery query;
    QString str="delete from client where Number ="+QString::number(Number);
    qDebug()<<str;
    bool res = query.exec(str);
    return res;

}

bool personneclient::modifierclient(personneclient *PE)
{
createConnection();
    QSqlQuery query;
    QString ag= QString::number(PE->getAge());
    QString num= QString::number(PE->getNumber());

    QString str=("update Personne set Nom='"+PE->getNom()+"'"
                ",Prenom='"+PE->getPrenom()+"'"
                ",Num_Tel='"+PE->getNum_Tel()+"'"
                ",Age='"+ag+"'"
                ",CIN='"+PE->getCIN()+"'"
                ", Date_de_naissance='"+PE->getDate_de_naissance()+"'"
                ", Durée_de_contrat_du='"+PE->getDate_du_contrat_du()+"'"
                ", Durée_de_contrat_au='"+PE->getDate_du_contrat_au()+ "'"
            ",Number='"+num+ "'where Number='"+num+"'");

    qDebug()<<str;
    bool res =query.exec(str);
    return res;
}
















