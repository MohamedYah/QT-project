#ifndef FCLIENTELE_H
#define FCLIENTELE_H
#include"QString"
#include"QDebug"
#include "connection.h"
#include "QSqlQueryModel"
#include "finance.h"
#include <QPalette>
#include <QDesktopWidget>
#include <QtGui>
class Fclientele : public facture
{
private:
    QString DA;
    QString DF;
    int IDC;


public:
    Fclientele();
    Fclientele(QString Nom,QString Adresse,QString Num_Tel,QString courriel,int ID,QString Info,QString paiement,QString Tpaiement,QString DA,QString DF,int IDC);
    QString getDA(){return DA;};
    QString getDF(){return DF;};
    int    getIDC(){return IDC;};
    bool AjoutFclientele(Fclientele *FC);
   virtual QSqlQueryModel * AfficherFclientele();
   QSqlQueryModel * RechercherFclientele(int IDC);
   bool SupprimerFclientele(int IDC);
   bool ModifierFclientele(Fclientele *FC);


};

#endif // FCLIENTELE_H
