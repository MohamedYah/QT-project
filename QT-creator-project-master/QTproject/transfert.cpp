#include "transfert.h"

Transfert::Transfert()
{
}

Transfert::Transfert(int ID_client_t,QString Type,QString Position,QString Date_T,QString Equipe)
{this->ID_client_t=ID_client_t;
 this->Type=Type;
 this->Position=Position;
 this->Date_T=Date_T;
 this->Equipe=Equipe;

}
bool Transfert:: AjoutTransfert(Transfert *TR)
{
//Personne::AjoutPersonne();

    QString  ID_client_t= QString::number(TR->getID_client_t());





        QSqlQuery qry;
        QString str = "SELECT ID FROM Personne WHERE ID =  '"+  ID_client_t+"'";
          qDebug()<<str;

             if(qry.exec(str))
            {   int count=0;
                while(qry.next())
                {
                    count++;
                }


                  if(count==1)
                 {
                    //ui->A->setText("LE CLIENT EXISTE");
                    QSqlQuery query;
                    QString IDD= QString::number(TR->getID_client_t());

                    QString str= "insert into Transfert values('"+IDD+"','"+TR->getType()+"','"+TR->getPosition()+"','"+TR->getDate_T()+"','"+TR->getEquipe()+"')";
                    qDebug()<<str;
                    if (query.exec(str))
                        return true;
                    else
                        return false;


                 }



                 if(count==0)
                  {


                  }



}
}

QSqlQueryModel * Transfert::AfficherTransfert()
{
    QSqlQueryModel * model= new QSqlQueryModel();

   // model->setQuery("select  * from Personne p, Client c where (p.ID=c.ID_client)");
    model->setQuery("select Nom,Prenom,Num_Tel,CIN,Adresse,ID_client,Age,Date_N,Date_D,Date_F,Taille,Poids,Number,Type,Position,Date_T ,Equipe  from Personne p  , Client c ,Transfert t where ((p.ID=c.ID_client)and (p.ID=t.ID_client_t))");
    model->setHeaderData(0, Qt::Horizontal, QObject::tr("NOM"));
    model->setHeaderData(1, Qt::Horizontal, QObject::tr("PRENOM"));
    model->setHeaderData(2, Qt::Horizontal, QObject::tr("NUM_TEL"));
   return model;
}

QSqlQueryModel *Transfert::RechercherTransfert(int ID_client_t)
{
     QSqlQueryModel * model= new QSqlQueryModel();

     QString str="select * from Personne p,Transfert t where ( (p.ID=t.ID_client_t)and (t.ID_client_t="+QString::number(ID_client_t)+"))";
   qDebug()<<str;
    // QString str="select * from Client where ID_client="+QString::number(ID_client);
    model->setQuery(str);
    return model;
}

bool Transfert::SupprimerTransfert(int ID_client_t)
{
    QSqlQuery query;
    QString str="delete from Transfert where ID_client_t ="+QString::number( ID_client_t);
    qDebug()<<str;
    bool res = query.exec(str);
    return res;

}

bool Transfert::ModifierTransfert(Transfert *TR)
{
createConnection();
    QSqlQuery query;
    QString IDDt= QString::number(TR->getID_client_t());



    QString str=("update Transfert set ID_client_t='"+IDDt+"'"",Type='"+TR->getType()+"'"",Position='"+TR->getPosition()+"'"",Date_t='"+TR->getDate_T()+"'"
                 ",Equipe='"+TR->getEquipe()+"'where ID_client_t='"+IDDt+"'");

    qDebug()<<str;
    bool res =query.exec(str);
    return res;
}
