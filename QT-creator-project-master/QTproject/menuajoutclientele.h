#ifndef AJOUTERCLIENT_H
#define AJOUTERCLIENT_H

#include <QDialog>
#include "clientaj.h"
namespace Ui {
class ajouterclient;
}

class ajouterclient : public QDialog
{
    Q_OBJECT
    
public:
    explicit ajouterclient(QWidget *parent = 0);
    ~ajouterclient();
    
private slots:
    void on_AJCprecedentPB_clicked();

    void on_AJclientPB_clicked();

private:
    Ui::ajouterclient *ui;
};

#endif // AJOUTERCLIENT_H
