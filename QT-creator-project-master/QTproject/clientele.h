#ifndef CLIENTELE_H
#define CLIENTELE_H
#include "personne.h"
#include"QString"
#include "QSqlQueryModel"
#include "QDate"
#include <QPalette>
#include <QDesktopWidget>
#include <QtGui>
class Clientele : public Personne
{
private:
friend class Transfert ;
    int ID_client;
    int Age;
    QString Date_N;
    QString Date_D;
    QString Date_F;
    QString Taille;
    QString Poids ;

    int  Number;
public:
    Clientele();
    Clientele(QString Prenom,QString Nom,QString Num_Tel,QString CIN,QString Adresse,int ID,QString courriel,int ID_client,int Age,QString Date_N,QString Date_D,QString Date_F,QString Taille,QString Poids,int Number);
    int getID_client(){return ID_client;};
    int getAge(){return Age;};
    QString getDate_N() {return Date_N;};
    QString getDate_D() {return Date_D;};
    QString getDate_F(){return Date_F;};
    QString getTaille(){return  Taille;};
    QString getPoids(){return  Poids;};
    int getNumber(){return  Number;};

   bool AjoutClientele(Clientele *CL);
   virtual QSqlQueryModel * AfficherClientele();
   QSqlQueryModel * RechercherClientele(int ID_client);
   bool SupprimerClientele(int ID_client);
   bool ModifierClientele(Clientele *CL);
};

#endif // CLIENTELE_H
