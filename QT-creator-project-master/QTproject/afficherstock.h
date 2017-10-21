#ifndef AFFICHERSTOCK_H
#define AFFICHERSTOCK_H

#include <QDialog>

namespace Ui {
class AfficherStock;
}

class AfficherStock : public QDialog
{
    Q_OBJECT
    
public:
    explicit AfficherStock(QWidget *parent = 0);
    ~AfficherStock();
    
private slots:
    void on_precedentPB_clicked();

private:
    Ui::AfficherStock *ui;
};

#endif // AFFICHERSTOCK_H
