#include "ffournisseur.h"
#include "QSqlQueryModel"
Ffournisseur::Ffournisseur()
{
}


Ffournisseur::Ffournisseur(QString Nom,QString Adresse,QString Num_Tel,QString courriel,int ID,QString Info,QString paiement,QString Tpaiement,int IDF,QString Nb_stock,QString N_Societe,QString N_Type,QString N_Produit):facture(Nom,Adresse,Num_Tel,courriel,ID,Info,paiement,Tpaiement)

{

    this->Nb_stock=Nb_stock;
   this->IDF=IDF;
    this->N_Societe=N_Societe;
   this->N_Type=N_Type;
    this->N_Produit=N_Produit;
}


bool Ffournisseur::AjoutFfournisseur(Ffournisseur *FF)
{
QSqlQuery query;
QString IDF= QString::number(FF->getIDF());
QString str= "insert into Ffournisseur values('"+FF->getNb_stock()+"','"+IDF+"','"+FF->getN_Societe()+"','"+FF->getN_Type()+"','"+FF->getN_Produit()+"')";
qDebug()<<str;
if (query.exec(str))
    return true;
else
    return false;


}

QSqlQueryModel * Ffournisseur::AfficherFfournisseur()
{
    QSqlQueryModel * model= new QSqlQueryModel();
    createConnection();
    model->setQuery("select * from Ffournisseur");
    model->setHeaderData(0, Qt::Horizontal, QObject::tr("NOM"));
    model->setHeaderData(1, Qt::Horizontal, QObject::tr("PRENOM"));
    model->setHeaderData(2, Qt::Horizontal, QObject::tr(" NUM_TEL"));
    return model;
}

QSqlQueryModel * Ffournisseur::RechercherFfournisseur(int IDF)
{
     QSqlQueryModel * model= new QSqlQueryModel();
    createConnection();
    QString str="select * from Ffournisseur where  IDF ="+QString::number(IDF);
    model->setQuery(str);
    return model;
}

bool Ffournisseur::SupprimerFfournisseur(int IDF)
{
    QSqlQuery query;
    QString str="delete from Ffournisseur where IDF ="+QString::number(IDF);
    qDebug()<<str;
    bool res = query.exec(str);
    return res;

}

bool Ffournisseur::ModifierFfournisseur(Ffournisseur *FF)
{
createConnection();
    QSqlQuery query;
    QString IDF= QString::number(FF->getIDF());

    QString str=("update Ffournisseur set Nb_stock='"+FF->getNb_stock()+"'"
                ",IDF='"+IDF+"'"
                ",N_Societe='"+FF->getN_Societe()+"'"
                ",N_Type='"+FF->getN_Type()+"'"
                ",N_Produit='"+FF->getN_Produit()+"'where IDF='"+IDF+"'");

    qDebug()<<str;
    bool res =query.exec(str);
    return res;
}
