#ifndef STOCK_H
#define STOCK_H
#include"QString"
#include"personne.h"
#include"connection.h"
#include "QSqlQueryModel"

class stockfournisseur : public Personne
{

protected:

    QString Societe;
    int IDfournisseur;
public:
    stockfournisseur(){};
    stockfournisseur(QString Prenom,QString Nom,QString Num_Tel,QString CIN,QString Adresse,int ID,QString courriel,QString Societe,int IDfournisseur);
    QString getSociete(){return Societe;};
    int getIDfournisseur(){return IDfournisseur;};



   bool ajoutpersonnefournisseur(stockfournisseur *SF);

   virtual QSqlQueryModel * afficherfournisseur();
   QSqlQueryModel * rechercherfournisseur(QString Societe);

   QSqlQueryModel * RechercherID(int ID_fournisseur);
   bool supprimerfournisseur(int ID_fournisseur);

   bool Modifierfournisseur(stockfournisseur *SF);

};
class stock
{

protected:
    int Qstock;
    int Qreserve ;
    QString Marque;
    QString Typee ;
    QString Description;
    QString Reference;
    int ID;
public:
    stock(){};
    stock(int Qstock,int Qreserve,QString Marque,QString Typee,QString Description,QString Reference,int ID);
    int getQstock(){return Qstock;};
    int getQreserve(){return Qreserve;} ;
    QString getMarque() {return Marque;};
    QString getTypee() {return Typee;};
    QString getDescription(){return Description;};
    QString getReference(){return Reference;};
    int getID(){return ID;} ;



   bool ajouterstock(stock *S);

   virtual QSqlQueryModel * afficherstock();
   QSqlQueryModel * rechercherstock(QString typee);
   QSqlQueryModel * RechercherID(int ID);
   bool supprimerstock(int ID);
   bool Modifierstock(stock*S);

};


class stockmedical :public stock

 {

protected:

    QString Delai_du;
    QString Delai_au;
    int ID_medical;
public:
    stockmedical(){};
    stockmedical(int Qstock,int Qreserve,QString Marque,QString Typee,QString Description,QString Reference,int ID, QString Delai_du,QString Delai_au,int ID_medical);
    QString getDelai_du() {return Delai_du;};
    QString getDelai_au() {return Delai_au;};
    int getID_medical(){return ID_medical;} ;



   bool ajouterstockmedical(stockmedical *SM);
   virtual QSqlQueryModel * afficherstockmedical();
   QSqlQueryModel * rechercherstockmedical(QString typee);
   QSqlQueryModel * RechercherID_medical(int ID_medical);
   bool supprimerstockmedical(int ID_medical);
   bool Modifierstockmedical(stockmedical*SM);
};


class stocktechnique : public stock
{

protected:

    QString taille;
    QString couleur;
    int ID_technique;
public:
    stocktechnique(){};
    stocktechnique(int Qstock,int Qreserve,QString Marque,QString Typee,QString Description,QString Reference,int ID,QString taille,QString couleur,int ID_technique);
    QString gettaille(){return taille;};
    QString getcouleur(){return couleur;};
    int getID_technique(){return ID_technique;};




   bool ajoutstocktechnique(stocktechnique *ST);
   virtual QSqlQueryModel * afficherstocktechnique();
   QSqlQueryModel * rechercherstocktechnique(QString typee);
   QSqlQueryModel * RechercherID_technique(int ID_technique);
   bool supprimerstocktechnique(int ID_technique);
   bool Modifierstocktechnique(stocktechnique *ST);

};

#endif // STOCK_H
