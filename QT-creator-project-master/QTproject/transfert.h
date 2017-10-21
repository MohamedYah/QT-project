#ifndef TRANSFERT_H
#define TRANSFERT_H
#include "clientele.h"
#include "personne.h"
#include"QString"
#include "QSqlQueryModel"
#include "QDate"
#include <QPalette>
#include <QDesktopWidget>
#include <QtGui>
#include "personne.h"

class Transfert
{private:

    int  ID_client_t;
    QString Type;
    QString Position ;
    QString Date_T;
    QString Equipe;



public:
    Transfert();
     Transfert(int ID_client_t,QString Type,QString Position,QString Date_T,QString Equipe);
     int getID_client_t() {return ID_client_t;};
    QString getType() {return Type;};
    QString getPosition() {return Position;};
    QString getDate_T(){return Date_T;};
    QString getEquipe(){return  Equipe;};

   bool AjoutTransfert(Transfert *TR);
   virtual QSqlQueryModel * AfficherTransfert();
   QSqlQueryModel * RechercherTransfert(int ID_client_t);
   bool SupprimerTransfert(int ID_client);
   bool ModifierTransfert(Transfert *TR);


};


#endif // TRANSFERT_H
