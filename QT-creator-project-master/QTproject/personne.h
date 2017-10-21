#ifndef PERSONNE_H
#define PERSONNE_H
#include"QString"
#include "QSqlQueryModel"
#include "QDate"
#include <QPalette>
#include <QDesktopWidget>
#include <QtGui>

class Personne
{private:

    QString Prenom ;
    QString Nom;
    QString Num_Tel;
    QString CIN ;
    QString Adresse ;
public:
    Personne(){};

     Personne(QString Prenom,QString Nom,QString Num_Tel,QString CIN,QString Adresse);
     QString getNom(){return Nom;};
     QString getPrenom(){return Prenom;} ;
     QString getNum_Tel() {return Num_Tel;};
     QString getCIN() {return CIN;};
     QString getAdresse(){return Adresse;};
    bool AjoutPersonne(Personne *PE);
    virtual QSqlQueryModel * AfficherPersonne();
    QSqlQueryModel * RechercherPersonne(int Number);
    bool SupprimerPersonne(int  Number);
    bool ModifierPersonne (Personne *PE);
};

#endif // PERSONNE_H
