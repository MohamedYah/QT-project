#ifndef PERSONNE_H
#define PERSONNE_H
#include"QString"
#include"QDebug"
#include "connection.h"
#include "QSqlQueryModel"

#include <QPalette>
#include <QDesktopWidget>
#include <QtGui>
class Personne
{

private:

    QString Prenom ;
    QString Nom;
    QString Num_Tel;
    QString CIN ;
    QString Adresse ;
    int ID;
public:
    Personne();

     Personne(QString Prenom,QString Nom,QString Num_Tel,QString CIN,QString Adresse,int ID);
     QString getNom(){return Nom;};
     QString getPrenom(){return Prenom;} ;
     QString getNum_Tel() {return Num_Tel;};
     QString getCIN() {return CIN;};
     QString getAdresse(){return Adresse;};
     int getID(){return ID;};
    virtual bool AjoutPersonne(Personne *PE);
    virtual QSqlQueryModel * AfficherPersonne();
    QSqlQueryModel * RechercherPersonne(int ID);
    bool SupprimerPersonne(int  ID);
    bool ModifierPersonne (Personne *PE);
};

#endif // PERSONNE_H
