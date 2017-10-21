#include "clientele.h"
#include "personne.h"
#include "QSqlQueryModel"
Clientele::Clientele()
{
}

Clientele::Clientele(QString Prenom,QString Nom,QString Num_Tel,QString CIN,QString Adresse,int ID,QString courriel,int ID_client,int Age,QString Date_N,QString Date_D,QString Date_F,QString Taille,QString Poids,int Number):Personne(Prenom,Nom,Num_Tel,CIN,Adresse,ID,courriel)
{this->ID_client=ID_client;
    this->Age=Age;
    this->Date_D=Date_D;
    this->Date_F=Date_F;
    this->Date_N=Date_N;
    this->Taille=Taille;
    this->Poids=Poids;
    this->Number=Number;

}
bool Clientele:: AjoutClientele(Clientele *CL)
{
//Personne::AjoutPersonne();

QSqlQuery query;
QString IDD= QString::number(CL->getID_client());
QString NUM= QString::number(CL->getNumber());
QString AGE= QString::number(CL->getAge());


QString str= "insert into Client values('"+IDD+"','"+AGE+"','"+CL->getDate_N()+"','"+CL->getDate_D()+"','"+CL->getDate_F()+"','"+CL->getTaille()+"','"+CL->getPoids()+"','"+NUM+"')";
qDebug()<<str;
if (query.exec(str))
    return true;
else
    return false;


}

QSqlQueryModel * Clientele::AfficherClientele()
{
    QSqlQueryModel * model= new QSqlQueryModel();
    model->setQuery("select Nom,Prenom,Num_Tel,CIN,Adresse,ID_client,Age,Date_N,Date_D,Date_F,Taille,Poids,Number,courriel from Personne p  , Client c where (p.ID=c.ID_client)");
    model->setHeaderData(0, Qt::Horizontal, QObject::tr("NOM"));
    model->setHeaderData(1, Qt::Horizontal, QObject::tr("PRENOM"));
    model->setHeaderData(2, Qt::Horizontal, QObject::tr("NUM_TEL"));
   return model;
}

QSqlQueryModel * Clientele::RechercherClientele(int ID_client)
{
     QSqlQueryModel * model= new QSqlQueryModel();

     QString str="select * from Personne p,Client c where ( (p.ID=c.ID_client)and (c.ID_client="+QString::number(ID_client)+"))";
   qDebug()<<str;
    // QString str="select * from Client where ID_client="+QString::number(ID_client);
    model->setQuery(str);
    return model;
}

bool Clientele::SupprimerClientele(int ID_client)
{
    QSqlQuery query;
    QString str="delete from Client where ID_client ="+QString::number( ID_client);
    qDebug()<<str;
    bool res = query.exec(str);
    return res;

}

bool Clientele::ModifierClientele(Clientele *CL)
{
createConnection();
    QSqlQuery query;
    QString IDD= QString::number(CL->getID());
    QString num= QString::number(CL->getNumber());
    QString AGE= QString::number(CL->getAge());


    QString str=("update Client set ID_client="+IDD+""",Age='"+AGE+"'"",Date_N='"+CL->getDate_N()+"'"",Date_D='"+CL->getDate_D()+"'"
                ",Date_F='"+CL->getDate_F()+"'"
                 ",Taille='"+CL->getTaille()+"'"
                 ",Poids='"+CL->getPoids()+"'"
                 ",Number='"+num+"'where ID_client='"+IDD+"'");

    qDebug()<<str;
    bool res =query.exec(str);
    return res;
}
