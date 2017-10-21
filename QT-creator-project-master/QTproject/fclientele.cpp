#include "fclientele.h"
#include "QSqlQueryModel"


Fclientele::Fclientele()
{
}
Fclientele::Fclientele(QString Nom,QString Adresse,QString Num_Tel,QString courriel,int ID,QString Info,QString paiement,QString Tpaiement,QString DA,QString DF,int IDC):facture(Nom,Adresse,Num_Tel,courriel,ID,Info,paiement,Tpaiement)

{

    this->DA=DA;
   this->DF=DF;
    this->IDC=IDC;

}

bool Fclientele::AjoutFclientele(Fclientele *FC)
{
QSqlQuery query;
QString IDC= QString::number(FC->getIDC());
QString str= "insert into Fclientele values('"+FC->getDA()+"','"+FC->getDF()+"','"+IDC+"')";
qDebug()<<str;
if (query.exec(str))
    return true;
else
    return false;


}

QSqlQueryModel * Fclientele::AfficherFclientele()
{
    QSqlQueryModel * model= new QSqlQueryModel();
    createConnection();
    model->setQuery("select * from Fclientele");
    model->setHeaderData(0, Qt::Horizontal, QObject::tr("NOM"));
    model->setHeaderData(1, Qt::Horizontal, QObject::tr("PRENOM"));
    model->setHeaderData(2, Qt::Horizontal, QObject::tr(" NUM_TEL"));
    return model;
}

QSqlQueryModel * Fclientele::RechercherFclientele(int IDC)
{
     QSqlQueryModel * model= new QSqlQueryModel();
    createConnection();
    QString str="select * from Fclientele where  IDC ="+QString::number(IDC);
    model->setQuery(str);
    return model;
}

bool Fclientele::SupprimerFclientele(int IDC)
{
    QSqlQuery query;
    QString str="delete from Fclientele where IDC ="+QString::number(IDC);
    qDebug()<<str;
    bool res = query.exec(str);
    return res;

}

bool Fclientele::ModifierFclientele(Fclientele *FC)
{
createConnection();
    QSqlQuery query;
    QString IDC= QString::number(FC->getIDC());

    QString str=("update Fclientele set DA='"+FC->getDA()+"'"
                ",DF='"+FC->getDF()+"'"
                ",IDC='"+FC->getDF()+"'where IDC='"+IDC+"'");

    qDebug()<<str;
    bool res =query.exec(str);
    return res;
}
