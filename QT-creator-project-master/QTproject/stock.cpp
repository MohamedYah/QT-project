#include "stock.h"
#include"QDebug"


/*stockfournisseur::stockfournisseur()
{
}*/

//***** Fournisseur

stockfournisseur::stockfournisseur(QString Prenom,QString Nom,QString Num_Tel,QString CIN,QString Adresse,int ID,QString courriel,QString Societe,int IDfournisseur):Personne(Prenom,Nom,Num_Tel,CIN,Adresse,ID,courriel)
{
    this->Societe=Societe;
    this->IDfournisseur=IDfournisseur;
}


bool stockfournisseur::ajoutpersonnefournisseur(stockfournisseur *SF)
{
    createConnection();
    QSqlQuery query;
    QString str= "insert into fournisseur values('"+SF->getSociete()+"',"+QString::number(SF->getIDfournisseur())+")";
    qDebug()<<str;
    if (query.exec(str))
        return true;
    else
        return false;

}

QSqlQueryModel * stockfournisseur::afficherfournisseur()
{
    QSqlQueryModel * model= new QSqlQueryModel();
    createConnection();
    model->setQuery("select Nom,Prenom,Num_Tel,CIN,Adresse,courriel,Societe,ID_fournisseur from Personne p  , fournisseur f where (p.ID=f.ID_fournisseur)");
    /*model->setHeaderData(0, Qt::Horizontal, QObject::tr("NOM"));
    model->setHeaderData(1, Qt::Horizontal, QObject::tr("PRENOM"));
    model->setHeaderData(2, Qt::Horizontal, QObject::tr("NUM_TEL"));*/
    //model->setHeaderData(, Qt::Horizontal, QObject::tr("courrie"));
    return model;
}
//rechercher fournisseur avec societe
QSqlQueryModel *stockfournisseur::rechercherfournisseur(QString Societe)
{

    QSqlQueryModel * model= new QSqlQueryModel();
    createConnection();

    QString str="select *from fournisseur f,personne p where ( (p.ID=f.ID_fournisseur)and (f.societe='"+Societe+"'))";
    qDebug()<<str;

    model->setQuery(str);
    model->setHeaderData(1, Qt::Horizontal, QObject::tr("prenom"));
        model->setHeaderData(0, Qt::Horizontal, QObject::tr("nom"));


        return model;
}

//rechercher fournisseur avec ID
QSqlQueryModel * stockfournisseur::RechercherID(int ID_fournisseur)
{
     QSqlQueryModel * model= new QSqlQueryModel();

     QString str="select * from Personne p,fournisseur f where ( (p.ID=f.ID_fournisseur)and (f.ID_fournisseur="+QString::number(ID_fournisseur)+"))";
   qDebug()<<str;
    model->setQuery(str);
    return model;
}
bool stockfournisseur::supprimerfournisseur(int ID_fournisseur)
{
    QSqlQuery query;
    QString str="delete from fournisseur where ID_fournisseur ="+QString::number(ID_fournisseur);
    qDebug()<<str;
    bool res = query.exec(str);
    return res;

}


 bool stockfournisseur:: Modifierfournisseur(stockfournisseur *SF)
 {
     createConnection();
         QSqlQuery query;

         QString str=("update fournisseur set societe='"+SF->getSociete()+"'""where ID_fournisseur="+QString::number(SF->getIDfournisseur()));

         qDebug()<<str;
         bool res =query.exec(str);
         return res;
 }

//******* Stock

bool stock::ajouterstock (stock *S)
{
createConnection();
QSqlQuery query;
QString str= "insert into stock values("+ QString::number(S->getQstock())+","+ QString::number(S->getQreserve())+",'"+S->getMarque()+"','"+S->getTypee()+"','"+S->getDescription()+"','"+S->getReference()+"',"+QString::number(S->getID())+")";
qDebug()<<str;
if (query.exec(str))
    return true;
else
    return false;
}
 stock::stock(int Qstock,int Qreserve,QString Marque,QString Typee,QString Description,QString Reference,int ID)
 {

     this->Qstock=Qstock;
     this->Qreserve=Qreserve;
     this->Marque=Marque;
     this->Typee=Typee;
     this->Description=Description;
     this->Reference=Reference;
     this->ID=ID;
 }

 QSqlQueryModel * stock::afficherstock()
 {
     QSqlQueryModel * model= new QSqlQueryModel();
     createConnection();
     model->setQuery("select * from stock");
     /*model->setHeaderData(0, Qt::Horizontal, QObject::tr("NOM"));
     model->setHeaderData(1, Qt::Horizontal, QObject::tr("PRENOM"));
     model->setHeaderData(2, Qt::Horizontal, QObject::tr("NUM_TEL"));*/
     return model;
 }

//recherche stock avec ID

 QSqlQueryModel * stock::RechercherID(int ID)
 {
      QSqlQueryModel * model= new QSqlQueryModel();

      QString str="select * from stock where ID="+QString::number(ID);
    qDebug()<<str;
     // QString str="select * from stockmedical where ID="+QString::number(ID_client);
     model->setQuery(str);
     return model;
 }

 bool stock::supprimerstock(int ID)
 {
     QSqlQuery query;
     QString str="delete from stock where ID ="+QString::number(ID);
     qDebug()<<str;
     bool res = query.exec(str);
     return res;

 }
 bool stock:: Modifierstock(stock *S)
 {

     createConnection();
         QSqlQuery query;

         QString str=("update stock set Qstock="+QString::number(S->getQstock())+""
                      ",Qreserve="+QString::number(S->getQreserve())+""
                      ",Marque='"+S->getMarque()+"'"
                      ",Type='"+S->getTypee()+"'"
                       ",Description='"+S->getDescription()+"'"
                      ",Reference='"+S->getReference()+"'"
                       "where ID="+QString::number(S->getID())+"");
         qDebug()<<str;
         bool res =query.exec(str);
         return res;
}

//**** Stock medical
 stockmedical::stockmedical(int Qstock,int Qreserve,QString Marque,QString Typee,QString Description,QString Reference,int ID, QString Delai_du,QString Delai_au,int ID_medical):stock(Qstock,Qreserve,Marque,Typee,Description,Reference,ID)
{
   this->Delai_du=Delai_du;
   this->Delai_au=Delai_au;
   this->ID_medical=ID_medical;
}
bool stockmedical::ajouterstockmedical (stockmedical *SM)
{

    createConnection();
    QSqlQuery query;
    QString str= "insert into stockmedical values('"+SM->getDelai_du()+"','"+SM->getDelai_au()+"',"+QString::number(SM->getID_medical())+")";
    qDebug()<<str;
    if (query.exec(str))
        return true;
    else
        return false;
}
 QSqlQueryModel * stockmedical::afficherstockmedical()
 {

     QSqlQueryModel * model= new QSqlQueryModel();
     createConnection();
     model->setQuery("select Qstock,Qreserve,Marque,Type,Description,Reference,Delai_Du,Delai_Au,ID_medical from stock s , stockmedical m where (s.ID=m.ID_medical)");
     /*model->setHeaderData(0, Qt::Horizontal, QObject::tr("NOM"));
     model->setHeaderData(1, Qt::Horizontal, QObject::tr("PRENOM"));
     model->setHeaderData(2, Qt::Horizontal, QObject::tr("NUM_TEL"));*/
     //model->setHeaderData(, Qt::Horizontal, QObject::tr("courrie"));
     return model;
 }
 QSqlQueryModel * stockmedical::rechercherstockmedical(QString typee)
 {

     QSqlQueryModel * model= new QSqlQueryModel();
     QString str="select *from stock s,stockmedical m where ((s.ID=m.ID_medical) and (s.type='"+typee+"'))";
     model->setQuery(str);
        /* model->setHeaderData(0, Qt::Horizontal, QObject::tr("nom"));
         model->setHeaderData(1, Qt::Horizontal, QObject::tr("prenom"));*/
     return model;
 }

 QSqlQueryModel * stockmedical::RechercherID_medical(int ID_medical)
 {
      QSqlQueryModel * model= new QSqlQueryModel();

      QString str="select * from stockmedical where ID_medical="+QString::number(ID_medical);
    qDebug()<<str;
     model->setQuery(str);
     return model;
 }

 bool stockmedical::supprimerstockmedical(int ID_medical)
 {
     QSqlQuery query;
     QString str="delete from stockmedical where ID_medical ="+QString::number(ID_medical);
     qDebug()<<str;
     bool res = query.exec(str);
     return res;

 }
 bool stockmedical:: Modifierstockmedical(stockmedical*SM)
 {
     createConnection();
         QSqlQuery query;

         QString str=("update stockmedical set Delai_Du='"+SM->getDelai_du()+"',Delai_Au='"+SM->getDelai_au()+"'where ID_medical="+QString::number(SM->getID_medical()));

         qDebug()<<str;
         bool res =query.exec(str);
         return res;
 }



 // **** Stock technique
 stocktechnique:: stocktechnique(int Qstock,int Qreserve,QString Marque,QString Typee,QString Description,QString Reference,int ID,QString taille,QString couleur,int ID_technique):stock(Qstock, Qreserve,Marque,Typee,Description,Reference,ID)
 {
     this->taille=taille;
     this->couleur=couleur;
     this->ID_technique=ID_technique;
 }
 bool stocktechnique::ajoutstocktechnique(stocktechnique *ST)
 {
     createConnection();
     QSqlQuery query;
     QString str= "insert into stocktechnique values("+QString::number(ST->getID_technique())+",'"+ST->gettaille()+"','"+ST->getcouleur()+"')";
     qDebug()<<str;
     if (query.exec(str))
         return true;
     else
         return false;

 }
 QSqlQueryModel * stocktechnique::afficherstocktechnique()
 {
     QSqlQueryModel * model= new QSqlQueryModel();
     createConnection();
     model->setQuery("select Qstock,Qreserve,Marque,Description,Reference,ID_technique,Taille,couleur from stock s,stocktechnique t where (s.ID=t.ID_technique)");
     /*model->setHeaderData(0, Qt::Horizontal, QObject::tr("NOM"));
     model->setHeaderData(1, Qt::Horizontal, QObject::tr("PRENOM"));
     model->setHeaderData(2, Qt::Horizontal, QObject::tr("NUM_TEL"));
     //model->setHeaderData(, Qt::Horizontal, QObject::tr("courrie"));*/
     return model;
 }
 QSqlQueryModel * stocktechnique::rechercherstocktechnique(QString typee)
 {

     QSqlQueryModel * model= new QSqlQueryModel();
     QString str="select *from stock s,stocktechnique t where ((s.ID=t.ID_technique) and (s.type='"+typee+"'))";
     model->setQuery(str);
        /* model->setHeaderData(0, Qt::Horizontal, QObject::tr("nom"));
         model->setHeaderData(1, Qt::Horizontal, QObject::tr("prenom"));*/
     return model;
 }
 QSqlQueryModel * stocktechnique::RechercherID_technique(int ID_technique)
 {
      QSqlQueryModel * model= new QSqlQueryModel();

      QString str="select * from stocktechnique where ID_technique="+QString::number(ID_technique);
    qDebug()<<str;
     model->setQuery(str);
     return model;
 }

 bool stocktechnique::supprimerstocktechnique(int ID_technique)
 {
     QSqlQuery query;
     QString str="delete from stocktechnique where ID_technique ="+QString::number(ID_technique);
     qDebug()<<str;
     bool res = query.exec(str);
     return res;

 }
 bool stocktechnique::Modifierstocktechnique(stocktechnique *ST)
 {

         createConnection();
         QSqlQuery query;

         QString str=("update stocktechnique set Taille='"+ST->gettaille()+"',couleur='"+ST->getcouleur()+"'where ID_technique="+QString::number(ST->getID_technique()));

         qDebug()<<str;
         bool res =query.exec(str);
         return res;
}
