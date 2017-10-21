#ifndef RECHERCHERFINANCE_H
#define RECHERCHERFINANCE_H

#include <QDialog>

namespace Ui {
class rechercherfinance;
}

class rechercherfinance : public QDialog
{
    Q_OBJECT
    
public:
    explicit rechercherfinance(QWidget *parent = 0);
    ~rechercherfinance();
    
private slots:
    void on_RFprecedentPB_clicked();

private:
    Ui::rechercherfinance *ui;
};

#endif // RECHERCHERFINANCE_H
