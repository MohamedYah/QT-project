#ifndef AFFICHERFINANCE_H
#define AFFICHERFINANCE_H

#include <QDialog>

namespace Ui {
class afficherfinance;
}

class afficherfinance : public QDialog
{
    Q_OBJECT
    
public:
    explicit afficherfinance(QWidget *parent = 0);
    ~afficherfinance();
    
private slots:
    void on_AFprecedentPB_clicked();

private:
    Ui::afficherfinance *ui;
};

#endif // AFFICHERFINANCE_H
