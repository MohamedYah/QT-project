#ifndef SUPPRIMERFINANCE_H
#define SUPPRIMERFINANCE_H

#include <QDialog>

namespace Ui {
class supprimerfinance;
}

class supprimerfinance : public QDialog
{
    Q_OBJECT
    
public:
    explicit supprimerfinance(QWidget *parent = 0);
    ~supprimerfinance();
    
private slots:
    void on_SCprecedentPB_clicked();

private:
    Ui::supprimerfinance *ui;
};

#endif // SUPPRIMERFINANCE_H
