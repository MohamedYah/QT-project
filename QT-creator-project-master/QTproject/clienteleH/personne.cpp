#include "personne.h"
#include "QSqlQueryModel"

Personne::Personne()
{
}
Personne::Personne (QString Prenom,QString Nom,QString Num_Tel,QString CIN,QString Adresse,int ID)
{
    this->Prenom=Prenom;
    this->Nom=Nom;
    this->Num_Tel=Num_Tel;
    this->CIN=CIN;
    this->Adresse=Adresse;
    this->ID=ID;
}

bool Personne:: AjoutPersonne(Personne*PE)
{
createConnection();
QSqlQuery query;
QString IDD= QString::number(PE->getID());
QString str= "insert into Personne values('"+PE->getNom()+"','"+PE->getPrenom()+"','"+PE->getNum_Tel()+"','"+PE->getCIN()+"','"+PE->getAdresse()+"','"+IDD+"')";
qDebug()<<str;
if (query.exec(str))
    return true;
else
    return false;


}

QSqlQueryModel * Personne::AfficherPersonne()
{
    QSqlQueryModel * model= new QSqlQueryModel();
    createConnection();
    model->setQuery("select * from Personne");
    model->setHeaderData(0, Qt::Horizontal, QObject::tr("NOM"));
    model->setHeaderData(1, Qt::Horizontal, QObject::tr("PRENOM"));
    model->setHeaderData(2, Qt::Horizontal, QObject::tr("NUM_TEL"));
    return model;
}

QSqlQueryModel * Personne::RechercherPersonne(int ID)
{
     QSqlQueryModel * model= new QSqlQueryModel();
    createConnection();
    QString str="select * from client where  Number ="+QString::number(ID);
    model->setQuery(str);
    return model;
}

bool Personne::SupprimerPersonne(int ID)
{
    QSqlQuery query;
    QString str="delete from client where Number ="+QString::number(ID);
    qDebug()<<str;
    bool res = query.exec(str);
    return res;

}

bool Personne::ModifierPersonne(Personne *PE)
{
createConnection();
    QSqlQuery query;
    QString IDD= QString::number(PE->getID());

    QString str=("update Personne set Nom='"+PE->getNom()+"'"
                ",Prenom='"+PE->getPrenom()+"'"
                ",Num_Tel='"+PE->getNum_Tel()+"'"
                ",CIN='"+PE->getCIN()+"'"
                 ",Adresse='"+PE->getAdresse()+"'"
                ",ID='"+IDD+ "'where ID='"+IDD+"'");

    qDebug()<<str;
    bool res =query.exec(str);
    return res;
}
