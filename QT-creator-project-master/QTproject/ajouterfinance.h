#ifndef AJOUTERFINANCE_H
#define AJOUTERFINANCE_H

#include <QDialog>

namespace Ui {
class ajouterfinance;
}

class ajouterfinance : public QDialog
{
    Q_OBJECT
    
public:
    explicit ajouterfinance(QWidget *parent = 0);
    ~ajouterfinance();
    
private slots:
    void on_AFprecedentPB_clicked();

private:
    Ui::ajouterfinance *ui;
};

#endif // AJOUTERFINANCE_H
