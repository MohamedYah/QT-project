#ifndef MODIFIERCLIENT_H
#define MODIFIERCLIENT_H

#include <QDialog>
#include "QSqlQueryModel"
#include "personneclient.h"
#include "clientaj.h"
namespace Ui {
class modifierclient;
}

class modifierclient : public QDialog
{
    Q_OBJECT
    
public:
    explicit modifierclient(QWidget *parent = 0);
    ~modifierclient();
    
private slots:
    void on_MCprecedentPB_clicked();

    void on_Modifier_clicked();

private:
    Ui::modifierclient *ui;
    personneclient tmpCp;


};

#endif // MODIFIERCLIENT_H
