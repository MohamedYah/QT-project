#ifndef PERSONNECLIENT_H
#define PERSONNECLIENT_H

#include"QString"
#include "QSqlQueryModel"
#include "QDate"
#include <QPalette>
#include <QDesktopWidget>
#include <QtGui>
#include"menuprincipale.h"


class personneclient
{
protected:

    int Age;
    QString Prenom ;
    QString Nom;
    QString Num_Tel;
    QString CIN ;
    QString Date_de_naissance;
    QString Date_du_contrat_du;
    QString Date_du_contrat_au;
    int Number ;



public:

    personneclient(){};
    personneclient(QString Prenom,QString Nom,QString Num_Tel,QString CIN,int Age,QString Date_de_naissance,QString Date_du_contrat_du,QString Date_du_contrat_au,int Number);
     QString getNom(){return Nom;};
    QString getPrenom(){return Prenom;} ;
     QString getNum_Tel() {return Num_Tel;};
     QString getCIN() {return CIN;};
     int getAge(){return Age;};
     QString getDate_de_naissance(){return Date_de_naissance;};
     QString getDate_du_contrat_du(){return Date_du_contrat_du;};
     QString getDate_du_contrat_au(){return Date_du_contrat_au;};
     int getNumber(){return Number;};

    bool ajoutpersonneclient(personneclient *PE);
    virtual QSqlQueryModel * afficherPersonneclient();
    QSqlQueryModel * rechercherPersonneclient(int Number);
    bool supprimerPersonneclient (int  Number);
    bool modifierclient (personneclient *PE);


};






#endif // PERSONNECLIENT_H
