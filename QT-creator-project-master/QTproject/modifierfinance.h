#ifndef MODIFIERFINANCE_H
#define MODIFIERFINANCE_H

#include <QDialog>
#include"connection.h"
#include"personneclient.h"
namespace Ui {
class modifierfinance;
}

class modifierfinance : public QDialog
{
    Q_OBJECT
    
public:
    explicit modifierfinance(QWidget *parent = 0);
    ~modifierfinance();
    
private slots:
    void on_MCprecedentPB_clicked();

private:
    Ui::modifierfinance *ui;
};

#endif // MODIFIERFINANCE_H
