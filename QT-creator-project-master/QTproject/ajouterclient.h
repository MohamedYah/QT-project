#ifndef CLIENTAJ_H
#define CLIENTAJ_H


#include <QMessageBox>
#include<QSqlRecord>
#include"personneclient.h"
#include <QDialog>

namespace Ui {
class clientaj;
}

class clientaj : public QDialog
{
    Q_OBJECT
    





public:
    explicit clientaj(QWidget *parent = 0);
    ~clientaj();
    personneclient tmpCp;
    
private slots:
    void on_ajouter_clicked();

private:
    Ui::clientaj *ui;



};

#endif // CLIENTAJ_H
