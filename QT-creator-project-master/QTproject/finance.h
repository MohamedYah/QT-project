#ifndef FINANCE_H
#define FINANCE_H
#include"QString"
#include"QDebug"
#include "connection.h"
#include "QSqlQueryModel"
#include <QDebug>
#include <QPalette>
#include <QDesktopWidget>
#include <QtGui>
class facture
{
protected :
    QString Nom;
    QString Adresse ;
    QString Num_Tel;
    QString courriel ;
    int  ID;
    QString Info;
    QString paiement;
    QString Tpaiement;


public:
    facture();
    facture(QString Nom,QString Adresse,QString Num_Tel,QString courriel,int ID,QString Info,QString paiement,QString Tpaiement);
    QString getNom(){return Nom;};
    QString getAdresse(){return Adresse;} ;
    QString getNum_Tel() {return Num_Tel;};
    QString getcourriel() {return courriel;};
    int getID(){return  ID;};
    QString getInfo(){return Info;};
    QString getpaiement(){return paiement;};
    QString getTpaiement(){return Tpaiement; };
    bool AjoutFacture(facture *FA);
   virtual QSqlQueryModel * AfficherFacture();
   QSqlQueryModel * RechercherFacture(int ID);
   bool SupprimerFacture(int  ID);
   bool ModifierFacture(facture *FA);

};

#endif // FINANCE_H
