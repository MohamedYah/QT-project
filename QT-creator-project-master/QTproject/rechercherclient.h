#ifndef RECHERCHERCLIENT_H
#define RECHERCHERCLIENT_H

#include <QDialog>
#include "QSqlQueryModel"
#include"personneclient.h"
#include "clientaj.h"

namespace Ui {
class rechercherclient;
}

class rechercherclient : public QDialog
{
    Q_OBJECT
    
public:
    explicit rechercherclient(QWidget *parent = 0);
    ~rechercherclient();
    
private slots:
    void on_RCprecedentPB_clicked();

    void on_recherche_clicked();

private:
    Ui::rechercherclient *ui;
    personneclient tmpCp;

};

#endif // RECHERCHERCLIENT_H
