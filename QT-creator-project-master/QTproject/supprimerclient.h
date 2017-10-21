#ifndef SUPPRIMERCLIENT_H
#define SUPPRIMERCLIENT_H

#include <QDialog>
#include"connection.h"
#include"personneclient.h"
#include "QSqlQueryModel"
#include "clientaj.h"
namespace Ui {
class supprimerclient;
}

class supprimerclient : public QDialog
{
    Q_OBJECT
    
public:
    explicit supprimerclient(QWidget *parent = 0);
    ~supprimerclient();
    
private slots:
    void on_SCprecedentPB_clicked();

    void on_supprimer_2_clicked();

private:
    Ui::supprimerclient *ui;
    personneclient tmpCp;

};

#endif // SUPPRIMERCLIENT_H
