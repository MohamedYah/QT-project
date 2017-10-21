#ifndef FFOURNISSEUR_H
#define FFOURNISSEUR_H
#include "finance.h"

class Ffournisseur : public facture
{private:
    QString Nb_stock;
    int IDF;
    QString N_Societe;
    QString N_Type;
    QString N_Produit;



public:
    Ffournisseur();
    Ffournisseur(QString Nom,QString Adresse,QString Num_Tel,QString courriel,int ID,QString Info,QString paiement,QString Tpaiement,int IDF,QString Nb_stock,QString N_Societe,QString N_Type,QString N_Produit);
    int getIDF(){return IDF;};
     QString getNb_stock(){return Nb_stock;};
    QString getN_Societe(){return  N_Societe;} ;
    QString getN_Type() {return  N_Type;};
    QString getN_Produit() {return N_Produit;};

    bool AjoutFfournisseur(Ffournisseur *FF);
   virtual QSqlQueryModel * AfficherFfournisseur();
   QSqlQueryModel * RechercherFfournisseur(int IDF);
   bool SupprimerFfournisseur(int  IDF);
   bool ModifierFfournisseur(Ffournisseur *FF);
};

#endif // FFOURNISSEUR_H
