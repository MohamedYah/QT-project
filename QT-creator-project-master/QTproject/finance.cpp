#include "finance.h"

facture::facture()
{
}

facture::facture(QString Nom,QString Adresse,QString Num_Tel,QString courriel,int ID,QString Info,QString paiement,QString Tpaiement)

{

    this->Nom=Nom;
    this->Adresse=Adresse;
    this->Num_Tel=Num_Tel;
    this->courriel=courriel;
    this->ID=ID;
    this->Info=Info;
    this->paiement=paiement;
    this->Tpaiement=Tpaiement;
}

bool facture::AjoutFacture(facture *FA)
{
QSqlQuery query;
QString IDD= QString::number(FA->getID());
QString str= "insert into Facture values('"+FA->getNom()+"','"+FA->getAdresse()+"','"+FA->getNum_Tel()+"','"+FA->getcourriel()+"','"+IDD+"','"+FA->getInfo()+"','"+FA->getpaiement()+"','"+FA->getTpaiement()+"')";
qDebug()<<str;
if (query.exec(str))
    return true;
else
    return false;


}

QSqlQueryModel * facture::AfficherFacture()
{
    QSqlQueryModel * model= new QSqlQueryModel();
    model->setQuery("select * from Facture");
    model->setHeaderData(0, Qt::Horizontal, QObject::tr("NOM"));
    model->setHeaderData(1, Qt::Horizontal, QObject::tr("PRENOM"));
    model->setHeaderData(2, Qt::Horizontal, QObject::tr("NUM_TEL"));
    return model;
}

QSqlQueryModel * facture::RechercherFacture(int ID)
{
     QSqlQueryModel * model= new QSqlQueryModel();
    QString str="select * from Facture where  ID ="+QString::number(ID);
    model->setQuery(str);
    return model;
}

bool facture::SupprimerFacture(int ID)
{
    QSqlQuery query;
    QString str="delete from Facture where ID ="+QString::number(ID);
    qDebug()<<str;
    bool res = query.exec(str);
    return res;

}

bool facture::ModifierFacture(facture *FA)
{
    QSqlQuery query;
    QString IDD= QString::number(FA->getID());

    QString str=("update Facture set Nom='"+FA->getNom()+"'"
                ",Adresse='"+FA->getAdresse()+"'"
                ",Num_Tel='"+FA->getNum_Tel()+"'"
                ",Courriel='"+FA->getcourriel()+"'"
                 ",ID='"+IDD+"'"
                ",Info='"+FA->getInfo()+"'"
                 ",Paiement='"+FA->getpaiement()+"'"
                  ",Tpaimement='"+FA->getTpaiement()+"'where ID='"+IDD+"'");

    qDebug()<<str;
    bool res =query.exec(str);
    return res;
}
